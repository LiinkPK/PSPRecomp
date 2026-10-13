/* Entry 0x088E04F0 | file offset 0x000DD4C8 | FUN_088e04f0 | bytes 28 */

void FUN_088e04f0(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1700);
  *(undefined2 *)(param_1 + iVar1 * 2 + 0x16c0) = param_2;
  *(int *)(param_1 + 0x1700) = iVar1 + 1;
  return;
}

