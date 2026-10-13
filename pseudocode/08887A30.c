/* Entry 0x08887A30 | file offset 0x00084A08 | FUN_08887a30 | bytes 28 */

int FUN_08887a30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = param_2;
  }
  return iVar1;
}

