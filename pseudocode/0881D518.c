/* Entry 0x0881D518 | file offset 0x0001A4F0 | FUN_0881d518 | bytes 68 */

undefined4 FUN_0881d518(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_2 + 0x14) == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(*(int *)(param_2 + 0x14) + 0x5a0) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

