/* Entry 0x0884351C | file offset 0x000404F4 | FUN_0884351c | bytes 104 */

void FUN_0884351c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_08844130(DAT_089d4960,param_3);
  if (iVar1 != 0) {
    FUN_08935524(iVar1,param_2,param_3);
    *(int *)(param_1 + 0x10) = iVar1;
    FUN_088434c8(param_1);
  }
  return;
}

