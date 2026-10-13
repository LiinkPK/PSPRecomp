/* Entry 0x0890CD08 | file offset 0x00109CE0 | FUN_0890cd08 | bytes 136 */

undefined4 FUN_0890cd08(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_3 + 8;
  iVar4 = 0;
  if (0 < *piVar1) {
    do {
      iVar3 = 0;
      if (0 < param_4[8]) {
        piVar2 = param_4;
        do {
          if ((*param_3 == *piVar2) && (param_3[1] != piVar2[1])) {
            *param_2 = *param_3;
            return 0;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 < param_4[8]);
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 2;
    } while (iVar4 < *piVar1);
  }
  return 1;
}

