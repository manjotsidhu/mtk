/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

/* Ver: MT6771-PTPOFF_WAT0_85C_20170807 */
/*      others-PTPOFF_WAT0_85C_20170425 */
/* 1: MT6771_WAT0_ptpoff_85C (FY) */
/* 2: MT6771T_WAT0_ptpoff_85C (FY) */
/* 3: MT6771T_WAT0_ptpoff_85C (SB) */
/* 4: MT6771TT_WAT0_ptpoff_85C (FY) */
/* 5: MT6771TT_WAT0_ptpoff_85C (SB) */
#ifndef MTK_UNIFIED_POWER_DATA_MT6771_H
#define MTK_UNIFIED_POWER_DATA_MT6771_H
/* MT6771_WAT0_ptpoff_85C (FY) */
struct upower_tbl upower_tbl_ll_1_FY = {
	.row = {
		{.cap = 241, .volt = 60000, .dyn_pwr = 29034, .lkg_pwr = {21419, 21419, 21419, 21419, 21419, 21419} },
		{.cap = 276, .volt = 62500, .dyn_pwr = 36152, .lkg_pwr = {22689, 22689, 22689, 22689, 22689, 22689} },
		{.cap = 308, .volt = 65000, .dyn_pwr = 43570, .lkg_pwr = {23959, 23959, 23959, 23959, 23959, 23959} },
		{.cap = 343, .volt = 67500, .dyn_pwr = 52408, .lkg_pwr = {25284, 25284, 25284, 25284, 25284, 25284} },
		{.cap = 379, .volt = 70000, .dyn_pwr = 62192, .lkg_pwr = {26609, 26609, 26609, 26609, 26609, 26609} },
		{.cap = 403, .volt = 72500, .dyn_pwr = 70884, .lkg_pwr = {28022, 28022, 28022, 28022, 28022, 28022} },
		{.cap = 430, .volt = 75000, .dyn_pwr = 81062, .lkg_pwr = {29435, 29435, 29435, 29435, 29435, 29435} },
		{.cap = 458, .volt = 77500, .dyn_pwr = 92115, .lkg_pwr = {30926, 30926, 30926, 30926, 30926, 30926} },
		{.cap = 486, .volt = 80000, .dyn_pwr = 104077, .lkg_pwr = {32418, 32418, 32418, 32418, 32418, 32418} },
		{.cap = 493, .volt = 81200, .dyn_pwr = 108966, .lkg_pwr = {33173, 33173, 33173, 33173, 33173, 33173} },
		{.cap = 509, .volt = 83100, .dyn_pwr = 117777, .lkg_pwr = {34370, 34370, 34370, 34370, 34370, 34370} },
		{.cap = 521, .volt = 85000, .dyn_pwr = 126090, .lkg_pwr = {35566, 35566, 35566, 35566, 35566, 35566} },
		{.cap = 541, .volt = 87500, .dyn_pwr = 138678, .lkg_pwr = {37226, 37226, 37226, 37226, 37226, 37226} },
		{.cap = 561, .volt = 90000, .dyn_pwr = 152070, .lkg_pwr = {38886, 38886, 38886, 38886, 38886, 38886} },
		{.cap = 584, .volt = 92500, .dyn_pwr = 167423, .lkg_pwr = {40654, 40654, 40654, 40654, 40654, 40654} },
		{.cap = 604, .volt = 95000, .dyn_pwr = 182561, .lkg_pwr = {42422, 42422, 42422, 42422, 42422, 42422} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
	},
};

struct upower_tbl upower_tbl_cluster_ll_1_FY = {
	.row = {
		{.cap = 241, .volt = 60000, .dyn_pwr = 5015, .lkg_pwr = {21419, 21419, 21419, 21419, 21419, 21419} },
		{.cap = 276, .volt = 62500, .dyn_pwr = 6244, .lkg_pwr = {22689, 22689, 22689, 22689, 22689, 22689} },
		{.cap = 308, .volt = 65000, .dyn_pwr = 7526, .lkg_pwr = {23959, 23959, 23959, 23959, 23959, 23959} },
		{.cap = 343, .volt = 67500, .dyn_pwr = 9052, .lkg_pwr = {25284, 25284, 25284, 25284, 25284, 25284} },
		{.cap = 379, .volt = 70000, .dyn_pwr = 10742, .lkg_pwr = {26609, 26609, 26609, 26609, 26609, 26609} },
		{.cap = 403, .volt = 72500, .dyn_pwr = 12244, .lkg_pwr = {28022, 28022, 28022, 28022, 28022, 28022} },
		{.cap = 430, .volt = 75000, .dyn_pwr = 14002, .lkg_pwr = {29435, 29435, 29435, 29435, 29435, 29435} },
		{.cap = 458, .volt = 77500, .dyn_pwr = 15911, .lkg_pwr = {30926, 30926, 30926, 30926, 30926, 30926} },
		{.cap = 486, .volt = 80000, .dyn_pwr = 17977, .lkg_pwr = {32418, 32418, 32418, 32418, 32418, 32418} },
		{.cap = 493, .volt = 81200, .dyn_pwr = 18822, .lkg_pwr = {33173, 33173, 33173, 33173, 33173, 33173} },
		{.cap = 509, .volt = 83100, .dyn_pwr = 20343, .lkg_pwr = {34370, 34370, 34370, 34370, 34370, 34370} },
		{.cap = 521, .volt = 85000, .dyn_pwr = 21779, .lkg_pwr = {35566, 35566, 35566, 35566, 35566, 35566} },
		{.cap = 541, .volt = 87500, .dyn_pwr = 23954, .lkg_pwr = {37226, 37226, 37226, 37226, 37226, 37226} },
		{.cap = 561, .volt = 90000, .dyn_pwr = 26267, .lkg_pwr = {38886, 38886, 38886, 38886, 38886, 38886} },
		{.cap = 584, .volt = 92500, .dyn_pwr = 28919, .lkg_pwr = {40654, 40654, 40654, 40654, 40654, 40654} },
		{.cap = 604, .volt = 95000, .dyn_pwr = 31533, .lkg_pwr = {42422, 42422, 42422, 42422, 42422, 42422} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
	},
};

struct upower_tbl upower_tbl_l_1_FY = {
	.row = {
		{.cap = 408, .volt = 60000, .dyn_pwr = 52867, .lkg_pwr = {46196, 46196, 46196, 46196, 46196, 46196} },
		{.cap = 468, .volt = 62500, .dyn_pwr = 65828, .lkg_pwr = {48561, 48561, 48561, 48561, 48561, 48561} },
		{.cap = 522, .volt = 65000, .dyn_pwr = 79336, .lkg_pwr = {50926, 50926, 50926, 50926, 50926, 50926} },
		{.cap = 582, .volt = 67500, .dyn_pwr = 95428, .lkg_pwr = {53701, 53701, 53701, 53701, 53701, 53701} },
		{.cap = 643, .volt = 70000, .dyn_pwr = 113244, .lkg_pwr = {56476, 56476, 56476, 56476, 56476, 56476} },
		{.cap = 683, .volt = 72500, .dyn_pwr = 129070, .lkg_pwr = {59178, 59178, 59178, 59178, 59178, 59178} },
		{.cap = 730, .volt = 75000, .dyn_pwr = 147604, .lkg_pwr = {61881, 61881, 61881, 61881, 61881, 61881} },
		{.cap = 776, .volt = 77500, .dyn_pwr = 167730, .lkg_pwr = {64753, 64753, 64753, 64753, 64753, 64753} },
		{.cap = 823, .volt = 80000, .dyn_pwr = 189511, .lkg_pwr = {67625, 67625, 67625, 67625, 67625, 67625} },
		{.cap = 837, .volt = 81200, .dyn_pwr = 198414, .lkg_pwr = {69031, 69031, 69031, 69031, 69031, 69031} },
		{.cap = 863, .volt = 83100, .dyn_pwr = 214458, .lkg_pwr = {71258, 71258, 71258, 71258, 71258, 71258} },
		{.cap = 883, .volt = 85000, .dyn_pwr = 229594, .lkg_pwr = {73485, 73485, 73485, 73485, 73485, 73485} },
		{.cap = 917, .volt = 87500, .dyn_pwr = 252514, .lkg_pwr = {76626, 76626, 76626, 76626, 76626, 76626} },
		{.cap = 950, .volt = 90000, .dyn_pwr = 276900, .lkg_pwr = {79768, 79768, 79768, 79768, 79768, 79768} },
		{.cap = 991, .volt = 92500, .dyn_pwr = 304856, .lkg_pwr = {83254, 83254, 83254, 83254, 83254, 83254} },
		{.cap = 1024, .volt = 95000, .dyn_pwr = 332421, .lkg_pwr = {86741, 86741, 86741, 86741, 86741, 86741} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
	},
};

struct upower_tbl upower_tbl_cluster_l_1_FY = {
	.row = {
		{.cap = 408, .volt = 60000, .dyn_pwr = 7038, .lkg_pwr = {30906, 30906, 30906, 30906, 30906, 30906} },
		{.cap = 468, .volt = 62500, .dyn_pwr = 8764, .lkg_pwr = {32488, 32488, 32488, 32488, 32488, 32488} },
		{.cap = 522, .volt = 65000, .dyn_pwr = 10562, .lkg_pwr = {34070, 34070, 34070, 34070, 34070, 34070} },
		{.cap = 582, .volt = 67500, .dyn_pwr = 12705, .lkg_pwr = {35927, 35927, 35927, 35927, 35927, 35927} },
		{.cap = 643, .volt = 70000, .dyn_pwr = 15077, .lkg_pwr = {37783, 37783, 37783, 37783, 37783, 37783} },
		{.cap = 683, .volt = 72500, .dyn_pwr = 17184, .lkg_pwr = {39591, 39591, 39591, 39591, 39591, 39591} },
		{.cap = 730, .volt = 75000, .dyn_pwr = 19651, .lkg_pwr = {41399, 41399, 41399, 41399, 41399, 41399} },
		{.cap = 776, .volt = 77500, .dyn_pwr = 22330, .lkg_pwr = {43320, 43320, 43320, 43320, 43320, 43320} },
		{.cap = 823, .volt = 80000, .dyn_pwr = 25230, .lkg_pwr = {45242, 45242, 45242, 45242, 45242, 45242} },
		{.cap = 837, .volt = 81200, .dyn_pwr = 26415, .lkg_pwr = {46183, 46183, 46183, 46183, 46183, 46183} },
		{.cap = 863, .volt = 83100, .dyn_pwr = 28551, .lkg_pwr = {47673, 47673, 47673, 47673, 47673, 47673} },
		{.cap = 883, .volt = 85000, .dyn_pwr = 30567, .lkg_pwr = {49162, 49162, 49162, 49162, 49162, 49162} },
		{.cap = 917, .volt = 87500, .dyn_pwr = 33618, .lkg_pwr = {51264, 51264, 51264, 51264, 51264, 51264} },
		{.cap = 950, .volt = 90000, .dyn_pwr = 36865, .lkg_pwr = {53366, 53366, 53366, 53366, 53366, 53366} },
		{.cap = 991, .volt = 92500, .dyn_pwr = 40586, .lkg_pwr = {55698, 55698, 55698, 55698, 55698, 55698} },
		{.cap = 1024, .volt = 95000, .dyn_pwr = 44256, .lkg_pwr = {58031, 58031, 58031, 58031, 58031, 58031} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
	},
};

struct upower_tbl upower_tbl_cci_1_FY = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 1092, .lkg_pwr = {8008, 8008, 8008, 8008, 8008, 8008} },
		{.cap = 0, .volt = 62500, .dyn_pwr = 1467, .lkg_pwr = {8355, 8355, 8355, 8355, 8355, 8355} },
		{.cap = 0, .volt = 65000, .dyn_pwr = 1892, .lkg_pwr = {8702, 8702, 8702, 8702, 8702, 8702} },
		{.cap = 0, .volt = 67500, .dyn_pwr = 2435, .lkg_pwr = {9096, 9096, 9096, 9096, 9096, 9096} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 2973, .lkg_pwr = {9490, 9490, 9490, 9490, 9490, 9490} },
		{.cap = 0, .volt = 72500, .dyn_pwr = 3644, .lkg_pwr = {9938, 9938, 9938, 9938, 9938, 9938} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 4306, .lkg_pwr = {10386, 10386, 10386, 10386, 10386, 10386} },
		{.cap = 0, .volt = 77500, .dyn_pwr = 5119, .lkg_pwr = {10907, 10907, 10907, 10907, 10907, 10907} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 6009, .lkg_pwr = {11428, 11428, 11428, 11428, 11428, 11428} },
		{.cap = 0, .volt = 81200, .dyn_pwr = 6381, .lkg_pwr = {11713, 11713, 11713, 11713, 11713, 11713} },
		{.cap = 0, .volt = 83100, .dyn_pwr = 7082, .lkg_pwr = {12165, 12165, 12165, 12165, 12165, 12165} },
		{.cap = 0, .volt = 85000, .dyn_pwr = 7723, .lkg_pwr = {12617, 12617, 12617, 12617, 12617, 12617} },
		{.cap = 0, .volt = 87500, .dyn_pwr = 8737, .lkg_pwr = {13345, 13345, 13345, 13345, 13345, 13345} },
		{.cap = 0, .volt = 90000, .dyn_pwr = 9828, .lkg_pwr = {14072, 14072, 14072, 14072, 14072, 14072} },
		{.cap = 0, .volt = 92500, .dyn_pwr = 10876, .lkg_pwr = {14939, 14939, 14939, 14939, 14939, 14939} },
		{.cap = 0, .volt = 95000, .dyn_pwr = 11993, .lkg_pwr = {15805, 15805, 15805, 15805, 15805, 15805} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
	},
};

/* MT6771T_WAT0_ptpoff_85C (FY) */
struct upower_tbl upower_tbl_ll_2_FY = {
	.row = {
		{.cap = 218, .volt = 60000, .dyn_pwr = 29034, .lkg_pwr = {21419, 21419, 21419, 21419, 21419, 21419} },
		{.cap = 250, .volt = 62500, .dyn_pwr = 36152, .lkg_pwr = {22689, 22689, 22689, 22689, 22689, 22689} },
		{.cap = 279, .volt = 65000, .dyn_pwr = 43570, .lkg_pwr = {23959, 23959, 23959, 23959, 23959, 23959} },
		{.cap = 311, .volt = 67500, .dyn_pwr = 52408, .lkg_pwr = {25284, 25284, 25284, 25284, 25284, 25284} },
		{.cap = 343, .volt = 70000, .dyn_pwr = 62192, .lkg_pwr = {26609, 26609, 26609, 26609, 26609, 26609} },
		{.cap = 365, .volt = 72500, .dyn_pwr = 70884, .lkg_pwr = {28022, 28022, 28022, 28022, 28022, 28022} },
		{.cap = 390, .volt = 75000, .dyn_pwr = 81062, .lkg_pwr = {29435, 29435, 29435, 29435, 29435, 29435} },
		{.cap = 415, .volt = 77500, .dyn_pwr = 92115, .lkg_pwr = {30926, 30926, 30926, 30926, 30926, 30926} },
		{.cap = 440, .volt = 80000, .dyn_pwr = 104077, .lkg_pwr = {32418, 32418, 32418, 32418, 32418, 32418} },
		{.cap = 447, .volt = 81200, .dyn_pwr = 108966, .lkg_pwr = {33173, 33173, 33173, 33173, 33173, 33173} },
		{.cap = 461, .volt = 83100, .dyn_pwr = 117777, .lkg_pwr = {34370, 34370, 34370, 34370, 34370, 34370} },
		{.cap = 472, .volt = 85000, .dyn_pwr = 126090, .lkg_pwr = {35566, 35566, 35566, 35566, 35566, 35566} },
		{.cap = 507, .volt = 90000, .dyn_pwr = 152070, .lkg_pwr = {38886, 38886, 38886, 38886, 38886, 38886} },
		{.cap = 547, .volt = 95000, .dyn_pwr = 182561, .lkg_pwr = {42422, 42422, 42422, 42422, 42422, 42422} },
		{.cap = 579, .volt = 105000, .dyn_pwr = 236137, .lkg_pwr = {50098, 50098, 50098, 50098, 50098, 50098} },
		{.cap = 604, .volt = 111900, .dyn_pwr = 279780, .lkg_pwr = {55866, 55866, 55866, 55866, 55866, 55866} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
	},
};

struct upower_tbl upower_tbl_cluster_ll_2_FY = {
	.row = {
		{.cap = 218, .volt = 60000, .dyn_pwr = 5015, .lkg_pwr = {21419, 21419, 21419, 21419, 21419, 21419} },
		{.cap = 250, .volt = 62500, .dyn_pwr = 6244, .lkg_pwr = {22689, 22689, 22689, 22689, 22689, 22689} },
		{.cap = 279, .volt = 65000, .dyn_pwr = 7526, .lkg_pwr = {23959, 23959, 23959, 23959, 23959, 23959} },
		{.cap = 311, .volt = 67500, .dyn_pwr = 9052, .lkg_pwr = {25284, 25284, 25284, 25284, 25284, 25284} },
		{.cap = 343, .volt = 70000, .dyn_pwr = 10742, .lkg_pwr = {26609, 26609, 26609, 26609, 26609, 26609} },
		{.cap = 365, .volt = 72500, .dyn_pwr = 12244, .lkg_pwr = {28022, 28022, 28022, 28022, 28022, 28022} },
		{.cap = 390, .volt = 75000, .dyn_pwr = 14002, .lkg_pwr = {29435, 29435, 29435, 29435, 29435, 29435} },
		{.cap = 415, .volt = 77500, .dyn_pwr = 15911, .lkg_pwr = {30926, 30926, 30926, 30926, 30926, 30926} },
		{.cap = 440, .volt = 80000, .dyn_pwr = 17977, .lkg_pwr = {32418, 32418, 32418, 32418, 32418, 32418} },
		{.cap = 447, .volt = 81200, .dyn_pwr = 18822, .lkg_pwr = {33173, 33173, 33173, 33173, 33173, 33173} },
		{.cap = 461, .volt = 83100, .dyn_pwr = 20343, .lkg_pwr = {34370, 34370, 34370, 34370, 34370, 34370} },
		{.cap = 472, .volt = 85000, .dyn_pwr = 21779, .lkg_pwr = {35566, 35566, 35566, 35566, 35566, 35566} },
		{.cap = 507, .volt = 90000, .dyn_pwr = 26267, .lkg_pwr = {38886, 38886, 38886, 38886, 38886, 38886} },
		{.cap = 547, .volt = 95000, .dyn_pwr = 31533, .lkg_pwr = {42422, 42422, 42422, 42422, 42422, 42422} },
		{.cap = 579, .volt = 105000, .dyn_pwr = 40787, .lkg_pwr = {50098, 50098, 50098, 50098, 50098, 50098} },
		{.cap = 604, .volt = 111900, .dyn_pwr = 48326, .lkg_pwr = {55866, 55866, 55866, 55866, 55866, 55866} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
		{{0}, {21419} },
	},
};

struct upower_tbl upower_tbl_l_2_FY = {
	.row = {
		{.cap = 370, .volt = 60000, .dyn_pwr = 52867, .lkg_pwr = {46196, 46196, 46196, 46196, 46196, 46196} },
		{.cap = 424, .volt = 62500, .dyn_pwr = 65828, .lkg_pwr = {48561, 48561, 48561, 48561, 48561, 48561} },
		{.cap = 473, .volt = 65000, .dyn_pwr = 79336, .lkg_pwr = {50926, 50926, 50926, 50926, 50926, 50926} },
		{.cap = 527, .volt = 67500, .dyn_pwr = 95428, .lkg_pwr = {53701, 53701, 53701, 53701, 53701, 53701} },
		{.cap = 582, .volt = 70000, .dyn_pwr = 113244, .lkg_pwr = {56476, 56476, 56476, 56476, 56476, 56476} },
		{.cap = 618, .volt = 72500, .dyn_pwr = 129070, .lkg_pwr = {59178, 59178, 59178, 59178, 59178, 59178} },
		{.cap = 660, .volt = 75000, .dyn_pwr = 147604, .lkg_pwr = {61881, 61881, 61881, 61881, 61881, 61881} },
		{.cap = 703, .volt = 77500, .dyn_pwr = 167730, .lkg_pwr = {64753, 64753, 64753, 64753, 64753, 64753} },
		{.cap = 745, .volt = 80000, .dyn_pwr = 189511, .lkg_pwr = {67625, 67625, 67625, 67625, 67625, 67625} },
		{.cap = 757, .volt = 81200, .dyn_pwr = 198414, .lkg_pwr = {69031, 69031, 69031, 69031, 69031, 69031} },
		{.cap = 782, .volt = 83100, .dyn_pwr = 214458, .lkg_pwr = {71258, 71258, 71258, 71258, 71258, 71258} },
		{.cap = 800, .volt = 85000, .dyn_pwr = 229594, .lkg_pwr = {73485, 73485, 73485, 73485, 73485, 73485} },
		{.cap = 860, .volt = 90000, .dyn_pwr = 276900, .lkg_pwr = {79768, 79768, 79768, 79768, 79768, 79768} },
		{.cap = 927, .volt = 95000, .dyn_pwr = 332421, .lkg_pwr = {86741, 86741, 86741, 86741, 86741, 86741} },
		{.cap = 982, .volt = 105000, .dyn_pwr = 429975,
			.lkg_pwr = {101415, 101415, 101415, 101415, 101415, 101415} },
		{.cap = 1024, .volt = 111900, .dyn_pwr = 509444,
			.lkg_pwr = {111573, 111573, 111573, 111573, 111573, 111573} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
		{{0}, {46196} },
	},
};

struct upower_tbl upower_tbl_cluster_l_2_FY = {
	.row = {
		{.cap = 370, .volt = 60000, .dyn_pwr = 7038, .lkg_pwr = {30906, 30906, 30906, 30906, 30906, 30906} },
		{.cap = 424, .volt = 62500, .dyn_pwr = 8764, .lkg_pwr = {32488, 32488, 32488, 32488, 32488, 32488} },
		{.cap = 473, .volt = 65000, .dyn_pwr = 10562, .lkg_pwr = {34070, 34070, 34070, 34070, 34070, 34070} },
		{.cap = 527, .volt = 67500, .dyn_pwr = 12705, .lkg_pwr = {35927, 35927, 35927, 35927, 35927, 35927} },
		{.cap = 582, .volt = 70000, .dyn_pwr = 15077, .lkg_pwr = {37783, 37783, 37783, 37783, 37783, 37783} },
		{.cap = 618, .volt = 72500, .dyn_pwr = 17184, .lkg_pwr = {39591, 39591, 39591, 39591, 39591, 39591} },
		{.cap = 660, .volt = 75000, .dyn_pwr = 19651, .lkg_pwr = {41399, 41399, 41399, 41399, 41399, 41399} },
		{.cap = 703, .volt = 77500, .dyn_pwr = 22330, .lkg_pwr = {43320, 43320, 43320, 43320, 43320, 43320} },
		{.cap = 745, .volt = 80000, .dyn_pwr = 25230, .lkg_pwr = {45242, 45242, 45242, 45242, 45242, 45242} },
		{.cap = 757, .volt = 81200, .dyn_pwr = 26415, .lkg_pwr = {46183, 46183, 46183, 46183, 46183, 46183} },
		{.cap = 782, .volt = 83100, .dyn_pwr = 28551, .lkg_pwr = {47673, 47673, 47673, 47673, 47673, 47673} },
		{.cap = 800, .volt = 85000, .dyn_pwr = 30567, .lkg_pwr = {49162, 49162, 49162, 49162, 49162, 49162} },
		{.cap = 860, .volt = 90000, .dyn_pwr = 36865, .lkg_pwr = {53366, 53366, 53366, 53366, 53366, 53366} },
		{.cap = 927, .volt = 95000, .dyn_pwr = 44256, .lkg_pwr = {58031, 58031, 58031, 58031, 58031, 58031} },
		{.cap = 982, .volt = 105000, .dyn_pwr = 57244, .lkg_pwr = {67848, 67848, 67848, 67848, 67848, 67848} },
		{.cap = 1024, .volt = 111900, .dyn_pwr = 67824, .lkg_pwr = {74644, 74644, 74644, 74644, 74644, 74644} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
		{{0}, {30906} },
	},
};

struct upower_tbl upower_tbl_cci_2_FY = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 1092, .lkg_pwr = {8008, 8008, 8008, 8008, 8008, 8008} },
		{.cap = 0, .volt = 62500, .dyn_pwr = 1467, .lkg_pwr = {8355, 8355, 8355, 8355, 8355, 8355} },
		{.cap = 0, .volt = 65000, .dyn_pwr = 1892, .lkg_pwr = {8702, 8702, 8702, 8702, 8702, 8702} },
		{.cap = 0, .volt = 67500, .dyn_pwr = 2435, .lkg_pwr = {9096, 9096, 9096, 9096, 9096, 9096} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 2973, .lkg_pwr = {9490, 9490, 9490, 9490, 9490, 9490} },
		{.cap = 0, .volt = 72500, .dyn_pwr = 3644, .lkg_pwr = {9938, 9938, 9938, 9938, 9938, 9938} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 4306, .lkg_pwr = {10386, 10386, 10386, 10386, 10386, 10386} },
		{.cap = 0, .volt = 77500, .dyn_pwr = 5119, .lkg_pwr = {10907, 10907, 10907, 10907, 10907, 10907} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 6009, .lkg_pwr = {11428, 11428, 11428, 11428, 11428, 11428} },
		{.cap = 0, .volt = 81200, .dyn_pwr = 6381, .lkg_pwr = {11713, 11713, 11713, 11713, 11713, 11713} },
		{.cap = 0, .volt = 83100, .dyn_pwr = 7082, .lkg_pwr = {12165, 12165, 12165, 12165, 12165, 12165} },
		{.cap = 0, .volt = 85000, .dyn_pwr = 7723, .lkg_pwr = {12617, 12617, 12617, 12617, 12617, 12617} },
		{.cap = 0, .volt = 90000, .dyn_pwr = 9828, .lkg_pwr = {14072, 14072, 14072, 14072, 14072, 14072} },
		{.cap = 0, .volt = 95000, .dyn_pwr = 11993, .lkg_pwr = {15805, 15805, 15805, 15805, 15805, 15805} },
		{.cap = 0, .volt = 105000, .dyn_pwr = 15607, .lkg_pwr = {20339, 20339, 20339, 20339, 20339, 20339} },
		{.cap = 0, .volt = 111900, .dyn_pwr = 18629, .lkg_pwr = {24733, 24733, 24733, 24733, 24733, 24733} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
		{{0}, {8008} },
	},
};
#endif /* UNIFIED_POWER_DATA_MT6771H */
