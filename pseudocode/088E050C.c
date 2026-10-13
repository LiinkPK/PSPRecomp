/* Entry 0x088E050C | file offset 0x000DD4E4 | FUN_088e050c | bytes 32 */

int FUN_088e050c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1704);
  *(int *)(param_1 + 0x1704) = iVar1 + 1;
  return (int)*(short *)(param_1 + iVar1 * 2 + 0x16c0);
}

