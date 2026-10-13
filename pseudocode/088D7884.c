/* Entry 0x088D7884 | file offset 0x000D485C | FUN_088d7884 | bytes 112 */

undefined4 FUN_088d7884(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088d82b8(param_1 + 0x24);
  if (iVar1 == 0) {
    iVar1 = FUN_088d873c(param_1 + 0x4c);
    if (iVar1 == 0) {
      FUN_088d83d8(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x10) = 4;
    }
  }
  else {
    FUN_088d7b00(param_1);
  }
  return 0;
}

