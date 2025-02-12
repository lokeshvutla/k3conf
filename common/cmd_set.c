/*
 * K3CONF Command Set
 *
 * Copyright (C) 2019 Texas Instruments Incorporated - https://www.ti.com/
 *	Lokesh Vutla <lokeshvutla@ti.com>
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <tisci.h>
#include <socinfo.h>
#include <help.h>
#include <k3conf.h>

static int set_clock(int argc, char *argv[])
{
	uint32_t dev_id, clk_id, ret;
	uint64_t freq;

	if (argc < 3)
		return -1;

	ret = sscanf(argv[0], "%u", &dev_id);
	if (ret != 1)
		return -1;

	ret = sscanf(argv[1], "%u", &clk_id);
	if (ret != 1)
		return -1;

	ret = sscanf(argv[2], "%lu", &freq);
	if (ret != 1)
		return -1;

	ret = ti_sci_cmd_set_clk_freq(dev_id, clk_id, freq);
	if (ret)
		return ret;

	return dump_clocks_info(argc, argv);
}

int process_set_command(int argc, char *argv[])
{
	int ret;

	if (argc < 1) {
		help(HELP_SET);
		return -1;
	}

	if (!strncmp(argv[0], "clock", 5)) {
		argc--;
		argv++;
		ret = set_clock(argc, argv);
		if (ret) {
			fprintf(stderr, "Invalid clock arguments\n");
			help(HELP_SET_CLOCK);
		}
	} else if (!strcmp(argv[0], "--help")) {
		help(HELP_SET);
		return 0;
	} else {
		fprintf(stderr, "Invalid argument %s\n", argv[1]);
		help(HELP_SET);
		return -1;
	}
	return ret;
}
