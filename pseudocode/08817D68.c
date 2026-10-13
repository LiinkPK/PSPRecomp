/* Entry 0x08817D68 | file offset 0x00014D40 | FUN_08817d68 | bytes 772 */

undefined4 FUN_08817d68(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  FUN_08817d18();
  if (param_2 == 0) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
  iVar8 = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  while (iVar8 = FUN_08835134(param_2,0xc,iVar8), iVar8 != 0) {
    bVar2 = false;
    iVar3 = iVar8;
    do {
      iVar3 = FUN_08835134(param_2,0xc,iVar3);
      if (iVar3 == 0) {
        cVar1 = *(char *)(param_1 + 0x1a);
        goto LAB_08817e28;
      }
    } while (*(short *)(iVar8 + 6) != *(short *)(iVar3 + 6));
    cVar1 = *(char *)(param_1 + 0x1a);
    bVar2 = true;
LAB_08817e28:
    if (!bVar2) {
      *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + '\x01';
    }
    *(char *)(param_1 + 0x1a) = cVar1 + '\x01';
  }
  if (*(char *)(param_1 + 0x19) != 0) {
    iVar8 = FUN_08842100((int)*(char *)(param_1 + 0x19) << 5);
    *(int *)(param_1 + 0x20) = iVar8;
    if (iVar8 == 0) {
      return 0xfffffffe;
    }
    iVar8 = FUN_08842100(*(char *)(param_1 + 0x1a) * 0x24);
    *(int *)(param_1 + 0x24) = iVar8;
    if (iVar8 == 0) {
      return 0xfffffffd;
    }
    iVar8 = 0;
    iVar3 = 0;
    while (iVar8 = FUN_08835134(param_2,0xc,iVar8), iVar8 != 0) {
      bVar2 = false;
      iVar4 = iVar8;
      do {
        iVar4 = FUN_08835134(param_2,0xc,iVar4);
        if (iVar4 == 0) goto LAB_08817ef8;
      } while (*(short *)(iVar8 + 6) != *(short *)(iVar4 + 6));
      bVar2 = true;
LAB_08817ef8:
      if (!bVar2) {
        *(undefined2 *)(*(int *)(param_1 + 0x20) + iVar3) = *(undefined2 *)(iVar8 + 6);
        iVar3 = iVar3 + 0x20;
      }
    }
    iVar8 = (int)*(char *)(param_1 + 0x19);
    iVar3 = 0;
    sVar7 = 0;
    if (0 < iVar8) {
      iVar4 = *(int *)(param_1 + 0x20);
      iVar9 = 0;
      do {
        *(undefined2 *)(iVar4 + iVar9 + 2) = 0;
        iVar8 = 0;
        *(short *)(*(int *)(param_1 + 0x20) + iVar9 + 4) = sVar7;
        while( true ) {
          iVar8 = FUN_08835134(param_2,0xc,iVar8);
          iVar4 = *(int *)(param_1 + 0x20);
          psVar6 = (short *)(iVar4 + iVar9);
          if (iVar8 == 0) break;
          if ((uint)*(ushort *)(iVar8 + 6) == (int)*psVar6) {
            psVar6[1] = psVar6[1] + 1;
          }
        }
        iVar3 = iVar3 + 1;
        sVar7 = sVar7 + psVar6[1];
        iVar8 = (int)*(char *)(param_1 + 0x19);
        iVar9 = iVar9 + 0x20;
      } while (iVar3 < iVar8);
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < iVar8) {
      iVar8 = 0;
      do {
        iVar9 = 0;
        while (iVar9 = FUN_08835134(param_2,0xc,iVar9), iVar9 != 0) {
          if ((uint)*(ushort *)(iVar9 + 6) == (int)*(short *)(*(int *)(param_1 + 0x20) + iVar4)) {
            *(int *)(*(int *)(param_1 + 0x24) + iVar8) = iVar9;
            iVar8 = iVar8 + 0x24;
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar3 < *(char *)(param_1 + 0x19));
    }
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar8 = FUN_08818070(param_1);
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}

