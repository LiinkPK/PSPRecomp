/* Entry 0x088F4F3C | file offset 0x000F1F14 | FUN_088f4f3c | bytes 84 */

void FUN_088f4f3c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xe38) = 0;
  *(undefined2 *)(param_1 + 0xe3c) = 0;
  *(undefined2 *)(param_1 + 0xe56) = 0;
  iVar1 = 0;
  do {
    FUN_088f4f14(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x2d8;
  } while (iVar1 < 5);
  return;
}

