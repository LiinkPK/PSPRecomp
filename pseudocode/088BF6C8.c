/* Entry 0x088BF6C8 | file offset 0x000BC6A0 | FUN_088bf6c8 | bytes 1316 */

undefined4 FUN_088bf6c8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
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
  int local_38;
  
  puVar13 = &local_230;
  iVar16 = param_4 + 0x10 + *(char *)(param_4 + 0x773) * 0xc6;
  local_230 = 0;
  iVar15 = 0;
  local_38 = param_1;
  do {
    iVar12 = 0;
    do {
      iVar4 = FUN_088b7a88(iVar16,iVar15,iVar12);
      if ((iVar4 != -1) && (iVar4 = FUN_088b1d9c(), iVar4 != 0)) {
        FUN_088c005c(auStack_22c,(int)*(short *)(iVar4 + 0x14));
        FUN_088bd6d0(param_2,param_3,&local_230,auStack_22c);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0xc);
    iVar12 = 0;
    do {
      iVar4 = 0;
      do {
        iVar5 = FUN_088b7ab8(iVar16,iVar15,iVar12,iVar4);
        if (iVar5 == -1) break;
        iVar5 = FUN_088b1d9c();
        if (iVar5 != 0) {
          FUN_088c005c(auStack_1f8,(int)*(short *)(iVar5 + 0x14));
          FUN_088bd6d0(param_2,param_3,&local_230,auStack_1f8);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 6);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 3);
  iVar15 = 0;
  do {
    iVar12 = FUN_088b7ae8(iVar16,iVar15);
    if (iVar12 == -1) break;
    iVar12 = FUN_088b1d9c();
    if (iVar12 != 0) {
      FUN_088c005c(auStack_1c4,(int)*(short *)(iVar12 + 0x14));
      FUN_088bd6d0(param_2,param_3,&local_230,auStack_1c4);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x40);
  iVar15 = 0;
  do {
    uVar6 = FUN_088b7b18(iVar16,iVar15);
    FUN_088b97e8(&local_188,uVar6);
    iVar12 = local_188;
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
      iVar4 = 0;
      puVar10 = local_14c;
      puVar11 = &local_180;
      do {
        uVar1 = *(undefined2 *)((int)puVar11 + 2);
        uVar2 = *(undefined2 *)(puVar11 + 1);
        *puVar10 = *(undefined2 *)puVar11;
        uVar3 = *(undefined2 *)((int)puVar11 + 6);
        puVar10[1] = uVar1;
        uVar1 = *(undefined2 *)(puVar11 + 2);
        puVar10[2] = uVar2;
        uVar2 = *(undefined2 *)((int)puVar11 + 10);
        puVar10[3] = uVar3;
        puVar10[4] = uVar1;
        puVar10[5] = uVar2;
        iVar4 = iVar4 + 1;
        puVar10 = puVar10 + 6;
        puVar11 = puVar11 + 3;
      } while (iVar4 < 4);
      FUN_088bd6d0(param_2,param_3,&local_230,local_14c);
      FUN_088bd7b4(param_2,param_3,&local_230,iVar12 + 0x1c);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 4);
  uVar6 = FUN_088b7b18(iVar16,0);
  uVar7 = FUN_088b7b18(iVar16,1);
  uVar8 = FUN_088b7b18(iVar16,2);
  uVar9 = FUN_088b7b18(iVar16,3);
  iVar15 = FUN_088c1088(local_e4,4,uVar6,uVar7,uVar8,uVar9);
  iVar12 = 0;
  if (0 < iVar15) {
    do {
      iVar4 = *(int *)((int)puVar13 + 0x14c);
      FUN_088c005c(auStack_d4,(int)*(short *)(iVar4 + 4));
      FUN_088bd6d0(param_2,param_3,&local_230,auStack_d4);
      FUN_088bd7b4(param_2,param_3,&local_230,iVar4 + 0xc);
      iVar12 = iVar12 + 1;
      puVar13 = (undefined4 *)((int)puVar13 + 4);
    } while (iVar12 < iVar15);
  }
  iVar15 = 0;
  psVar17 = (short *)(iVar16 + 0xa2);
  do {
    if ((((*psVar17 != -1) && (iVar16 = FUN_088b29d8(), iVar16 != 0)) &&
        (*(char *)(iVar16 + 0x12) != '\0')) && (*(char *)(iVar16 + 0x12) != '\x01')) {
      FUN_088c005c(auStack_a0,(int)*(short *)(iVar16 + 6));
      FUN_088bd6d0(param_2,param_3,&local_230,auStack_a0);
    }
    iVar15 = iVar15 + 1;
    psVar17 = psVar17 + 1;
  } while (iVar15 < 10);
  piVar14 = *(int **)(local_38 + 4);
  if (piVar14 != (int *)0x0) {
    iVar16 = (**(code **)(*piVar14 + 0xc))((int)piVar14 + (int)*(short *)(*piVar14 + 8));
    iVar15 = local_38;
    iVar12 = 0;
    if (0 < iVar16) {
      piVar14 = *(int **)(local_38 + 4);
      while( true ) {
        uVar6 = (**(code **)(*piVar14 + 0x14))
                          ((int)piVar14 + (int)*(short *)(*piVar14 + 0x10),iVar12);
        FUN_088c005c(auStack_6c,uVar6);
        FUN_088bd6d0(param_2,param_3,&local_230,auStack_6c);
        iVar12 = iVar12 + 1;
        if (iVar16 <= iVar12) break;
        piVar14 = *(int **)(iVar15 + 4);
      }
    }
  }
  return local_230;
}

