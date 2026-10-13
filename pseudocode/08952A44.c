/* Entry 0x08952A44 | file offset 0x0014FA1C | FUN_08952a44 | bytes 196 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db63c. Boundary still requires runtime validation. */

undefined4 FUN_08952a44(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  param_4[4] = *param_3;
  param_4[5] = fVar3;
  param_4[6] = fVar4;
  param_4[7] = 0.0;
  puVar1 = *(uint **)(param_2 + 0x98);
  if (puVar1 == (uint *)0x0) {
    fVar3 = param_4[4];
  }
  else if ((*puVar1 & 0x40) == 0) {
    fVar3 = param_4[4];
  }
  else {
    pfVar2 = (float *)puVar1[7];
    fVar3 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar4 = pfVar2[3];
    param_4[4] = *pfVar2;
    param_4[5] = fVar3;
    param_4[6] = fVar5;
    param_4[7] = fVar4;
    fVar3 = param_4[4];
  }
  *param_4 = fVar3 * 0.01;
  param_4[1] = param_4[5] * 0.01;
  param_4[2] = param_4[6] * 0.01;
  return 1;
}

