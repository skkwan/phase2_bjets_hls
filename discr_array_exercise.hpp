#ifndef discr_array_exercise_H_
#define discr_array_exercise_H_

#include <ap_int.h>

// Jets
typedef struct
{
  ap_uint<5> tk13DIP; // 3D Impact Parameter of Track 1
  ap_uint<8> muPt;    // Muon pT
  ap_uint<1> d;       // Discriminant value
} jet_t;

void get_discriminant(jet_t &jet);

#endif
