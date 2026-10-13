/* Entry 0x0898FF74 | file offset 0x0018CF4C | FUN_0898ff74 | bytes 52 */

void FUN_0898ff74(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xb4) = iVar1 + 1;
  FUN_089a3868(param_1 + iVar1 * 0x10 + 0x34);
  return;
}

