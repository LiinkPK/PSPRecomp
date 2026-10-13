/* Entry 0x0898C2F0 | file offset 0x001892C8 | FUN_0898c2f0 | bytes 1720 */

void FUN_0898c2f0(float param_1,float param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  float *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined *local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  if (*(char *)(param_4 + 0xb7) != '\0') {
    pfVar6 = *(float **)(param_3 + 0x28);
    local_80 = pfVar6;
    local_7c = param_4;
    local_6c = param_6;
    local_68 = param_5;
    FUN_0898a908(param_3,auStack_120,param_4,param_5,param_6,param_7,param_8);
    fVar2 = (float)FUN_089a48cc(param_9);
    fVar3 = (float)FUN_089a48cc(param_10);
    fVar15 = *(float *)(param_3 + 0x90);
    iVar4 = *(int *)(param_3 + 4);
    fVar12 = *(float *)(param_3 + 0x9c);
    fVar16 = *(float *)(param_3 + 0x94) - fVar15;
    iVar5 = *(int *)(iVar4 + 4);
    fVar13 = *(float *)(param_3 + 0x98);
    local_74 = param_4 + 0x20;
    local_70 = &DAT_089da410;
    local_64 = param_3 + 0x70;
    local_78 = param_3;
    local_60 = param_8 - 1;
    local_58 = fVar2;
    if (*(char *)(param_4 + 0xb9) == '\0') {
      fVar18 = fVar15 + param_1 * fVar16;
      fVar15 = fVar15 + param_2 * fVar16;
      iVar4 = (**(code **)(iVar5 + 0x24))(iVar4 + *(short *)(iVar5 + 0x20));
      pfVar8 = local_80;
      local_54 = *(float *)(param_3 + 0x98);
      fVar16 = (float)(iVar4 + -1);
      fVar17 = fVar18 + (fVar15 - fVar18) * 0.5;
      if (iVar4 + -1 < 0) {
        fVar16 = fVar16 + 4.2949673e+09;
        local_78 = param_3;
      }
      fVar16 = (fVar12 - fVar13) / fVar16;
      local_5c = fVar15;
      FUN_089a34c0(local_80 + 3,auStack_120);
      FUN_089a3918(auStack_c0,local_70,local_74);
      FUN_089a3a84(0,0x3f800000,auStack_c0,auStack_c0);
      fVar12 = (float)FUN_089a48cc(auStack_c0);
      pfVar8[2] = fVar12;
      *pfVar8 = fVar17;
      pfVar8[1] = local_54;
      FUN_089a34c0(pfVar6 + 9,auStack_110);
      iVar4 = local_7c;
      pfVar6[8] = fVar2;
      pfVar6[6] = fVar18;
      pfVar6[7] = local_54 + fVar16 * *(float *)(local_7c + 100);
      FUN_089a34c0(pfVar6 + 0xf,auStack_100);
      fVar12 = local_58;
      fVar2 = local_5c;
      uVar1 = local_60;
      pfVar6[0xe] = fVar3;
      pfVar6[0xc] = local_5c;
      pfVar7 = pfVar8 + 0x12;
      fVar13 = fVar16 + local_54;
      uVar11 = 1;
      iVar10 = 3;
      pfVar8 = pfVar8 + 0x15;
      pfVar6[0xd] = local_54 + fVar16 * *(float *)(iVar4 + 100);
      fVar15 = fVar13;
      iVar4 = local_6c;
      iVar5 = local_68;
      if (1 < local_60) {
        do {
          FUN_089a34c0(pfVar8,iVar5 + 0x10);
          pfVar7[2] = fVar12;
          *pfVar7 = fVar18;
          pfVar7[1] = fVar13;
          FUN_089a34c0(pfVar8 + 6,iVar4 + 0x10);
          fVar15 = fVar16 + fVar13;
          pfVar7[8] = fVar3;
          pfVar7[6] = fVar2;
          pfVar7[7] = fVar13;
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + 2;
          pfVar7 = pfVar7 + 0xc;
          pfVar8 = pfVar8 + 0xc;
          fVar13 = fVar15;
          iVar4 = iVar4 + 0x10;
          iVar5 = iVar5 + 0x10;
        } while (uVar11 < uVar1);
      }
      FUN_089a34c0(pfVar8,auStack_e0);
      iVar4 = local_7c;
      pfVar6 = local_80;
      pfVar7[2] = fVar12;
      *pfVar7 = fVar18;
      pfVar9 = local_80 + (iVar10 + 1) * 6;
      pfVar7[1] = fVar15 - fVar16 * *(float *)(local_7c + 100);
      FUN_089a34c0(pfVar9 + 3,auStack_d0);
      pfVar9[2] = fVar3;
      *pfVar9 = fVar2;
      pfVar8 = pfVar6 + (iVar10 + 2) * 6;
      pfVar9[1] = fVar15 - fVar16 * *(float *)(iVar4 + 100);
      FUN_089a34c0(pfVar8 + 3,auStack_f0);
      FUN_089a3918(auStack_b0,local_70,local_64);
      FUN_089a3a84(0,0x3f800000,auStack_b0,auStack_b0);
      fVar2 = (float)FUN_089a48cc(auStack_b0);
      pfVar8[2] = fVar2;
      *pfVar8 = fVar17;
      pfVar8[1] = fVar15;
      pfVar6 = pfVar6 + (iVar10 + 3) * 6;
    }
    else {
      fVar13 = fVar13 - fVar12;
      fVar15 = fVar12 + param_1 * fVar13;
      fVar12 = fVar12 + param_2 * fVar13;
      iVar4 = (**(code **)(iVar5 + 0x24))(iVar4 + *(short *)(iVar5 + 0x20));
      pfVar8 = local_80;
      local_50 = *(float *)(param_3 + 0x90);
      local_54 = (float)(iVar4 + -1);
      if (iVar4 + -1 < 0) {
        local_54 = local_54 + 4.2949673e+09;
        local_78 = param_3;
      }
      local_54 = fVar16 / local_54;
      FUN_089a34c0(local_80 + 3,auStack_120);
      FUN_089a3918(auStack_a0,local_70,local_74);
      FUN_089a3a84(0,0x3f800000,auStack_a0,auStack_a0);
      fVar13 = (float)FUN_089a48cc(auStack_a0);
      pfVar8[2] = fVar13;
      *pfVar8 = local_50;
      local_4c = 0.5;
      pfVar8[1] = fVar12 + (fVar15 - fVar12) * 0.5;
      FUN_089a34c0(pfVar6 + 9,auStack_110);
      fVar16 = local_50;
      fVar13 = local_54;
      iVar4 = local_7c;
      pfVar6[8] = fVar2;
      fVar2 = *(float *)(local_7c + 100);
      pfVar6[7] = fVar15;
      pfVar6[6] = local_50 + local_54 * fVar2;
      FUN_089a34c0(pfVar6 + 0xf,auStack_100);
      fVar18 = local_4c;
      fVar2 = local_58;
      uVar1 = local_60;
      pfVar6[0xe] = fVar3;
      fVar14 = *(float *)(iVar4 + 100);
      fVar17 = fVar13 + fVar16;
      pfVar6[0xd] = fVar12;
      pfVar7 = pfVar8 + 0x12;
      uVar11 = 1;
      iVar10 = 3;
      pfVar8 = pfVar8 + 0x15;
      pfVar6[0xc] = fVar16 + fVar13 * fVar14;
      fVar16 = fVar17;
      iVar4 = local_6c;
      iVar5 = local_68;
      if (1 < local_60) {
        do {
          FUN_089a34c0(pfVar8,iVar5 + 0x10);
          pfVar7[2] = fVar2;
          *pfVar7 = fVar17;
          pfVar7[1] = fVar15;
          FUN_089a34c0(pfVar8 + 6,iVar4 + 0x10);
          fVar16 = fVar13 + fVar17;
          pfVar7[8] = fVar3;
          pfVar7[6] = fVar17;
          pfVar7[7] = fVar12;
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + 2;
          pfVar7 = pfVar7 + 0xc;
          pfVar8 = pfVar8 + 0xc;
          fVar17 = fVar16;
          iVar4 = iVar4 + 0x10;
          iVar5 = iVar5 + 0x10;
        } while (uVar11 < uVar1);
      }
      FUN_089a34c0(pfVar8,auStack_e0);
      iVar4 = local_7c;
      pfVar6 = local_80;
      pfVar7[2] = fVar2;
      fVar2 = *(float *)(local_7c + 100);
      pfVar7[1] = fVar15;
      pfVar9 = local_80 + (iVar10 + 1) * 6;
      *pfVar7 = fVar16 - fVar13 * fVar2;
      FUN_089a34c0(pfVar9 + 3,auStack_d0);
      pfVar9[2] = fVar3;
      fVar2 = *(float *)(iVar4 + 100);
      pfVar9[1] = fVar12;
      pfVar8 = pfVar6 + (iVar10 + 2) * 6;
      *pfVar9 = fVar16 - fVar13 * fVar2;
      FUN_089a34c0(pfVar8 + 3,auStack_f0);
      FUN_089a3918(auStack_90,local_70,local_64);
      FUN_089a3a84(0,0x3f800000,auStack_90,auStack_90);
      fVar2 = (float)FUN_089a48cc(auStack_90);
      pfVar8[2] = fVar2;
      *pfVar8 = fVar16;
      pfVar6 = pfVar6 + (iVar10 + 3) * 6;
      pfVar8[1] = fVar15 + (fVar12 - fVar15) * fVar18;
    }
    *(float **)(local_78 + 0x28) = pfVar6;
  }
  return;
}

