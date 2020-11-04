/*
 * AM65X RM Info
 *
 * Copyright (C) 2020 Texas Instruments Incorporated - https://www.ti.com/
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

#include <tisci.h>
#include <socinfo.h>

struct ti_sci_rm_info am65x_rm_info[] = {
	[0] = {0x00C0, "RESASG_SUBTYPE_IR_OUTPUT"},
	[1] = {0x1840, "RESASG_SUBTYPE_IR_OUTPUT"},
	[2] = {0x1880, "RESASG_SUBTYPE_IR_OUTPUT"},
	[3] = {0x1900, "RESASG_SUBTYPE_IR_OUTPUT"},
	[4] = {0x2440, "RESASG_SUBTYPE_IR_OUTPUT"},
	[5] = {0x2700, "RESASG_SUBTYPE_IR_OUTPUT"},
	[6] = {0x2CCA, "RESASG_SUBTYPE_IA_VINT"},
	[7] = {0x2CCD, "RESASG_SUBTYPE_GLOBAL_EVENT_SEVT"},
	[8] = {0x2D0A, "RESASG_SUBTYPE_IA_VINT"},
	[9] = {0x2D0D, "RESASG_SUBTYPE_GLOBAL_EVENT_SEVT"},
	[10] = {0x2D4A, "RESASG_SUBTYPE_IA_VINT"},
	[11] = {0x2D4D, "RESASG_SUBTYPE_GLOBAL_EVENT_SEVT"},
	[12] = {0x2D80, "RESASG_SUBTYPE_IR_OUTPUT"},
	[13] = {0x2E40, "RESASG_SUBTYPE_PROXY_PROXIES"},
	[14] = {0x2EC0, "RESASG_SUBTYPE_RA_ERROR_OES"},
	[15] = {0x2EC1, "RESASG_SUBTYPE_RA_GP"},
	[16] = {0x2EC2, "RESASG_SUBTYPE_RA_UDMAP_RX"},
	[17] = {0x2EC3, "RESASG_SUBTYPE_RA_UDMAP_TX"},
	[18] = {0x2EC4, "RESASG_SUBTYPE_RA_UDMAP_TX_EXT"},
	[19] = {0x2EC5, "RESASG_SUBTYPE_RA_UDMAP_RX_H"},
	[20] = {0x2EC7, "RESASG_SUBTYPE_RA_UDMAP_TX_H"},
	[21] = {0x2ECA, "RESASG_SUBTYPE_RA_VIRTID"},
	[22] = {0x2ECB, "RESASG_SUBTYPE_RA_MONITORS"},
	[23] = {0x2F00, "RESASG_SUBTYPE_UDMAP_RX_FLOW_COMMON"},
	[24] = {0x2F01, "RESASG_SUBTYPE_UDMAP_INVALID_FLOW_OES"},
	[25] = {0x2F02, "RESASG_SUBTYPE_GLOBAL_EVENT_TRIGGER"},
	[26] = {0x2F03, "RESASG_SUBTYPE_UDMAP_GLOBAL_CONFIG"},
	[27] = {0x2F0A, "RESASG_SUBTYPE_UDMAP_RX_CHAN"},
	[28] = {0x2F0B, "RESASG_SUBTYPE_UDMAP_RX_HCHAN"},
	[29] = {0x2F0D, "RESASG_SUBTYPE_UDMAP_TX_CHAN"},
	[30] = {0x2F0E, "RESASG_SUBTYPE_UDMAP_TX_ECHAN"},
	[31] = {0x2F0F, "RESASG_SUBTYPE_UDMAP_TX_HCHAN"},
	[32] = {0x2F4A, "RESASG_SUBTYPE_IA_VINT"},
	[33] = {0x2F4D, "RESASG_SUBTYPE_GLOBAL_EVENT_SEVT"},
	[34] = {0x2F80, "RESASG_SUBTYPE_IR_OUTPUT"},
	[35] = {0x2FC0, "RESASG_SUBTYPE_PROXY_PROXIES"},
	[36] = {0x3080, "RESASG_SUBTYPE_UDMAP_RX_FLOW_COMMON"},
	[37] = {0x3081, "RESASG_SUBTYPE_UDMAP_INVALID_FLOW_OES"},
	[38] = {0x3082, "RESASG_SUBTYPE_GLOBAL_EVENT_TRIGGER"},
	[39] = {0x3083, "RESASG_SUBTYPE_UDMAP_GLOBAL_CONFIG"},
	[40] = {0x308A, "RESASG_SUBTYPE_UDMAP_RX_CHAN"},
	[41] = {0x308B, "RESASG_SUBTYPE_UDMAP_RX_HCHAN"},
	[42] = {0x308D, "RESASG_SUBTYPE_UDMAP_TX_CHAN"},
	[43] = {0x308F, "RESASG_SUBTYPE_UDMAP_TX_HCHAN"},
	[44] = {0x30C0, "RESASG_SUBTYPE_RA_ERROR_OES"},
	[45] = {0x30C1, "RESASG_SUBTYPE_RA_GP"},
	[46] = {0x30C2, "RESASG_SUBTYPE_RA_UDMAP_RX"},
	[47] = {0x30C3, "RESASG_SUBTYPE_RA_UDMAP_TX"},
	[48] = {0x30C5, "RESASG_SUBTYPE_RA_UDMAP_RX_H"},
	[49] = {0x30C7, "RESASG_SUBTYPE_RA_UDMAP_TX_H"},
	[50] = {0x30CA, "RESASG_SUBTYPE_RA_VIRTID"},
	[51] = {0x30CB, "RESASG_SUBTYPE_RA_MONITORS"},
};
