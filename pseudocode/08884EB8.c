/* Entry 0x08884EB8 | file offset 0x00081E90 | FUN_08884eb8 | bytes 108 */

undefined4 FUN_08884eb8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (((int)*(short *)(iVar2 + 0xc) ==
            (uint)*(ushort *)(&DAT_089c9f8c + *(int *)(param_1 + 0x14) * 10)) &&
          ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

