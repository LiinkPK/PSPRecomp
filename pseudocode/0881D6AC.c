/* Entry 0x0881D6AC | file offset 0x0001A684 | FUN_0881d6ac | bytes 68 */

undefined4 FUN_0881d6ac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_2 + 0x14) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(param_2 + 0x14) + 0x47c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

