#include "discr_array_exercise.hpp"

void get_discriminant(jet_t jet){
	// For now, initialize discriminant values to all 1's
	ap_uint<4> dArray[31][255] = {1};


#pragma HLS ARRAY_PARTITION variable=dArray complete dim=0
	jet.d = dArray[jet.tk13DIP][jet.muPt];
}
