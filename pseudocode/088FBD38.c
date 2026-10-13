/* Entry 0x088FBD38 | file offset 0x000F8D10 | FUN_088fbd38 | bytes 296 */

void FUN_088fbd38(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0xa80);
  *(ushort *)(iVar2 + 0x20) = *(ushort *)(iVar2 + 0x20) | 0x4000;
  FUN_088d9d24();
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0xa84);
  *(ushort *)(iVar2 + 0x20) = *(ushort *)(iVar2 + 0x20) | 0x4000;
  FUN_088d9d24();
  iVar5 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(iVar5 + 0x10b0);
  iVar4 = 0;
  iVar2 = *(int *)(iVar5 + 0x10ac);
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      if ((iVar4 <= iVar2) && ((*(ushort *)(iVar5 + iVar6 + 0x1c) & 1) != 0)) {
        *(ushort *)(*(int *)(iVar5 + 0xa80) + 0x20) =
             *(ushort *)(*(int *)(iVar5 + 0xa80) + 0x20) & 0xbfff;
        FUN_088d9d24();
        iVar5 = *(int *)(param_1 + 0x30);
        iVar3 = *(int *)(iVar5 + 0x10b0);
        iVar2 = *(int *)(iVar5 + 0x10ac);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (iVar4 < iVar3);
  }
  iVar3 = iVar3 + 9;
  bVar1 = iVar2 < iVar3;
  if (!bVar1) {
    iVar4 = iVar3 * 0x1c;
    do {
      if ((!bVar1) && ((*(ushort *)(iVar5 + iVar4 + 0x1c) & 1) != 0)) {
        *(ushort *)(*(int *)(iVar5 + 0xa84) + 0x20) =
             *(ushort *)(*(int *)(iVar5 + 0xa84) + 0x20) & 0xbfff;
        FUN_088d9d24();
        return;
      }
      iVar3 = iVar3 + 1;
      bVar1 = iVar2 < iVar3;
      iVar4 = iVar4 + 0x1c;
    } while (!bVar1);
  }
  return;
}

