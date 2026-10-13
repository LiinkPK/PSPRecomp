/* Entry 0x08953100 | file offset 0x001500D8 | FUN_08953100 | bytes 88 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db6ec. Boundary still requires runtime validation. */

void FUN_08953100(float param_1)

{
  float *in_a3;
  
  *in_a3 = (in_a3[8] * param_1 + in_a3[4]) * 0.01;
  in_a3[1] = (in_a3[9] * param_1 + in_a3[5]) * 0.01;
  in_a3[2] = (in_a3[10] * param_1 + in_a3[6]) * 0.01;
  return;
}

