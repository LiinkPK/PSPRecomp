/* Entry 0x088E9334 | file offset 0x000E630C | FUN_088e9334 | bytes 92 */

void FUN_088e9334(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088e03b4(param_1 + 0x90);
  if (iVar1 == 0) {
    FUN_088e0390(param_1 + 0x90);
    FUN_08841ef8();
    *(undefined4 *)(param_1 + 0x1860) = 6;
  }
  return;
}

