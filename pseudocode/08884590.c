/* Entry 0x08884590 | file offset 0x00081568 | FUN_08884590 | bytes 284 */

void FUN_08884590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_088da0a8(*(int *)(param_1 + 0x10),0,auStack_60,auStack_20);
    FUN_088d9b84(*(undefined4 *)(param_1 + 0x14),auStack_60);
    FUN_088d9af4(*(undefined4 *)(param_1 + 0x14),auStack_20);
  }
  iVar4 = 0;
  iVar2 = 0;
  iVar3 = param_1;
  do {
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 != 0) {
      if (((((int)*(short *)(iVar1 + 0xc) ==
             (uint)*(ushort *)(&DAT_089c9f74 + *(int *)(param_1 + 0x18) * 0xc + iVar2)) &&
           ((*(ushort *)(iVar1 + 0x20) & 0x20) != 0)) && ((*(uint *)(param_1 + 0x1c) & 1) == 0)) &&
         (iVar1 != 0)) {
        FUN_088da060();
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 6;
  } while (iVar4 < 2);
  return;
}

