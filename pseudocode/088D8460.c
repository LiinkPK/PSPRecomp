/* Entry 0x088D8460 | file offset 0x000D5438 | FUN_088d8460 | bytes 92 */

undefined4 FUN_088d8460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 1) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

