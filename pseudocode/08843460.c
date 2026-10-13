/* Entry 0x08843460 | file offset 0x00040438 | FUN_08843460 | bytes 104 */

void FUN_08843460(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_08844130(DAT_089d4960,param_3);
  if (iVar1 != 0) {
    FUN_08935524(iVar1,param_2,param_3);
    *(int *)(param_1 + 8) = iVar1;
    FUN_08843448(param_1);
  }
  return;
}

