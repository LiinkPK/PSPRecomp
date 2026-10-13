/* Entry 0x088BE58C | file offset 0x000BB564 | FUN_088be58c | bytes 80 */

void FUN_088be58c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + -1;
  if (param_2 < *piVar2) {
    iVar3 = *piVar2;
    piVar1 = param_1;
    param_1 = piVar2;
    while( true ) {
      *piVar1 = iVar3;
      piVar2 = param_1 + -1;
      if (*piVar2 <= param_2) break;
      iVar3 = *piVar2;
      piVar1 = param_1;
      param_1 = piVar2;
    }
  }
  *param_1 = param_2;
  return;
}

