/* Entry 0x088B78BC | file offset 0x000B4894 | FUN_088b78bc | bytes 72 */

undefined4 FUN_088b78bc(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + 0xa2) == -1) {
      *(undefined2 *)(param_1 + 0xa2) = param_2;
      return 1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 10);
  return 0;
}

