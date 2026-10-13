/* Entry 0x088842E0 | file offset 0x000812B8 | FUN_088842e0 | bytes 168 */

void FUN_088842e0(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    piVar1 = param_1;
    do {
      if (piVar1[3] != 0) {
        FUN_088da060();
        piVar1[3] = 0;
      }
      if (*piVar1 != 0) {
        FUN_088dab44();
        *piVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
    FUN_08885b14(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08885b5c(param_1);
    }
  }
  return;
}

