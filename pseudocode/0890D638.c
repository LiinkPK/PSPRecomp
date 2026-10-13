/* Entry 0x0890D638 | file offset 0x0010A610 | FUN_0890d638 | bytes 44 */

int FUN_0890d638(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((0 < *(int *)(param_1 + 0xec)) &&
     (param_2 = *(int *)(param_1 + 0xf0) - param_2, param_2 < *(int *)(param_1 + 0xec))) {
    iVar1 = param_2;
  }
  return iVar1;
}

