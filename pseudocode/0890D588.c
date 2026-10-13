/* Entry 0x0890D588 | file offset 0x0010A560 | FUN_0890d588 | bytes 44 */

int FUN_0890d588(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((0 < *(char *)(param_1 + 0xd8)) &&
     (param_2 = *(int *)(param_1 + 0xcc) - param_2, param_2 < *(char *)(param_1 + 0xd8))) {
    iVar1 = param_2;
  }
  return iVar1;
}

