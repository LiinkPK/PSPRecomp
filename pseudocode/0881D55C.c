/* Entry 0x0881D55C | file offset 0x0001A534 | FUN_0881d55c | bytes 68 */

undefined4 FUN_0881d55c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_2 + 0x14) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(param_2 + 0x14) + 0x5f8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

