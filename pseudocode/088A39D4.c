/* Entry 0x088A39D4 | file offset 0x000A09AC | FUN_088a39d4 | bytes 60 */

void FUN_088a39d4(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_088a0cf8(*param_1);
    param_1[1] = iVar1;
    param_1[2] = iVar1 + 0x10;
  }
  return;
}

