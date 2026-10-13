/* Entry 0x088584C0 | file offset 0x00055498 | FUN_088584c0 | bytes 412 */

void FUN_088584c0(float param_1,float param_2,float param_3,undefined4 param_4,int param_5,
                 float *param_6,short param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = 0;
  iVar2 = 1;
  fVar10 = param_3 * 12.0 * 0.5;
  fVar8 = param_3 * 16.0 * 0.5;
  if (((9 < param_9) && (iVar2 = 2, 99 < param_9)) && (iVar2 = 4, param_9 < 1000)) {
    iVar2 = 3;
  }
  iVar5 = 0;
  param_1 = param_1 + param_3 * 9.0 * (float)iVar2 * 0.5;
  if (iVar2 != 0) {
    pfVar3 = param_6 + 3;
    do {
      fVar11 = *param_6;
      psVar4 = (short *)(param_5 + iVar1 * 0x10);
      fVar9 = fVar10 + param_1;
      psVar4[4] = (short)(int)(param_1 - fVar10);
      psVar4[5] = (short)(int)((param_2 - fVar8) + fVar11);
      psVar4[6] = 0;
      psVar4[1] = param_7 * 0x10;
      *(undefined4 *)(psVar4 + 2) = param_8;
      psVar6 = (short *)(param_5 + (iVar1 + 1) * 0x10);
      param_1 = param_1 - param_3 * 9.0;
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 2;
      param_6 = param_6 + 1;
      sVar7 = (short)(param_9 % 10) * 0xc;
      *psVar4 = sVar7;
      fVar11 = *pfVar3;
      psVar6[4] = (short)(int)fVar9;
      psVar6[6] = 0;
      *psVar6 = sVar7 + 0xc;
      psVar6[5] = (short)(int)(fVar8 + param_2 + fVar11);
      psVar6[1] = param_7 * 0x10 + 0x10;
      *(undefined4 *)(psVar6 + 2) = param_8;
      pfVar3 = pfVar3 + -1;
      param_9 = param_9 / 10;
    } while (iVar5 < iVar2);
  }
  return;
}

