/* Entry 0x08935E30 | file offset 0x00132E08 | FUN_08935e30 | bytes 96 */

int FUN_08935e30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_08935e90(param_2);
  FUN_08935524(param_1,param_2,iVar1 * 2);
  *(undefined2 *)(param_1 + iVar1 * 2) = 0;
  return param_1;
}

