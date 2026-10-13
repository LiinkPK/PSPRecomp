/* Entry 0x08856B44 | file offset 0x00053B1C | FUN_08856b44 | bytes 80 */

void FUN_08856b44(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + param_2 * 8);
  iVar1 = piVar2[1];
  piVar2[1] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    if (*piVar2 != 0) {
      FUN_0899bb1c();
    }
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  return;
}

