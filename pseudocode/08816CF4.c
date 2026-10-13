/* Entry 0x08816CF4 | file offset 0x00013CCC | FUN_08816cf4 | bytes 96 */

bool FUN_08816cf4(char *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  
  if (*param_1 == '\0') {
    bVar1 = false;
  }
  else {
    piVar2 = (int *)FUN_0881b35c(param_1 + 4,param_2);
    if (piVar2 == (int *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = *piVar2 == 1;
    }
  }
  return bVar1;
}

