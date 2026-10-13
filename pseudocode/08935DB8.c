/* Entry 0x08935DB8 | file offset 0x00132D90 | FUN_08935db8 | bytes 120 */

int FUN_08935db8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08935e90();
  iVar2 = FUN_08935e90(param_2);
  iVar1 = param_1 + iVar1 * 2;
  FUN_08935524(iVar1,param_2,iVar2 * 2);
  *(undefined2 *)(iVar1 + iVar2 * 2) = 0;
  return param_1;
}

