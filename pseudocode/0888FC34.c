/* Entry 0x0888FC34 | file offset 0x0008CC0C | FUN_0888fc34 | bytes 120 */

void FUN_0888fc34(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  do {
    if (*piVar1 != 0) {
      FUN_088da060();
      *piVar1 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 2);
  if (param_1[2] != 0) {
    FUN_0887ba5c();
    param_1[2] = 0;
  }
  return;
}

