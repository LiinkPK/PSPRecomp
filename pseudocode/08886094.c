/* Entry 0x08886094 | file offset 0x0008306C | FUN_08886094 | bytes 52 */

undefined4 FUN_08886094(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 1;
  }
  else if (param_1[1] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

