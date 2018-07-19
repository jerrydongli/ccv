#include "ccv_nnc.h"

// This is the virtual table of the model.
typedef struct {
	void (*deinit)(ccv_cnnp_model_t* const self); // It can be nil.
	void (*build)(ccv_cnnp_model_t* const self, ccv_nnc_symbolic_graph_t* const graph, const ccv_nnc_tensor_symbol_t* const inputs, const int input_size, ccv_nnc_tensor_symbol_t* const outputs, const int output_size); // Call this graph to build computation. No need to specify input size or output size, as it is defined along in the model already.
	void (*add_to_trainable)(ccv_cnnp_model_t* const self, ccv_array_t* const trainables); // This is called to add ccv_nnc_tensor_symbol_t to as list of trainables.
} ccv_cnnp_model_vtab_t;

// This contains relevant information after model compilation.
typedef struct {
	ccv_nnc_graph_t* graph;
	ccv_nnc_tensor_arena_t* tensor_arena;
	ccv_nnc_graph_exec_arena_t* graph_exec_arena;
	ccv_array_t* trainables;
	ccv_nnc_tensor_symbol_t* updated_trainables;
	ccv_nnc_cmd_t minimizer;
	ccv_nnc_cmd_t loss;
	ccv_nnc_tensor_symbol_map_t* saved_aux;
	ccv_nnc_tensor_symbol_t fits[1];
} ccv_cnnp_compiled_unit_t;

struct ccv_cnnp_model_s {
	const ccv_cnnp_model_vtab_t* isa;
	int input_size;
	int output_size;
	ccv_cnnp_model_io_t io; // The opaque io that can be nil.
	ccv_nnc_symbolic_graph_t* graph;
	ccv_nnc_tensor_symbol_t* inputs; // Unlike outputs, which is not dynamically allocated, inputs is dynamically allocated, and may be 0.
	ccv_nnc_tensor_symbol_t* outputs;
	ccv_cnnp_compiled_unit_t* compiled_unit;
};

static inline void ccv_cnnp_model_build(ccv_cnnp_model_t* const self, ccv_nnc_symbolic_graph_t* const graph, const ccv_nnc_tensor_symbol_t* const inputs, const int input_size, ccv_nnc_tensor_symbol_t* const outputs, const int output_size)
{
	if (outputs && output_size)
	{
		assert(output_size == self->output_size);
		self->isa->build(self, graph, inputs, input_size, outputs, output_size);
		memcpy(self->outputs, outputs, sizeof(ccv_nnc_tensor_symbol_t) * output_size);
	} else
		self->isa->build(self, graph, inputs, input_size, self->outputs, self->output_size);
}

static inline void ccv_cnnp_model_add_to_trainable(ccv_cnnp_model_t* const self, ccv_array_t* const trainables)
{
	if (self->isa->add_to_trainable)
		self->isa->add_to_trainable(self, trainables);
}
