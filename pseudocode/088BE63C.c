/* Entry 0x088BE63C | file offset 0x000BB614 | FUN_088be63c | bytes 1352 */

undefined4
FUN_088be63c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  int iVar18;
  undefined4 local_230;
  undefined1 auStack_22c [52];
  undefined1 auStack_1f8 [52];
  undefined1 auStack_1c4 [52];
  int local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined2 local_14c [24];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4 [4];
  undefined1 auStack_d4 [52];
  undefined1 auStack_a0 [52];
  undefined1 auStack_6c [52];
  int *local_38;
  int local_34;
  
  puVar14 = &local_230;
  iVar18 = -1;
  iVar16 = param_4 + 0x10 + *(char *)(param_4 + 0x773) * 0xc6;
  local_230 = 0;
  iVar15 = 0;
  local_38 = param_5;
  do {
    iVar13 = 0;
    do {
      iVar5 = FUN_088b7a88(iVar16,iVar15,iVar13);
      if ((iVar5 != -1) && (iVar5 = FUN_088b1d9c(), iVar5 != 0)) {
        FUN_088c005c(auStack_22c,(int)*(short *)(iVar5 + 0x14));
        FUN_088bda8c(param_1,param_2,&local_230,auStack_22c,param_3);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0xc);
    iVar13 = 0;
    do {
      iVar5 = 0;
      do {
        iVar6 = FUN_088b7ab8(iVar16,iVar15,iVar13,iVar5);
        if (iVar6 == -1) break;
        iVar6 = FUN_088b1d9c();
        if (iVar6 != 0) {
          FUN_088c005c(auStack_1f8,(int)*(short *)(iVar6 + 0x14));
          FUN_088bda8c(param_1,param_2,&local_230,auStack_1f8,param_3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 6);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 3);
  iVar15 = 0;
  do {
    iVar13 = FUN_088b7ae8(iVar16,iVar15);
    if (iVar13 == -1) break;
    iVar13 = FUN_088b1d9c();
    if (iVar13 != 0) {
      FUN_088c005c(auStack_1c4,(int)*(short *)(iVar13 + 0x14));
      FUN_088bda8c(param_1,param_2,&local_230,auStack_1c4,param_3);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x40);
  iVar15 = 0;
  do {
    uVar7 = FUN_088b7b18(iVar16,iVar15);
    FUN_088b97e8(&local_188,uVar7);
    iVar13 = local_188;
    local_190 = local_188;
    local_18c = local_184;
    if (local_188 != 0) {
      FUN_088c1578(&local_118,&local_190);
      local_11c = local_e8;
      local_180 = local_118;
      local_17c = local_114;
      local_178 = local_110;
      local_174 = local_10c;
      local_170 = local_108;
      local_16c = local_104;
      local_168 = local_100;
      local_164 = local_fc;
      local_160 = local_f8;
      local_15c = local_f4;
      local_158 = local_f0;
      local_154 = local_ec;
      local_150 = local_e8;
      iVar5 = 0;
      puVar11 = local_14c;
      puVar12 = &local_180;
      do {
        uVar1 = *(undefined2 *)((int)puVar12 + 2);
        uVar2 = *(undefined2 *)(puVar12 + 1);
        *puVar11 = *(undefined2 *)puVar12;
        uVar3 = *(undefined2 *)((int)puVar12 + 6);
        puVar11[1] = uVar1;
        uVar1 = *(undefined2 *)(puVar12 + 2);
        puVar11[2] = uVar2;
        uVar2 = *(undefined2 *)((int)puVar12 + 10);
        puVar11[3] = uVar3;
        puVar11[4] = uVar1;
        puVar11[5] = uVar2;
        iVar5 = iVar5 + 1;
        puVar11 = puVar11 + 6;
        puVar12 = puVar12 + 3;
      } while (iVar5 < 4);
      FUN_088bda8c(param_1,param_2,&local_230,local_14c,param_3);
      FUN_088bdb2c(param_1,param_2,&local_230,iVar13 + 0x1c,param_3);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 4);
  uVar7 = FUN_088b7b18(iVar16,0);
  uVar8 = FUN_088b7b18(iVar16,1);
  uVar9 = FUN_088b7b18(iVar16,2);
  uVar10 = FUN_088b7b18(iVar16,3);
  iVar15 = FUN_088c1088(local_e4,4,uVar7,uVar8,uVar9,uVar10);
  iVar13 = 0;
  if (0 < iVar15) {
    do {
      local_34 = iVar18;
      iVar18 = *(int *)((int)puVar14 + 0x14c);
      FUN_088c005c(auStack_d4,(int)*(short *)(iVar18 + 4));
      FUN_088bda8c(param_1,param_2,&local_230,auStack_d4,param_3);
      FUN_088bdb2c(param_1,param_2,&local_230,iVar18 + 0xc,param_3);
      iVar13 = iVar13 + 1;
      puVar14 = (undefined4 *)((int)puVar14 + 4);
      iVar18 = local_34;
    } while (iVar13 < iVar15);
  }
  iVar15 = 0;
  psVar17 = (short *)(iVar16 + 0xa2);
  do {
    if ((((*psVar17 != iVar18) && (iVar16 = FUN_088b29d8(), iVar16 != 0)) &&
        (*(char *)(iVar16 + 0x12) != '\0')) && (*(char *)(iVar16 + 0x12) != '\x01')) {
      FUN_088c005c(auStack_a0,(int)*(short *)(iVar16 + 6));
      FUN_088bda8c(param_1,param_2,&local_230,auStack_a0,param_3);
    }
    iVar15 = iVar15 + 1;
    psVar17 = psVar17 + 1;
  } while (iVar15 < 10);
  if (local_38 != (int *)0x0) {
    iVar18 = (**(code **)(*local_38 + 0xc))((int)local_38 + (int)*(short *)(*local_38 + 8));
    piVar4 = local_38;
    iVar15 = 0;
    if (0 < iVar18) {
      do {
        iVar16 = *piVar4;
        uVar7 = (**(code **)(iVar16 + 0x14))((int)piVar4 + (int)*(short *)(iVar16 + 0x10),iVar15);
        FUN_088c005c(auStack_6c,uVar7);
        FUN_088bda8c(param_1,param_2,&local_230,auStack_6c,param_3);
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar18);
    }
  }
  return local_230;
}

