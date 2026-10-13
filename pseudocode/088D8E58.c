/* Entry 0x088D8E58 | file offset 0x000D5E30 | FUN_088d8e58 | bytes 56 */

undefined4 FUN_088d8e58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d8e18();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar2;
}

