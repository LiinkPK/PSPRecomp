/* Entry 0x08820A14 | file offset 0x0001D9EC | FUN_08820a14 | bytes 100 */

undefined4 FUN_08820a14(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if ((-1 < **(int **)(param_1 + 4)) && (**(int **)(param_1 + 4) < 3)) {
      FUN_08820ae0(param_1,param_2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

