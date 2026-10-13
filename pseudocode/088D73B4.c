/* Entry 0x088D73B4 | file offset 0x000D438C | FUN_088d73b4 | bytes 64 */

undefined4 FUN_088d73b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

