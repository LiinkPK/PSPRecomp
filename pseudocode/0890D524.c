/* Entry 0x0890D524 | file offset 0x0010A4FC | FUN_0890d524 | bytes 44 */

int FUN_0890d524(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((0 < *(char *)(param_1 + 0x20)) &&
     (param_2 = *(int *)(param_1 + 0x14) - param_2, param_2 < *(char *)(param_1 + 0x20))) {
    iVar1 = param_2;
  }
  return iVar1;
}

