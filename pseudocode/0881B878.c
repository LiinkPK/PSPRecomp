/* Entry 0x0881B878 | file offset 0x00018850 | FUN_0881b878 | bytes 248 */

undefined4 FUN_0881b878(char *param_1)

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
    else {
      iVar1 = 0;
      while (iVar1 = FUN_08841f84(iVar1), iVar1 != 0) {
        *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) & 0xfeffffff;
      }
      if (param_1[8] == '\x01') {
        uVar2 = 0;
      }
      else {
        FUN_0881d900(param_1);
        if (param_1[8] == '\0') {
          for (piVar3 = *(int **)(param_1 + 0x110); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
            FUN_08818cb8(piVar3);
          }
        }
        if (param_1[0x10] == '\0') {
          FUN_08816868(param_1 + 0x14);
        }
        FUN_08819c90(param_1 + 0x5c);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

