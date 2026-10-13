/* Entry 0x08952604 | file offset 0x0014F5DC | FUN_08952604 | bytes 124 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db5ac. Boundary still requires runtime validation. */

void FUN_08952604(float param_1)

{
  float *in_a3;
  float fVar1;
  
  fVar1 = param_1 * param_1;
  *in_a3 = in_a3[0xc] * 0.5 * fVar1 + in_a3[8] * param_1 + in_a3[4];
  in_a3[1] = in_a3[0xd] * 0.5 * fVar1 + in_a3[9] * param_1 + in_a3[5];
  in_a3[2] = in_a3[0xe] * 0.5 * fVar1 + in_a3[10] * param_1 + in_a3[6];
  return;
}

