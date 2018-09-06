#include <ap_int.h>

// Define size of discriminant array
#define N_TK13DIP_VALS (31)
#define N_MUPT_VALS (255)

// Jets
typedef struct
{
  ap_uint<5> tk13DIP;
  ap_uint<8> muPt;
} jet_t;

uint<4> get_discriminant(jet_t jet, uint4[N_TK13DIP_VALS][N_MUPT_VALS] darray);

