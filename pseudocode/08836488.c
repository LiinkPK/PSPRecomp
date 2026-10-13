/* Entry 0x08836488 | file offset 0x00033460 | FUN_08836488 | bytes 108 */

void FUN_08836488(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_2 + 0x2fc) != 0) {
    FUN_08836dac(param_2,*(int *)(param_2 + 0x2fc),auStack_20);
    FUN_08836120(param_1,param_2,auStack_20,param_3);
  }
  return;
}

