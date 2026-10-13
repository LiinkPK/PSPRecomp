/* Entry 0x08952B08 | file offset 0x0014FAE0 | FUN_08952b08 | bytes 112 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db644. Boundary still requires runtime validation. */

void FUN_08952b08(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                 )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_3 + (param_4[4] - *param_5);
  param_4[4] = fVar2;
  fVar1 = param_3[1] + (param_4[5] - param_5[1]);
  param_4[5] = fVar1;
  fVar4 = param_5[2];
  fVar3 = param_3[2];
  *param_4 = fVar2 * 0.01;
  param_4[1] = fVar1 * 0.01;
  fVar3 = fVar3 + (param_4[6] - fVar4);
  param_4[6] = fVar3;
  param_4[2] = fVar3 * 0.01;
  return;
}

