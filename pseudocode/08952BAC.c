/* Entry 0x08952BAC | file offset 0x0014FB84 | FUN_08952bac | bytes 428 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db68c. Boundary still requires runtime validation. */

undefined4 FUN_08952bac(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  param_4[4] = *param_3;
  param_4[5] = fVar4;
  param_4[6] = fVar5;
  param_4[7] = 0.0;
  fVar5 = param_3[5];
  fVar4 = param_3[6];
  param_4[8] = param_3[4];
  param_4[9] = fVar5;
  param_4[10] = fVar4;
  param_4[0xb] = 0.0;
  fVar4 = param_3[9];
  fVar5 = param_3[10];
  param_4[0xc] = param_3[8];
  param_4[0xd] = fVar4;
  param_4[0xe] = fVar5;
  param_4[0xf] = 0.0;
  puVar1 = *(uint **)(param_2 + 0x98);
  if (puVar1 == (uint *)0x0) {
    fVar4 = param_4[4];
  }
  else {
    uVar2 = *puVar1;
    if ((uVar2 & 0x40) != 0) {
      pfVar3 = (float *)puVar1[7];
      fVar4 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar5 = pfVar3[3];
      param_4[4] = *pfVar3;
      param_4[5] = fVar4;
      param_4[6] = fVar6;
      param_4[7] = fVar5;
      uVar2 = *puVar1;
    }
    if ((uVar2 & 0x80) != 0) {
      pfVar3 = (float *)puVar1[8];
      fVar4 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar5 = pfVar3[3];
      param_4[8] = *pfVar3;
      param_4[9] = fVar4;
      param_4[10] = fVar6;
      param_4[0xb] = fVar5;
      uVar2 = *puVar1;
    }
    if ((uVar2 & 0x100) == 0) {
      fVar4 = param_4[4];
    }
    else {
      pfVar3 = (float *)puVar1[9];
      fVar4 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar5 = pfVar3[3];
      param_4[0xc] = *pfVar3;
      param_4[0xd] = fVar4;
      param_4[0xe] = fVar6;
      param_4[0xf] = fVar5;
      fVar4 = param_4[4];
    }
  }
  *param_4 = fVar4 * 0.01;
  param_4[1] = param_4[5] * 0.01;
  param_4[2] = param_4[6] * 0.01;
  return 1;
}

