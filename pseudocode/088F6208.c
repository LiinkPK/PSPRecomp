/* Entry 0x088F6208 | file offset 0x000F31E0 | FUN_088f6208 | bytes 724 */

void FUN_088f6208(int param_1,short *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 auStack_6a90 [92];
  undefined1 auStack_69d8 [25160];
  undefined2 auStack_790 [92];
  undefined1 auStack_6d8 [1707];
  char local_2d;
  
  FUN_088f4fc8(param_1);
  FUN_088f4cf0(param_1);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0xc) = (int)*param_2;
  *(short *)(param_1 + 0x24) = param_2[1];
  uVar1 = *(undefined1 *)((int)param_2 + 9);
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 8;
  *(undefined1 *)(param_1 + 0x26) = uVar1;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 0x10;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 0x40;
  if (param_2[2] != -1) {
    uVar6 = FUN_0887afbc(&DAT_09b68b48,(int)param_2[2],0);
    FUN_08935524(param_1 + 0x30,uVar6,0x1a);
  }
  if (param_2[3] == -1) {
    cVar2 = (char)param_2[5];
  }
  else {
    psVar7 = (short *)FUN_0887afbc(&DAT_09b68b48,(int)param_2[3],0);
    uVar8 = 0;
    sVar4 = *psVar7;
    iVar9 = param_1;
    while (sVar4 != 0) {
      if (sVar4 != 10) {
        *(short *)(iVar9 + 0x4a) = sVar4;
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 2;
        if (0x4b < uVar8) goto LAB_088f6330;
      }
      psVar7 = psVar7 + 1;
      sVar4 = *psVar7;
    }
    *(undefined2 *)(iVar9 + 0x4a) = 0;
LAB_088f6330:
    cVar2 = (char)param_2[5];
  }
  *(short *)(param_1 + 0xfc) = (short)cVar2;
  *(undefined1 *)(param_1 + 0xfe) = 1;
  *(short *)(param_1 + 0x100) = (short)*(char *)((int)param_2 + 0xb);
  uVar5 = FUN_088c0674((int)(char)param_2[6]);
  *(undefined2 *)(param_1 + 0x102) = uVar5;
  *(short *)(param_1 + 0x104) = (short)*(char *)((int)param_2 + 0xd);
  *(short *)(param_1 + 0x106) = param_2[7];
  FUN_088b7e30(auStack_790);
  FUN_088b83f0(auStack_790,(int)(char)param_2[5]);
  if (param_2[8] != -1) {
    uVar6 = FUN_088bca50();
    FUN_088bc17c(uVar6,auStack_790);
  }
  if (param_2[9] != -1) {
    uVar6 = FUN_088bca74();
    FUN_088bc4c0(uVar6,auStack_790);
  }
  if (param_2[10] != -1) {
    uVar6 = FUN_088bca98((int)param_2[10],0,1,0,0xffffffff);
    FUN_088bc58c(uVar6,auStack_790);
  }
  if (param_2[0xb] != -1) {
    uVar6 = FUN_088bcb08();
    FUN_088bc648(uVar6,auStack_790);
  }
  iVar9 = local_2d * 0xc6;
  sVar4 = param_2[0xd];
  if (param_2[0xc] != -1) {
    auStack_6d8[iVar9 + 2] = (char)param_2[0xc];
  }
  auStack_6d8[iVar9] = (char)sVar4;
  auStack_6d8[iVar9 + 1] = *(undefined1 *)((int)param_2 + 0x1b);
  puVar13 = auStack_790 + local_2d * 99;
  iVar9 = 0;
  iVar10 = 0x31;
  uVar5 = *puVar13;
  puVar11 = puVar13;
  puVar12 = (undefined2 *)(param_1 + 0x108);
  do {
    uVar3 = puVar11[1];
    *puVar12 = uVar5;
    iVar9 = iVar9 + 4;
    puVar12[1] = uVar3;
    puVar11 = (undefined2 *)((int)puVar13 + iVar9);
    iVar10 = iVar10 + -1;
    uVar5 = *puVar11;
    puVar12 = (undefined2 *)(param_1 + 0x108 + iVar9);
  } while (iVar10 != 0);
  *puVar12 = uVar5;
  return;
}

