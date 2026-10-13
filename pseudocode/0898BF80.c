/* Entry 0x0898BF80 | file offset 0x00188F58 | FUN_0898bf80 | bytes 880 */

void FUN_0898bf80(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = (float)FUN_089a48cc(param_5);
  fVar2 = (float)FUN_089a48cc(param_6);
  pfVar3 = *(float **)(param_1 + 0x28);
  iVar10 = 0;
  if (*(char *)(param_2 + 0xb7) == '\0') {
    uVar8 = 0;
    iVar4 = 0;
    pfVar5 = pfVar3;
    if (param_4 != 0) {
      pfVar7 = pfVar3 + 1;
      iVar6 = param_3;
      do {
        FUN_089a34c0(pfVar7,param_3);
        *pfVar5 = fVar1;
        FUN_089a34c0(pfVar7 + 4,iVar6);
        pfVar5[4] = fVar2;
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + 2;
        iVar4 = iVar4 + 0x20;
        pfVar5 = pfVar5 + 8;
        pfVar7 = pfVar7 + 8;
        iVar6 = iVar6 + 0x10;
      } while (uVar8 < param_4);
      pfVar5 = *(float **)(param_1 + 0x28);
    }
    FUN_089a0520(4,0x19c,iVar10,0,pfVar5);
    *(int *)(param_1 + 0x28) = (int)pfVar3 + iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
    fVar15 = *(float *)(param_1 + 0x90);
    fVar14 = *(float *)(param_1 + 0x94);
    fVar13 = *(float *)(param_1 + 0x9c);
    iVar6 = *(int *)(iVar4 + 4);
    fVar11 = *(float *)(param_1 + 0x98);
    iVar9 = 0;
    if (*(char *)(param_2 + 0xb9) == '\0') {
      iVar4 = (**(code **)(iVar6 + 0x24))(iVar4 + *(short *)(iVar6 + 0x20));
      fVar16 = (float)(iVar4 + -1);
      fVar12 = *(float *)(param_1 + 0x98);
      if (iVar4 + -1 < 0) {
        fVar16 = fVar16 + 4.2949673e+09;
      }
      uVar8 = 0;
      if (param_4 != 0) {
        pfVar7 = pfVar3 + 3;
        pfVar5 = pfVar3;
        iVar4 = param_3;
        do {
          FUN_089a34c0(pfVar7,param_3);
          pfVar5[2] = fVar1;
          *pfVar5 = fVar15;
          pfVar5[1] = fVar12;
          FUN_089a34c0(pfVar7 + 6,iVar4);
          pfVar5[8] = fVar2;
          pfVar5[6] = fVar14;
          pfVar5[7] = fVar12;
          uVar8 = uVar8 + 1;
          fVar12 = (fVar13 - fVar11) / fVar16 + fVar12;
          iVar10 = iVar10 + 2;
          iVar9 = iVar9 + 0x30;
          pfVar5 = pfVar5 + 0xc;
          pfVar7 = pfVar7 + 0xc;
          iVar4 = iVar4 + 0x10;
        } while (uVar8 < param_4);
      }
    }
    else {
      iVar4 = (**(code **)(iVar6 + 0x24))(iVar4 + *(short *)(iVar6 + 0x20));
      fVar12 = (float)(iVar4 + -1);
      fVar16 = *(float *)(param_1 + 0x90);
      if (iVar4 + -1 < 0) {
        fVar12 = fVar12 + 4.2949673e+09;
      }
      uVar8 = 0;
      if (param_4 != 0) {
        pfVar7 = pfVar3 + 3;
        pfVar5 = pfVar3;
        iVar4 = param_3;
        do {
          FUN_089a34c0(pfVar7,param_3);
          pfVar5[2] = fVar1;
          *pfVar5 = fVar16;
          pfVar5[1] = fVar13;
          FUN_089a34c0(pfVar7 + 6,iVar4);
          pfVar5[8] = fVar2;
          pfVar5[6] = fVar16;
          pfVar5[7] = fVar11;
          fVar16 = (fVar15 - fVar14) / fVar12 + fVar16;
          uVar8 = uVar8 + 1;
          iVar10 = iVar10 + 2;
          iVar9 = iVar9 + 0x30;
          pfVar5 = pfVar5 + 0xc;
          pfVar7 = pfVar7 + 0xc;
          iVar4 = iVar4 + 0x10;
        } while (uVar8 < param_4);
      }
    }
    FUN_089a0520(4,0x19f,iVar10,0,pfVar3);
    *(int *)(param_1 + 0x28) = (int)pfVar3 + iVar9;
  }
  return;
}

