/* Entry 0x08973E58 | file offset 0x00170E30 | FUN_08973e58 | bytes 32 */

int FUN_08973e58(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(*param_1 + param_2 * 4);
  return iVar1 + *(int *)(iVar1 + 0x24);
}

