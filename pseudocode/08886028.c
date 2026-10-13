/* Entry 0x08886028 | file offset 0x00083000 | FUN_08886028 | bytes 108 */

undefined4 FUN_08886028(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (((int)*(short *)(iVar2 + 0xc) ==
            (uint)*(ushort *)(&DAT_089c9fdc + *(int *)(param_1 + 8) * 6)) &&
          ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

