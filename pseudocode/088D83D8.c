/* Entry 0x088D83D8 | file offset 0x000D53B0 | FUN_088d83d8 | bytes 64 */

undefined4 FUN_088d83d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

