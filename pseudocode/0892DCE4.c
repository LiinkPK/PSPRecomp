/* Entry 0x0892DCE4 | file offset 0x0012ACBC | FUN_0892dce4 | bytes 80 */

undefined4 FUN_0892dce4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else if ((*(short *)(iVar2 + 0xc) == 4) && ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

