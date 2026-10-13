/* Entry 0x0894EBA8 | file offset 0x0014BB80 | FUN_0894eba8 | bytes 328 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db144. Boundary still requires runtime validation. */

void FUN_0894eba8(float param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 undefined4 *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_6[5];
  fVar5 = param_6[1];
  fVar1 = param_6[6];
  fVar4 = param_6[2];
  fVar2 = param_6[7];
  fVar6 = param_6[3];
  param_5[4] = *param_4 +
               (((float)param_5[8] * param_1 + (float)param_5[4]) -
               (param_6[4] * param_1 + *param_6));
  param_5[5] = param_4[1] +
               (((float)param_5[9] * param_1 + (float)param_5[5]) - (fVar3 * param_1 + fVar5));
  param_5[6] = param_4[2] +
               (((float)param_5[10] * param_1 + (float)param_5[6]) - (fVar1 * param_1 + fVar4));
  param_5[7] = param_4[3] +
               (((float)param_5[0xb] * param_1 + (float)param_5[7]) - (fVar2 * param_1 + fVar6));
  param_5[8] = param_4[4] + ((float)param_5[8] - param_6[4]);
  param_5[9] = param_4[5] + ((float)param_5[9] - param_6[5]);
  param_5[10] = param_4[6] + ((float)param_5[10] - param_6[6]);
  param_5[0xb] = param_4[7] + ((float)param_5[0xb] - param_6[7]);
  *param_5 = param_5[4];
  param_5[1] = param_5[5];
  param_5[2] = param_5[6];
  param_5[3] = param_5[7];
  return;
}

