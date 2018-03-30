CMD_SRCS := ./ew/ccv_nnc_ew_cpu_ref.c ./pool/ccv_nnc_max_pool_cpu_ref.c ./pool/ccv_nnc_avg_pool_cpu_ref.c ./convolution/ccv_nnc_conv_cpu_ref.c ./convolution/ccv_nnc_conv_cpu_opt.c ./softmax/ccv_nnc_softmax_cpu_ref.c ./relu/ccv_nnc_relu_cpu_ref.c ./reduce/ccv_nnc_reduce_sum_cpu_ref.c ./norm/ccv_nnc_batch_norm_cpu_ref.c ./blas/ccv_nnc_gemm_cpu_ref.c ./blas/ccv_nnc_gemm_cpu_opt.c ./blas/ccv_nnc_add_cpu_ref.c ./blas/ccv_nnc_mul_cpu_ref.c ./util/ccv_nnc_util_cpu_ref.c ./ew/ccv_nnc_ew.c ./pool/ccv_nnc_pool.c ./convolution/ccv_nnc_convolution.c ./convolution/cpu_opt/_ccv_nnc_conv_cpu_4x4_3x3_winograd.c ./convolution/cpu_opt/_ccv_nnc_conv_cpu_fft.c ./convolution/cpu_opt/_ccv_nnc_conv_cpu_gemm.c ./convolution/cpu_opt/_ccv_nnc_conv_cpu_opt.c ./softmax/ccv_nnc_softmax.c ./relu/ccv_nnc_relu.c ./reduce/ccv_nnc_reduce.c ./norm/ccv_nnc_batch_norm.c ./blas/ccv_nnc_blas.c ./blas/cpu_opt/_ccv_nnc_gemm_cpu_opt.c ./blas/cpu_sys/_ccv_nnc_gemm_cpu_sys.c ./util/ccv_nnc_util.c
CUDA_CMD_SRCS := ./convolution/ccv_nnc_conv_gpu_cudnn.cu ./util/ccv_nnc_util_gpu_ref.cu ./util/ccv_nnc_util_gpu_cudnn.cu
