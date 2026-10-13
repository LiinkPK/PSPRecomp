/* Entry 0x088B7480 | file offset 0x000B4458 | FUN_088b7480 | bytes 36 */

void FUN_088b7480(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0xa2) = 0xffff;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 10);
  return;
}

