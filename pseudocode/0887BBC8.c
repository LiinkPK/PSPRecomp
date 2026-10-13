/* Entry 0x0887BBC8 | file offset 0x00078BA0 | FUN_0887bbc8 | bytes 44 */

void FUN_0887bbc8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)(param_1 + 0x2e) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 8;
  } while (iVar1 < 4);
  return;
}

