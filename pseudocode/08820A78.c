/* Entry 0x08820A78 | file offset 0x0001DA50 | FUN_08820a78 | bytes 104 */

undefined4 FUN_08820a78(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if ((2 < **(int **)(param_1 + 4)) && (**(int **)(param_1 + 4) < 6)) {
      FUN_08820ae0(param_1,param_2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

