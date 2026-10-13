/* Entry 0x088D8E20 | file offset 0x000D5DF8 | FUN_088d8e20 | bytes 56 */

undefined1 FUN_088d8e20(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_088d8e18();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x28);
  }
  return uVar1;
}

