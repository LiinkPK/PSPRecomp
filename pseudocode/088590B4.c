/* Entry 0x088590B4 | file offset 0x0005608C | FUN_088590b4 | bytes 104 */

void FUN_088590b4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  do {
    if (*piVar1 != 0) {
      FUN_0899bb1c();
    }
    *piVar1 = 0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 5);
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  return;
}

