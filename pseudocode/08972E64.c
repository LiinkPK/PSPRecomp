/* Entry 0x08972E64 | file offset 0x0016FE3C | FUN_08972e64 | bytes 88 */

void FUN_08972e64(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 + *(int *)(iVar1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + *(int *)(iVar1 + 0x18) + 0x10;
  }
  FUN_08972ebc(param_1,param_2,iVar1);
  return;
}

