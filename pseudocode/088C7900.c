/* Entry 0x088C7900 | file offset 0x000C48D8 | FUN_088c7900 | bytes 972 */

undefined4 FUN_088c7900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined1 local_50 [8];
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34 [3];
  
  puVar8 = local_50;
  if (*(short *)(param_1 + 6) == 0) {
    bVar1 = true;
  }
  else {
    iVar3 = sceKernelGetSystemTimeLow();
    iVar2 = (int)*(short *)(param_1 + 6);
    if (iVar2 < 0x1a) {
      iVar2 = (iVar2 * 0x4b) / 0x19;
    }
    else {
      iVar2 = (iVar2 * 0x19 + -0x271) / 0x19 + 0x4b;
    }
    local_48 = iVar3 * 0x343fd + 0x269ec3;
    bVar1 = (int)((local_48 >> 0x10 & 0x7fffU) % 100) < iVar2;
    iVar3 = 0;
    iVar2 = param_1 + 0x80;
    iVar10 = param_1 + 0xbc;
    do {
      iVar4 = 0;
      iVar7 = 0xf;
      do {
        uVar5 = ((undefined2 *)(iVar10 + iVar4))[1];
        *(undefined2 *)(iVar2 + iVar4) = *(undefined2 *)(iVar10 + iVar4);
        ((undefined2 *)(iVar2 + iVar4))[1] = uVar5;
        iVar7 = iVar7 + -1;
        iVar4 = iVar4 + 4;
      } while (iVar7 != 0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x3c;
      iVar10 = iVar10 + 0x3c;
    } while (iVar3 < 2);
    iVar3 = 0;
    iVar2 = 0xf;
    do {
      puVar6 = (undefined2 *)(param_1 + 0x44 + iVar3);
      uVar5 = puVar6[1];
      puVar9 = (undefined2 *)(param_1 + 0xf8 + iVar3);
      *puVar9 = *puVar6;
      puVar9[1] = uVar5;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 4;
    } while (iVar2 != 0);
    local_44 = 3;
    local_40 = *(int *)(param_1 + 0x134) + 1;
    iVar3 = local_40;
    if (2 < local_40) {
      iVar3 = 3;
    }
    *(int *)(param_1 + 0x134) = iVar3;
  }
  if (bVar1) {
    iVar2 = FUN_088c0f8c((int)*(short *)(param_1 + 2));
    local_34[2] = FUN_088c7894(param_3,param_4,param_1);
    local_3c = (int)*(short *)(param_1 + 6) + (int)*(char *)(iVar2 + 0x16) + 1;
    local_38 = 0x32;
    iVar3 = local_3c;
    if (0x32 < local_3c) {
      iVar3 = 0x32;
    }
    iVar3 = FUN_088c7780(local_34,iVar3,(int)*(char *)(iVar2 + 0xc),local_34[2]);
    if (iVar3 < 1) {
      return 0;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      puVar6 = (undefined2 *)(param_1 + 0x78);
      iVar10 = param_1;
      do {
        puVar9 = *(undefined2 **)(puVar8 + 0x1c);
        *(undefined2 *)(iVar10 + 0x74) = *puVar9;
        *puVar6 = puVar9[4];
        if ((*(byte *)((int)puVar9 + 0x13) & 1) == 0) {
          iVar4 = (((int)(short)puVar9[7] - (int)(short)puVar9[5]) * (int)*(short *)(param_1 + 6)) /
                  0x32 + (int)(short)puVar9[5];
          local_34[2] = local_34[2] * 0x343fd + 0x269ec3;
          puVar6[1] = (short)((int)(local_34[2] >> 0x10 & 0x7fffU) %
                             (((short)puVar9[6] - iVar4) + 1)) + (short)iVar4;
        }
        else {
          puVar6[1] = 0x7fff;
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 2;
        puVar8 = puVar8 + 4;
        iVar10 = iVar10 + 2;
      } while (iVar2 < iVar3);
    }
  }
  FUN_08935e30(param_1 + 0x44,param_2);
  FUN_08935e30(param_1 + 0x5e,param_3);
  iVar3 = (int)*(short *)(param_1 + 6);
  if (iVar3 == 0) {
    iVar3 = 0;
    iVar2 = 0xf;
    do {
      puVar6 = (undefined2 *)(param_1 + 0x44 + iVar3);
      uVar5 = puVar6[1];
      puVar9 = (undefined2 *)(param_1 + 8 + iVar3);
      *puVar9 = *puVar6;
      puVar9[1] = uVar5;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 4;
    } while (iVar2 != 0);
    iVar3 = (int)*(short *)(param_1 + 6);
  }
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfffd;
  if (iVar3 + 1 < 0x33) {
    uVar5 = (undefined2)(iVar3 + 1);
  }
  else {
    uVar5 = 0x32;
  }
  *(undefined2 *)(param_1 + 6) = uVar5;
  return 1;
}

