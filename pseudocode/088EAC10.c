/* Entry 0x088EAC10 | file offset 0x000E7BE8 | FUN_088eac10 | bytes 236 */

void FUN_088eac10(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      if (piVar2[1] != 0) {
        FUN_088a3d14(iVar1,piVar2[1]);
        piVar2[1] = 0;
        iVar1 = *piVar2;
      }
      FUN_0889f830(iVar1 + 4,0);
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 2;
  } while (uVar3 < 2);
  if (param_2 == '\0') {
    if (param_1[9] != 0) {
      FUN_088a0d1c(param_1[10]);
      FUN_088a0cd4(param_1[10]);
      param_1[9] = 0;
      param_1[10] = -1;
    }
    uVar3 = 0;
    do {
      if (*param_1 != 0) {
        FUN_088a3ef8();
        *param_1 = 0;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 2;
    } while (uVar3 < 2);
  }
  return;
}

