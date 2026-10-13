/* Entry 0x088D8EC8 | file offset 0x000D5EA0 | FUN_088d8ec8 | bytes 56 */

undefined4 FUN_088d8ec8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d8e18();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar2;
}

