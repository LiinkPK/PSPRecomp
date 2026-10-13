/* Entry 0x08926BDC | file offset 0x00123BB4 | FUN_08926bdc | bytes 88 */

int FUN_08926bdc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xa20);
  FUN_08935524(*(int *)(param_1 + 0x20) + iVar1 * 0x40 + 0x1a24,param_2,0x40);
  *(int *)(*(int *)(param_1 + 0x20) + 0xa20) = *(int *)(*(int *)(param_1 + 0x20) + 0xa20) + 1;
  return iVar1;
}

