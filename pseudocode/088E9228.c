/* Entry 0x088E9228 | file offset 0x000E6200 | FUN_088e9228 | bytes 32 */

void FUN_088e9228(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x1868) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

