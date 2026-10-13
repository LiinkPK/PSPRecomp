/* Entry 0x08809CEC | file offset 0x00006CC4 | FUN_08809cec | bytes 532 */

/* WARNING: Removing unreachable block (ram,0x08809e44) */

void FUN_08809cec(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = FUN_08837990(param_2);
  if ((iVar1 != 1) && (iVar1 = 0, 0 < *param_1)) {
    piVar5 = param_1 + 1;
    piVar6 = param_1 + 2;
    piVar4 = param_1;
    do {
      iVar2 = FUN_08809110(piVar5,param_2);
      if (iVar2 == 0) {
        if ((*(uint *)(piVar4[1] + 0x10) & 8) == 0) {
          iVar2 = FUN_08808320();
          if (iVar2 == 0) {
            iVar2 = FUN_08807d4c(piVar4[1],param_2);
            if (iVar2 == 0) {
              iVar2 = *param_1;
            }
            else {
              iVar2 = FUN_08809f00(param_1,param_2,piVar5);
              if (iVar2 == 0) {
                iVar2 = FUN_088081b8(piVar4[1]);
                if (iVar2 == 0) {
                  iVar2 = FUN_08837764(param_2);
                  if (iVar2 == 0) {
                    iVar2 = *param_1;
                  }
                  else {
                    iVar2 = 0;
                    if (*(int *)(param_2 + 0x470) != 0) {
                      iVar2 = FUN_0883ea64(*(int *)(param_2 + 0x470),piVar6);
                    }
                    if (*(int *)(param_2 + 0x46c) == 0) {
LAB_08809eb8:
                      iVar2 = *param_1;
                    }
                    else {
                      iVar3 = FUN_0883ea64(*(int *)(param_2 + 0x46c),piVar6);
                      if (iVar3 == 0) {
                        if (iVar2 == 0) goto LAB_08809eb8;
                        FUN_088090f4(piVar5,param_2,iVar2);
                        iVar2 = *param_1;
                      }
                      else {
                        FUN_08808ee4(piVar5,param_2,iVar3,0);
                        iVar2 = *param_1;
                      }
                    }
                  }
                }
                else {
                  iVar2 = *param_1;
                }
              }
              else {
                iVar2 = *param_1;
              }
            }
          }
          else {
            iVar2 = *param_1;
          }
        }
        else {
          iVar2 = *param_1;
        }
      }
      else {
        iVar2 = *param_1;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 8;
      piVar5 = piVar5 + 8;
      piVar6 = piVar6 + 8;
    } while (iVar1 < iVar2);
  }
  return;
}

