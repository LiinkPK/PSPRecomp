/* Entry 0x0895300C | file offset 0x0014FFE4 | FUN_0895300c | bytes 244 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db6e4. Boundary still requires runtime validation. */

void FUN_0895300c(float param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_6[5];
  fVar5 = param_6[1];
  fVar2 = param_6[6];
  fVar1 = param_6[2];
  fVar3 = *param_4 + ((param_5[8] * param_1 + param_5[4]) - (param_6[4] * param_1 + *param_6));
  param_5[4] = fVar3;
  fVar4 = param_4[1] + ((param_5[9] * param_1 + param_5[5]) - (fVar4 * param_1 + fVar5));
  param_5[5] = fVar4;
  fVar1 = param_4[2] + ((param_5[10] * param_1 + param_5[6]) - (fVar2 * param_1 + fVar1));
  param_5[6] = fVar1;
  param_5[8] = param_4[4] + (param_5[8] - param_6[4]);
  param_5[9] = param_4[5] + (param_5[9] - param_6[5]);
  fVar2 = param_6[6];
  fVar5 = param_4[6];
  *param_5 = fVar3 * 0.01;
  param_5[1] = fVar4 * 0.01;
  param_5[2] = fVar1 * 0.01;
  param_5[10] = fVar5 + (param_5[10] - fVar2);
  return;
}

