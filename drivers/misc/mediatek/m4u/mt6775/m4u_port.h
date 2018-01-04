/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __M4U_PORT_H__
#define __M4U_PORT_H__

/* ==================================== */
/* about portid */
/* ==================================== */

enum {
	/*larb0*/
	M4U_PORT_DISP_OVL0,
	M4U_PORT_DISP_2L_OVL0_LARB0,
	M4U_PORT_DISP_RDMA0,
	M4U_PORT_DISP_WDMA0,
	M4U_PORT_MDP_RDMA0,
	M4U_PORT_MDP_WROT0,
	M4U_PORT_DISP_FAKE0,
	/*larb1*/
	M4U_PORT_DISP_OVL1,
	M4U_PORT_DISP_RDMA1,
	M4U_PORT_DISP_2L_OVL0_LARB1,
	M4U_PORT_MDP_RDMA1,
	M4U_PORT_MDP_WROT1,
	M4U_PORT_DISP_FAKE1,
	/*larb2*/
	M4U_PORT_IMG_IPUO,
	M4U_PORT_IMG_IPU3O,
	M4U_PORT_IMG_IPUI,
	/*larb3*/
	M4U_PORT_CAM_IPUO,
	M4U_PORT_CAM_IPU2O,
	M4U_PORT_CAM_IPU3O,
	M4U_PORT_CAM_IPUI,
	M4U_PORT_CAM_IPU2I,
	/*larb4*/
	M4U_PORT_HW_VDEC_MC_EXT,
	M4U_PORT_HW_VDEC_PP_EXT,
	M4U_PORT_HW_VDEC_UFO_EXT,
	M4U_PORT_HW_VDEC_VLD_EXT,
	M4U_PORT_HW_VDEC_VLD2_EXT,
	M4U_PORT_HW_VDEC_AVC_MV_EXT,
	M4U_PORT_HW_VDEC_PRED_RD_EXT,
	M4U_PORT_HW_VDEC_PRED_WR_EXT,
	M4U_PORT_HW_VDEC_PPWRAP_EXT,
	M4U_PORT_HW_VDEC_TILE_EXT,
	/*larb5 IMGSYS*/
	M4U_PORT_CAM_IMGI,
	M4U_PORT_CAM_IMG2O,
	M4U_PORT_CAM_IMG3O,
	M4U_PORT_CAM_VIPI,
	M4U_PORT_CAM_LCEI,
	M4U_PORT_CAM_SMXI,
	M4U_PORT_CAM_SMXO,
	M4U_PORT_CAM_WPE0_RDMA1,
	M4U_PORT_CAM_WPE0_RDMA0,
	M4U_PORT_CAM_WPE0_WDMA,
	M4U_PORT_CAM_FD_RP,
	M4U_PORT_CAM_FD_WR,
	M4U_PORT_CAM_FD_RB,
	M4U_PORT_CAM_WPE1_RDMA1,
	M4U_PORT_CAM_WPE1_RDMA0,
	M4U_PORT_CAM_WPE1_WDMA,
	M4U_PORT_CAM_DPE_RDMA,
	M4U_PORT_CAM_DPE_WDMA,
	M4U_PORT_CAM_MFB_RDMA0,
	M4U_PORT_CAM_MFB_RDMA1,
	M4U_PORT_CAM_MFB_WDMA,
	M4U_PORT_CAM_RSC_RDMA0,
	M4U_PORT_CAM_RSC_WDMA,
	M4U_PORT_CAM_OWE_RDMA,
	M4U_PORT_CAM_OWE_WDMA,
	/*larb6*/
	M4U_PORT_CAM_IMGO,
	M4U_PORT_CAM_RRZO,
	M4U_PORT_CAM_AAO,
	M4U_PORT_CAM_AFO,
	M4U_PORT_CAM_LSCI0,
	M4U_PORT_CAM_LSCI1,
	M4U_PORT_CAM_PDO,
	M4U_PORT_CAM_BPCI,
	M4U_PORT_CAM_LCSO,
	M4U_PORT_CAM_AFO_1,
	M4U_PORT_CAM_PSO,
	M4U_PORT_CAM_LSCI2,
	M4U_PORT_CAM_SOCO,
	M4U_PORT_CAM_SOC1,
	M4U_PORT_CAM_SOC2,
	M4U_PORT_CAM_CCUI,
	M4U_PORT_CAM_CCUO,
	M4U_PORT_CAM_UFEO,
	M4U_PORT_CAM_RAWI_A,
	M4U_PORT_CAM_RSSO_A,
	M4U_PORT_CAM_CCUG,
	M4U_PORT_CAM_PDI,
	M4U_PORT_CAM_FLKO,
	M4U_PORT_CAM_IMVO,
	M4U_PORT_CAM_UFGO,
	M4U_PORT_CAM_SPARE,
	M4U_PORT_CAM_SPARE2,
	M4U_PORT_CAM_SPARE3,
	M4U_PORT_CAM_SPARE4,
	M4U_PORT_CAM_SPARE5,
	M4U_PORT_CAM_SPARE6,
	/*larb7*/
	M4U_PORT_VENC_RCPU,
	M4U_PORT_VENC_REC,
	M4U_PORT_VENC_BSDMA,
	M4U_PORT_VENC_SV_COMV,
	M4U_PORT_VENC_RD_COMV,
	M4U_PORT_JPGENC_RDMA,
	M4U_PORT_JPGENC_BSDMA,
	M4U_PORT_VENC_CUR_LUMA,
	M4U_PORT_VENC_CUR_CHROMA,
	M4U_PORT_VENC_REF_LUMA,
	M4U_PORT_VENC_REF_CHROMA,

	M4U_PORT_VPU0,
	M4U_PORT_VPU1,

	M4U_PORT_UNKNOWN

};
#define M4U_PORT_NR M4U_PORT_UNKNOWN

#endif