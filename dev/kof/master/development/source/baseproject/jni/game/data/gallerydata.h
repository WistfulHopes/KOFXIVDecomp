#pragma once

enum GALLERY_ID
{
	GALLERY_ID_NONE = 255,
	GALLERY_ID_ITEM = 0,
	GALLERY_ID_ITEM_C_0 = 0,
	GALLERY_ID_ITEM_C_0_SIZE = 88,
	GALLERY_ID_ITEM_C_1 = 88,
	GALLERY_ID_ITEM_C_1_SIZE = 19,
	GALLERY_ID_ITEM_C_2 = 107,
	GALLERY_ID_ITEM_C_2_SIZE = 257,
	GALLERY_ID_ITEM_C_3 = 364,
	GALLERY_ID_ITEM_C_3_SIZE = 71,
	GALLERY_ID_ITEM_SIZE = 435,
	GALLERY_ID_ITEM_ICON = 364,
	GALLERY_ID_ITEM_ICON_SIZE = 71,
	GALLERY_ID_MOVIE = 450,
	GALLERY_ID_MOVIE_OP = 450,
	GALLERY_ID_MOVIE_PROLOGUE = 451,
	GALLERY_ID_MOVIE_INTERLUDE = 452,
	GALLERY_ID_MOVIE_ANTONOV = 453,
	GALLERY_ID_MOVIE_VERSE_1_EDIT = 454,
	GALLERY_ID_MOVIE_VERSE_1_JPN = 455,
	GALLERY_ID_MOVIE_VERSE_1_ANOTHER = 456,
	GALLERY_ID_MOVIE_VERSE_1_CHN = 457,
	GALLERY_ID_MOVIE_VERSE_1_OFFCIAL = 458,
	GALLERY_ID_MOVIE_VERSE_2 = 459,
	GALLERY_ID_MOVIE_ED_JAPAN = 460,
	GALLERY_ID_MOVIE_ED_ARTOFFIGHTING = 461,
	GALLERY_ID_MOVIE_ED_FATALFURY = 462,
	GALLERY_ID_MOVIE_ED_IKARIWARRIORS = 463,
	GALLERY_ID_MOVIE_ED_YAGAMI = 464,
	GALLERY_ID_MOVIE_ED_KDS = 465,
	GALLERY_ID_MOVIE_ED_SOUTHOWN = 466,
	GALLERY_ID_MOVIE_ED_WOMENFIGHTERS = 467,
	GALLERY_ID_MOVIE_ED_KIM = 468,
	GALLERY_ID_MOVIE_ED_PSYCHOSOLDIER = 469,
	GALLERY_ID_MOVIE_ED_VILLAINS = 470,
	GALLERY_ID_MOVIE_ED_ANOTHERWORLD = 471,
	GALLERY_ID_MOVIE_ED_MEXICO = 472,
	GALLERY_ID_MOVIE_ED_CHINA = 473,
	GALLERY_ID_MOVIE_ED_SOUTHAMERICAN = 474,
	GALLERY_ID_MOVIE_ED_OFFICIALINVITATION = 475,
	GALLERY_ID_MOVIE_ED_ANTONOV = 476,
	GALLERY_ID_MOVIE_ED_VERSE = 477,
	GALLERY_ID_END_CREDIT = 478,
	GALLERY_ID_MOVIE_SIZE = 29,
	GALLERY_ID_SOUND = 500,
	GALLERY_ID_SOUND_CH = 500,
	GALLERY_ID_SOUND_CH_SIZE = 50,
	GALLERY_ID_SOUND_AN = 550,
	GALLERY_ID_SOUND_AN_MEN = 550,
	GALLERY_ID_SOUND_AN_WOMEN = 551,
	GALLERY_ID_SOUND_AN_SYSTEM = 552,
	GALLERY_ID_SOUND_AN_SIZE = 3,
	GALLERY_ID_SOUND_BGM = 553,
	GALLERY_ID_SOUND_BGM_01_NEO_ESAKA = 553,
	GALLERY_ID_SOUND_BGM_02_RYUKO = 554,
	GALLERY_ID_SOUND_BGM_03_GAROU = 555,
	GALLERY_ID_SOUND_BGM_04_IKARI = 556,
	GALLERY_ID_SOUND_BGM_05_YAGAMI = 557,
	GALLERY_ID_SOUND_BGM_06_K_DASH = 558,
	GALLERY_ID_SOUND_BGM_07_SOUTH_TOWN = 559,
	GALLERY_ID_SOUND_BGM_08_JOKAKU = 560,
	GALLERY_ID_SOUND_BGM_09_KIM = 561,
	GALLERY_ID_SOUND_BGM_10_PSYCHO = 562,
	GALLERY_ID_SOUND_BGM_11_AKUNIN = 563,
	GALLERY_ID_SOUND_BGM_12_ISEKAI = 564,
	GALLERY_ID_SOUND_BGM_13_MEXICO = 565,
	GALLERY_ID_SOUND_BGM_14_CHINA = 566,
	GALLERY_ID_SOUND_BGM_15_SOUTH_AMERICA = 567,
	GALLERY_ID_SOUND_BGM_16_OFFICIAL = 568,
	GALLERY_ID_SOUND_BGM_19_ANTONOV_VOICE_LESS = 569,
	GALLERY_ID_SOUND_BGM_18_LAST_BOSS = 570,
	GALLERY_ID_SOUND_BGM_17_ANTONOV = 571,
	GALLERY_ID_SOUND_BGM_24_RIVAL_KYO_VS_IORI = 572,
	GALLERY_ID_SOUND_BGM_26_RIVAL_TERRY_VS_GEESE = 573,
	GALLERY_ID_SOUND_BGM_29_RIVAL_ATHENA_VS_KENSOU = 574,
	GALLERY_ID_SOUND_BGM_25_RIVAL_RYO_VS_KING = 575,
	GALLERY_ID_SOUND_BGM_30_RIVAL_KIM_VS_CHOI = 576,
	GALLERY_ID_SOUND_BGM_27_RIVAL_RALF_VS_CLARK = 577,
	GALLERY_ID_SOUND_BGM_28_RIVAL_KULA_VS_ANGEL = 578,
	GALLERY_ID_SOUND_BGM_ROCK = 579,
	GALLERY_ID_SOUND_BGM_YAMAZAKI = 580,
	GALLERY_ID_SOUND_BGM_VANESSA = 581,
	GALLERY_ID_SOUND_BGM_WHIP = 582,
	GALLERY_ID_SOUND_BGM_GTR_STAGE = 583,
	GALLERY_ID_SOUND_BGM_RIVAL_RYO_VS_GEESE = 584,
	GALLERY_ID_SOUND_BGM_RIVAL_ANDY_VS_TUN = 585,
	GALLERY_ID_SOUND_BGM_RIVAL_BILLY_VS_HEIN = 586,
	GALLERY_ID_SOUND_CH_ROC = 587,
	GALLERY_ID_SOUND_CH_YMZ = 588,
	GALLERY_ID_SOUND_CH_VNS = 589,
	GALLERY_ID_SOUND_CH_WHP = 590,
	GALLERY_ID_SOUND_BGM_HEIDERN = 610,
	GALLERY_ID_SOUND_BGM_OSWALD = 611,
	GALLERY_ID_SOUND_BGM_MARY = 612,
	GALLERY_ID_SOUND_BGM_NJD = 613,
	GALLERY_ID_SOUND_BGM_RIVAL_K_DASH_VS_RALF = 614,
	GALLERY_ID_SOUND_BGM_RIVAL_SHUNEI_VS_KUKRI = 615,
	GALLERY_ID_SOUND_BGM_RIVAL_C_KYO_VS_C_IORI = 616,
	GALLERY_ID_SOUND_BGM_RIVAL_C_IORI_VS_C_KYO = 617,
	GALLERY_ID_SOUND_CH_HDR = 618,
	GALLERY_ID_SOUND_CH_OSW = 619,
	GALLERY_ID_SOUND_CH_MRY = 620,
	GALLERY_ID_SOUND_CH_NJD = 621,
	GALLERY_ID_SOUND_BGM_SIZE = 26,
	GALLERY_ID_SOUND_200_SIZE = 12,
	GALLERY_ID_SOUND_300_SIZE = 12,
	GALLERY_ID_SOUND_SIZE = 91,
	GALLERY_ID_ART = 600,
	GALLERY_ID_ART_DOUMON = 600,
	GALLERY_ID_ART_NESTS = 601,
	GALLERY_ID_ART_SLOT = 602,
	GALLERY_ID_ART_NINJYA = 603,
	GALLERY_ID_ART_SHISYOU = 604,
	GALLERY_ID_ART_TIGER = 605,
	GALLERY_ID_ART_DRAGON = 606,
	GALLERY_ID_ART_MYSTERIOUS = 607,
	GALLERY_ID_ART_BIRD = 608,
	GALLERY_ID_ART_HAIR = 609,
	GALLERY_ID_ART_SIZE = 10,
	GALLERY_ID_SIZE = 589,
	GALLERY_ID_MAX = 630,
};
enum GALLERY_TYPE
{
	GALLERY_TYPE_ITEM = 0,
	GALLERY_TYPE_MOVIE = 1,
	GALLERY_TYPE_SOUND = 2,
	GALLERY_TYPE_ARTWORK = 3,
};