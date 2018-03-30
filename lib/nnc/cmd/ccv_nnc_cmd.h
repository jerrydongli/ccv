enum {
	CCV_NNC_NOOP = 0,
	CCV_NNC_CUSTOM_FORWARD = 2,
	CCV_NNC_CUSTOM_BACKWARD,
	CCV_NNC_GRAPH_FORWARD,
	CCV_NNC_GRAPH_BACKWARD,
	CCV_NNC_EWSUM_FORWARD = 0xe21a2c4c,
	CCV_NNC_EWSUM_BACKWARD = 0xe21a2c4d,
	CCV_NNC_EWPROD_FORWARD = 0xee07e8fe,
	CCV_NNC_EWPROD_BACKWARD = 0xee07e8ff,
	CCV_NNC_EWDIV_FORWARD = 0x1cd2fa18,
	CCV_NNC_EWDIV_BACKWARD = 0x1cd2fa19,
	CCV_NNC_EWEXP_FORWARD = 0xd784b170,
	CCV_NNC_EWEXP_BACKWARD = 0xd784b171,
	CCV_NNC_EWLOG_FORWARD = 0xf4191bf2,
	CCV_NNC_EWLOG_BACKWARD = 0xf4191bf3,
	CCV_NNC_MAX_POOL_FORWARD = 0x7bec9360,
	CCV_NNC_MAX_POOL_BACKWARD = 0x7bec9361,
	CCV_NNC_AVERAGE_POOL_FORWARD = 0x51267ab8,
	CCV_NNC_AVERAGE_POOL_BACKWARD = 0x51267ab9,
	CCV_NNC_CONVOLUTION_FORWARD = 0x254d05f4,
	CCV_NNC_CONVOLUTION_BACKWARD = 0x254d05f5,
	CCV_NNC_SOFTMAX_FORWARD = 0xc969a252,
	CCV_NNC_SOFTMAX_BACKWARD = 0xc969a253,
	CCV_NNC_RELU_FORWARD = 0xc51eaa80,
	CCV_NNC_RELU_BACKWARD = 0xc51eaa81,
	CCV_NNC_REDUCE_SUM_FORWARD = 0x52970f06,
	CCV_NNC_REDUCE_SUM_BACKWARD = 0x52970f07,
	CCV_NNC_BATCH_NORM_FORWARD = 0x5419819c,
	CCV_NNC_BATCH_NORM_BACKWARD = 0x5419819d,
	CCV_NNC_GEMM_FORWARD = 0x7e87d00c,
	CCV_NNC_GEMM_BACKWARD = 0x7e87d00d,
	CCV_NNC_ADD_FORWARD = 0x58fb3664,
	CCV_NNC_ADD_BACKWARD = 0x58fb3665,
	CCV_NNC_MUL_FORWARD = 0x24721a46,
	CCV_NNC_MUL_BACKWARD = 0x24721a47,
	CCV_NNC_SET_FORWARD = 0x2b070804,
	CCV_NNC_SET_BACKWARD = 0x2b070805,
	CCV_NNC_DATA_TRANSFER_FORWARD = 0x12d21e1a,
	CCV_NNC_DATA_TRANSFER_BACKWARD = 0x12d21e1b,
	CCV_NNC_FORMAT_TRANSFORM_FORWARD = 0xe4a2b192,
	CCV_NNC_FORMAT_TRANSFORM_BACKWARD = 0xe4a2b193,
	CCV_NNC_COUNT = 39,
};
