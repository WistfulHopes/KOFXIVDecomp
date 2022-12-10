#pragma once

enum SHADER_TYPE
{
	BASIC_SHADER_FX = 0,
	CHR_ARM_LIGHTNING_SHADER = 1,
	CHR_COM_04_SHADER = 2,
	CHR_COM_05_SHADER = 3,
	FX_DMV_MU_R_SHADER = 4,
	FX_DMV_MU_RN_SHADER = 5,
	FX_DMV_MU_RMN_SHADER = 6,
	FX_EMVM_UV2_MUAD_R_SHADER = 7,
	FX_EMVM_UV2_ADMU_R_SHADER = 8,
	FX_EVMM_UV2_ADMU_R_SHADER = 9,
	FX_EVMM_UV2_ADMU_RN_SHADER = 10,
	FX_EM_DMV_MU_SHADER = 11,
	FX_EMVM_MUAD_R_SHADER = 12,
	FX_EMVM_MUAD2_R_SHADER = 13,
	FX_EMVUV2_MU_D_RMA_SHADER = 14,
	FX_OM_EMVM_MUAD_R_SHADER = 15,
	FX_OM_EMMV_ADMU_R_SHADER = 16,
	FX_EMMV_ADMU_R_SHADER = 17,
	FX_EMMV_ADMU_R_SCR_SHADER = 18,
	FX_OMV_EMMV_ADMU_R_SCR_SHADER = 19,
	FX_EMV_MU_DC_SHADER = 20,
	FX_EMV_MU_SHADER = 21,
	FX_EMV_MU_R_SHADER = 22,
	FX_EMV_MU_RA_SHADER = 23,
	FX_EMV_UV2_MU_R_CAUS_SHADER = 24,
	FX_EMMV_UV3_MU_R_CAUS_SHADER = 25,
	FX_EMVV_MUAD_R_SHADER = 26,
	FX_EMCV_AD_SHADER = 27,
	FX_OV_ECV_AD_SHADER = 28,
	FX_OM_EMC_AD_SHADER = 29,
	FX_OM_EM_SHADER = 30,
	FX_OM_DM_RN_SHADER = 31,
	FX_OM_EMV_MU_SHADER = 32,
	FX_OM_EMM_UV2_MU_SHADER = 33,
	FX_OM_EMV_MU_DC_SHADER = 34,
	FX_OM_EMV_AD_SHADER = 35,
	FX_EMV_AD_SHADER = 36,
	FX_OM_EMV_MU_DM_RMC_LE_SHADER = 37,
	FX_EMV_UV2_MU_C_AD_SHADER = 38,
	FX_OMV_UV3_WFL_SHADER = 39,
	FX_OMV_UV2_WFL_SHADER = 40,
	FX_RN_WAT_SHADER = 41,
	FX_DC_SHADER = 42,
	FX_OM_EMM_AD_SHADER = 43,
	FX_OMV_EMM_AD_SHADER = 44,
	FX_EMM_UV2_MU_R_SHADER = 45,
	FX_EMM_UV2_MU_RN_SHADER = 46,
	FX_OMV_EMM_UV2_MU_RN_SHADER = 47,
	FX_DMM_UV2_MU_R_SHADER = 48,
	FX_DMM_UV2_MU_RN_SHADER = 49,
	FX_DMM_BLEND2_UV2_MU_RN_SHADER = 50,
	FX_EMM_BLEND2_UV2_MU_RN_SHADER = 51,
	FX_EV_DMM_UV2_MU_R_SHADER = 52,
	FX_EV_DMM_UV2_MU_RN_SHADER = 53,
	FX_EV_DM_R_SHADER = 54,
	FX_EV_DM_RN_SHADER = 55,
	FX_DM_RN_SHADER = 56,
	FX_MOB_SHADER = 57,
	UNKNOWN_SHADER_FX = 58,
	SHADER_TYPE_LAST = 59,
};
struct SHADER_TYPE_TBL
{
	const char * typeName; // 0x0
	SHADER_TYPE type; // 0x8
};
enum <unnamed-enum-SHADERFX_START>
{
};
enum COMPUTE_SHADERS
{
	CS_TRANSFORM_WITH_ANIM = 0,
	CS_TRANSFORM_NO_ANIM = 1,
	CS_TEXTURE_COPY = 2,
	CS_TEXTURE_COPY_DEPTH = 3,
	CS_TEXTURE_COPY_TWO = 4,
	CS_TEXTURE_COPY_TWO_DEPTHS = 5,
	CS_SCREEN_FILTER = 6,
	CS_COMBINE_TWO_DEPTH_TEX = 7,
	CS_COMBINE_THREE_MASK_TEXTURES_TWO_OUT = 8,
	CS_COMBINE_TWO_MASK_TEXTURES_TWO_OUT = 9,
	CS_GAUSSIAN_BLUR_HORIZ = 10,
	CS_GAUSSIAN_BLUR_VERT = 11,
	CS_BLOOM_DEPTH_FILTER = 12,
	CS_DEPTH_MAP_RENDER = 13,
};