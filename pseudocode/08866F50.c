/* Entry 0x08866F50 | file offset 0x00063F28 | FUN_08866f50 | bytes 932 */

void FUN_08866f50(float param_1,float param_2,float param_3,float param_4,uint param_5,int param_6,
                 uint param_7,int param_8,undefined4 param_9)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (((((int)param_5 < 0x1e0) && (0 < (int)param_7)) && (param_6 < 0x110)) && (0 < param_8)) {
    FUN_089a296c(2);
    FUN_089a29c4();
    FUN_089a250c();
    FUN_089a2568();
    FUN_089a2a40();
    FUN_089a296c(1);
    FUN_089a29c4();
    FUN_089a250c();
    FUN_089a2568();
    FUN_089a2a40();
    FUN_089a296c(0);
    FUN_089a29c4();
    FUN_089a250c();
    fVar13 = 272.0;
    FUN_089a2820(0,0x43f00000,0x43880000,0,0xbf800000,0x3f800000);
    FUN_089a2568();
    FUN_089a2a40();
    FUN_089a0c8c(param_9);
    iVar3 = param_7 - param_5;
    iVar8 = 0x20;
    fVar12 = (float)param_6;
    if (*(char *)(DAT_089d5ec0 + 0x2ccf) == '\x01') {
      iVar8 = 0x10;
    }
    fVar14 = fVar12;
    if (param_6 < 0) {
      fVar14 = 0.0;
    }
    if (param_8 < 0x111) {
      fVar13 = (float)param_8;
    }
    uVar9 = 0x1e0;
    if ((int)param_7 < 0x1e0) {
      uVar9 = param_7;
    }
    uVar10 = param_5;
    if ((int)param_5 < 0) {
      uVar10 = 0;
    }
    uVar4 = iVar8 + uVar10 & ~(iVar8 - 1U);
    uVar11 = uVar9;
    if ((int)uVar4 < (int)uVar9) {
      uVar11 = uVar4;
    }
    uVar4 = param_5;
    if ((int)param_5 < 0) {
      uVar4 = 0;
    }
    if (0x1e0 < (int)param_7) {
      param_7 = 0x1e0;
    }
    iVar7 = ((int)param_7 / iVar8 - (int)uVar4 / iVar8) + (uint)((int)param_7 % iVar8 != 0);
    pfVar2 = (float *)FUN_089a00f4(iVar7 * 0x28);
    if ((int)uVar10 < (int)uVar11) {
      iVar6 = uVar10 - param_5;
      pfVar5 = pfVar2;
      do {
        pfVar5[1] = ((fVar14 - fVar12) / (float)(param_8 - param_6)) * (param_4 - param_2) + param_2
        ;
        pfVar5[3] = fVar14;
        pfVar5[4] = 0.0;
        pfVar5[2] = (float)(int)uVar10;
        *pfVar5 = ((float)iVar6 / (float)iVar3) * (param_3 - param_1) + param_1;
        pfVar5[6] = ((fVar13 - fVar12) / (float)(param_8 - param_6)) * (param_4 - param_2) + param_2
        ;
        pfVar5[8] = fVar13;
        pfVar5[9] = 0.0;
        pfVar5[5] = ((float)(int)(uVar11 - param_5) / (float)iVar3) * (param_3 - param_1) + param_1;
        pfVar5[7] = (float)(int)uVar11;
        uVar4 = uVar9;
        if ((int)(iVar8 + uVar11) < (int)uVar9) {
          uVar4 = iVar8 + uVar11;
        }
        bVar1 = (int)uVar11 < (int)uVar4;
        iVar6 = uVar11 - param_5;
        pfVar5 = pfVar5 + 10;
        uVar10 = uVar11;
        uVar11 = uVar4;
      } while (bVar1);
    }
    FUN_089a0520(6,0x183,iVar7 * 2,0,pfVar2);
  }
  return;
}

