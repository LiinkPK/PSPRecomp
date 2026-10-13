/* Entry 0x08952338 | file offset 0x0014F310 | FUN_08952338 | bytes 128 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db554. Boundary still requires runtime validation. */

void FUN_08952338(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 *param_4,
                 float *param_5)

{
  param_4[4] = *param_3 + ((float)param_4[4] - *param_5);
  param_4[5] = param_3[1] + ((float)param_4[5] - param_5[1]);
  param_4[6] = param_3[2] + ((float)param_4[6] - param_5[2]);
  *param_4 = param_4[4];
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[3] = param_4[7];
  return;
}

