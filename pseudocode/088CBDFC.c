/* Entry 0x088CBDFC | file offset 0x000C8DD4 | FUN_088cbdfc | bytes 568 */

int FUN_088cbdfc(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1 + 0x10 + *(char *)(param_1 + 0x773) * 0xc6;
  iVar4 = 0;
  if (*param_2 < 1) {
    iVar4 = 0;
    do {
      if ((param_4 < 0) || (iVar4 == param_4)) {
        *param_2 = *param_2 + 1;
        iVar5 = FUN_088b7a88(iVar3,param_3,iVar4);
        if (-1 < iVar5) {
          return iVar5;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc);
    iVar4 = 0;
    do {
      if ((param_4 < 0) || (iVar4 == param_4)) {
        iVar5 = 0;
        do {
          *param_2 = *param_2 + 1;
          iVar1 = FUN_088b7ab8(iVar3,param_3,iVar4,iVar5);
          if (-1 < iVar1) {
            return iVar1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  else {
    iVar5 = 0;
    do {
      if ((param_4 < 0) || (iVar5 == param_4)) {
        iVar4 = iVar4 + 1;
        if (*param_2 == iVar4) {
          *param_2 = *param_2 + 1;
          iVar1 = FUN_088b7a88(iVar3,param_3,iVar5);
          if (-1 < iVar1) {
            return iVar1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc);
    iVar5 = 0;
    do {
      if ((param_4 < 0) || (iVar5 == param_4)) {
        iVar1 = 0;
        do {
          iVar4 = iVar4 + 1;
          if (*param_2 == iVar4) {
            *param_2 = *param_2 + 1;
            iVar2 = FUN_088b7ab8(iVar3,param_3,iVar5,iVar1);
            if (-1 < iVar2) {
              return iVar2;
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
  }
  return -1;
}

