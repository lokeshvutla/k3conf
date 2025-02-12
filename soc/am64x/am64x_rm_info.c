/*
 * AM64X RM Info
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

struct ti_sci_rm_info am64x_rm_info[] = {
	[0] = {0x0040, "RESASG_SUBTYPE_IR_OUTPUT"},
	[1] = {0x00C0, "RESASG_SUBTYPE_IR_OUTPUT"},
	[2] = {0x0140, "RESASG_SUBTYPE_IR_OUTPUT"},
	[3] = {0x0180, "RESASG_SUBTYPE_IR_OUTPUT"},
	[4] = {0x0682, "RESASG_SUBTYPE_GLOBAL_EVENT_TRIGGER"},
	[5] = {0x0683, "RESASG_SUBTYPE_UDMAP_GLOBAL_CONFIG"},
	[6] = {0x068D, "RESASG_SUBTYPE_BCDMA_RING_BLOCK_COPY_CHAN"},
	[7] = {0x068E, "RESASG_SUBTYPE_BCDMA_RING_SPLIT_TR_RX_CHAN"},
	[8] = {0x068F, "RESASG_SUBTYPE_BCDMA_RING_SPLIT_TR_TX_CHAN"},
	[9] = {0x06A0, "RESASG_SUBTYPE_BCDMA_BLOCK_COPY_CHAN"},
	[10] = {0x06A1, "RESASG_SUBTYPE_BCDMA_SPLIT_TR_RX_CHAN"},
	[11] = {0x06A2, "RESASG_SUBTYPE_BCDMA_SPLIT_TR_TX_CHAN"},
	[12] = {0x070A, "RESASG_SUBTYPE_IA_VINT"},
	[13] = {0x070D, "RESASG_SUBTYPE_GLOBAL_EVENT_SEVT"},
	[14] = {0x070F, "RESASG_SUBTYPE_IA_TIMERMGR_EVT_OES"},
	[15] = {0x0710, "RESASG_SUBTYPE_IA_PKTDMA_TX_CHAN_ERROR_OES"},
	[16] = {0x0711, "RESASG_SUBTYPE_IA_PKTDMA_TX_FLOW_COMPLETION_OES"},
	[17] = {0x0712, "RESASG_SUBTYPE_IA_PKTDMA_RX_CHAN_ERROR_OES"},
	[18] = {0x0713, "RESASG_SUBTYPE_IA_PKTDMA_RX_FLOW_COMPLETION_OES"},
	[19] = {0x0714, "RESASG_SUBTYPE_IA_PKTDMA_RX_FLOW_STARVATION_OES"},
	[20] = {0x0715, "RESASG_SUBTYPE_IA_PKTDMA_RX_FLOW_FIREWALL_OES"},
	[21] = {0x0716, "RESASG_SUBTYPE_IA_BCDMA_CHAN_ERROR_OES"},
	[22] = {0x0717, "RESASG_SUBTYPE_IA_BCDMA_CHAN_DATA_COMPLETION_OES"},
	[23] = {0x0718, "RESASG_SUBTYPE_IA_BCDMA_CHAN_RING_COMPLETION_OES"},
	[24] = {0x0719, "RESASG_SUBTYPE_IA_BCDMA_TX_CHAN_ERROR_OES"},
	[25] = {0x071A, "RESASG_SUBTYPE_IA_BCDMA_TX_CHAN_DATA_COMPLETION_OES"},
	[26] = {0x071B, "RESASG_SUBTYPE_IA_BCDMA_TX_CHAN_RING_COMPLETION_OES"},
	[27] = {0x071C, "RESASG_SUBTYPE_IA_BCDMA_RX_CHAN_ERROR_OES"},
	[28] = {0x071D, "RESASG_SUBTYPE_IA_BCDMA_RX_CHAN_DATA_COMPLETION_OES"},
	[29] = {0x071E, "RESASG_SUBTYPE_IA_BCDMA_RX_CHAN_RING_COMPLETION_OES"},
	[30] = {0x0783, "RESASG_SUBTYPE_UDMAP_GLOBAL_CONFIG"},
	[31] = {0x0790, "RESASG_SUBTYPE_PKTDMA_RING_UNMAPPED_TX_CHAN"},
	[32] = {0x0791, "RESASG_SUBTYPE_PKTDMA_RING_CPSW_TX_CHAN"},
	[33] = {0x0792, "RESASG_SUBTYPE_PKTDMA_RING_SAUL_TX_0_CHAN"},
	[34] = {0x0793, "RESASG_SUBTYPE_PKTDMA_RING_SAUL_TX_1_CHAN"},
	[35] = {0x0794, "RESASG_SUBTYPE_PKTDMA_RING_ICSSG_0_TX_CHAN"},
	[36] = {0x0795, "RESASG_SUBTYPE_PKTDMA_RING_ICSSG_1_TX_CHAN"},
	[37] = {0x0796, "RESASG_SUBTYPE_PKTDMA_RING_UNMAPPED_RX_CHAN"},
	[38] = {0x0797, "RESASG_SUBTYPE_PKTDMA_RING_CPSW_RX_CHAN"},
	[39] = {0x0798, "RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_0_CHAN"},
	[40] = {0x0799, "RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_1_CHAN"},
	[41] = {0x079A, "RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_2_CHAN"},
	[42] = {0x079B, "RESASG_SUBTYPE_PKTDMA_RING_SAUL_RX_3_CHAN"},
	[43] = {0x079C, "RESASG_SUBTYPE_PKTDMA_RING_ICSSG_0_RX_CHAN"},
	[44] = {0x079D, "RESASG_SUBTYPE_PKTDMA_RING_ICSSG_1_RX_CHAN"},
	[45] = {0x07A3, "RESASG_SUBTYPE_PKTDMA_UNMAPPED_TX_CHAN"},
	[46] = {0x07A4, "RESASG_SUBTYPE_PKTDMA_CPSW_TX_CHAN"},
	[47] = {0x07A5, "RESASG_SUBTYPE_PKTDMA_SAUL_TX_0_CHAN"},
	[48] = {0x07A6, "RESASG_SUBTYPE_PKTDMA_SAUL_TX_1_CHAN"},
	[49] = {0x07A7, "RESASG_SUBTYPE_PKTDMA_ICSSG_0_TX_CHAN"},
	[50] = {0x07A8, "RESASG_SUBTYPE_PKTDMA_ICSSG_1_TX_CHAN"},
	[51] = {0x07A9, "RESASG_SUBTYPE_PKTDMA_UNMAPPED_RX_CHAN"},
	[52] = {0x07AA, "RESASG_SUBTYPE_PKTDMA_FLOW_UNMAPPED_RX_CHAN"},
	[53] = {0x07AB, "RESASG_SUBTYPE_PKTDMA_CPSW_RX_CHAN"},
	[54] = {0x07AC, "RESASG_SUBTYPE_PKTDMA_FLOW_CPSW_RX_CHAN"},
	[55] = {0x07AD, "RESASG_SUBTYPE_PKTDMA_SAUL_RX_0_CHAN"},
	[56] = {0x07AE, "RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_0_CHAN"},
	[57] = {0x07AF, "RESASG_SUBTYPE_PKTDMA_SAUL_RX_1_CHAN"},
	[58] = {0x07B0, "RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_1_CHAN"},
	[59] = {0x07B1, "RESASG_SUBTYPE_PKTDMA_SAUL_RX_2_CHAN"},
	[60] = {0x07B2, "RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_2_CHAN"},
	[61] = {0x07B3, "RESASG_SUBTYPE_PKTDMA_SAUL_RX_3_CHAN"},
	[62] = {0x07B4, "RESASG_SUBTYPE_PKTDMA_FLOW_SAUL_RX_3_CHAN"},
	[63] = {0x07B5, "RESASG_SUBTYPE_PKTDMA_ICSSG_0_RX_CHAN"},
	[64] = {0x07B6, "RESASG_SUBTYPE_PKTDMA_FLOW_ICSSG_0_RX_CHAN"},
	[65] = {0x07B7, "RESASG_SUBTYPE_PKTDMA_ICSSG_1_RX_CHAN"},
	[66] = {0x07B8, "RESASG_SUBTYPE_PKTDMA_FLOW_ICSSG_1_RX_CHAN"},
	[67] = {0x0840, "RESASG_SUBTYPE_RA_ERROR_OES"},
	[68] = {0x084A, "RESASG_SUBTYPE_RA_VIRTID"},
	[69] = {0x084C, "RESASG_SUBTYPE_RA_GENERIC_IPC"},
};
