/* Entry 0x0881B970 | file offset 0x00018948 | FUN_0881b970 | bytes 148 */

undefined4 FUN_0881b970(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_08841f64(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else if (param_1[8] == '\x01') {
      uVar2 = 0;
    }
    else {
      for (piVar3 = *(int **)(param_1 + 0x110); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
        FUN_08818d10(piVar3);
      }
      FUN_0881d478(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

