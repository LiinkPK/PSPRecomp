/* Entry 0x08884920 | file offset 0x000818F8 | FUN_08884920 | bytes 112 */

undefined4 FUN_08884920(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar1 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x18) * 0xc;
    if ((int)*(short *)(iVar3 + 0xc) == (uint)*(ushort *)(&DAT_089c9f70 + iVar2)) {
      uVar1 = 1;
    }
    else if (((int)*(short *)(iVar3 + 0xc) == (uint)*(ushort *)(&DAT_089c9f74 + iVar2)) &&
            ((*(ushort *)(iVar3 + 0x20) & 0x20) == 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

