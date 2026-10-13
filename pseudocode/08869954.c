/* Entry 0x08869954 | file offset 0x0006692C | FUN_08869954 | bytes 160 */

undefined4 FUN_08869954(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = (int)param_2;
  if (*param_2 == 0x204b504d) {
    if (param_2[1] == 0x20070606) {
      iVar3 = 0;
      piVar1 = param_2;
      if (0 < param_2[2]) {
        do {
          piVar4 = piVar1 + 4;
          if (*piVar4 != 0) {
            *piVar4 = (int)param_2 + *piVar4;
            param_2 = (int *)*param_1;
          }
          if (piVar1[5] != 0) {
            piVar1[5] = (int)param_2 + piVar1[5];
            param_2 = (int *)*param_1;
          }
          iVar3 = iVar3 + 1;
          piVar1 = piVar4;
        } while (iVar3 < param_2[2]);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

