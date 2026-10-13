/* Entry 0x088D8634 | file offset 0x000D560C | FUN_088d8634 | bytes 140 */

undefined4 FUN_088d8634(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d86c0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if ((((iVar1 != 0) && (*(short *)(iVar1 + 0xc) == 6)) &&
        ((*(ushort *)(iVar1 + 0x20) & 0x20) != 0)) && (iVar1 != 0)) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

