/* Entry 0x0887309C | file offset 0x00070074 | FUN_0887309c | bytes 1020 */

void FUN_0887309c(int param_1,char param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  param_1 = param_1 * 0x1e0;
  iVar4 = *(int *)(&DAT_08b7f38c + param_1);
  iVar3 = *(int *)(&DAT_08b7f388 + param_1);
  if ((iVar3 != 0) || (iVar4 != 0)) {
    iVar8 = 8;
    iVar7 = 0x80;
    iVar9 = 0x20;
    piVar5 = (int *)(&DAT_08b7f380 + param_1);
    do {
      if ((iVar3 == 0x2000000) && (iVar4 == 0)) {
        if ((param_2 == '\0') || (param_5 != '\0')) {
          if (param_3 == '\0') {
            iVar2 = 4;
          }
          else {
            iVar2 = 0x10;
          }
          iVar1 = 0;
        }
        else {
          if (param_3 == '\0') {
            iVar1 = 0x10;
          }
          else {
            iVar1 = 0x40;
          }
          iVar2 = 0;
        }
      }
      else if ((iVar3 == 0x4000000) && (iVar4 == 0)) {
        if ((param_2 == '\0') || (param_5 != '\0')) {
          if (param_3 == '\0') {
            iVar2 = 0x10;
          }
          else {
            iVar2 = 4;
          }
          iVar1 = 0;
        }
        else {
          if (param_3 == '\0') {
            iVar1 = 0x40;
          }
          else {
            iVar1 = 0x10;
          }
          iVar2 = 0;
        }
      }
      else {
        iVar1 = iVar7;
        iVar2 = iVar8;
        if ((iVar3 == 0x8000000) && (iVar4 == 0)) {
          if ((param_2 == '\0') || (param_5 != '\0')) {
            if (param_4 != '\0') {
              iVar2 = 0x20;
            }
            iVar1 = 0;
          }
          else {
            iVar1 = iVar9;
            if (param_4 != '\0') {
              iVar1 = iVar7;
            }
            iVar2 = 0;
          }
        }
        else if ((iVar3 == 0x10000000) && (iVar4 == 0)) {
          if ((param_2 == '\0') || (param_5 != '\0')) {
            if (param_4 == '\0') {
              iVar2 = 0x20;
            }
            iVar1 = 0;
          }
          else {
            if (param_4 != '\0') {
              iVar1 = iVar9;
            }
            iVar2 = 0;
          }
        }
        else if ((iVar3 == 0x20000000) && (iVar4 == 0)) {
          if (param_2 == '\0') {
            iVar2 = 0;
            iVar1 = 0x10;
          }
          else {
            iVar2 = 4;
            iVar1 = 0;
          }
        }
        else if ((iVar3 == 0x40000000) && (iVar4 == 0)) {
          if (param_2 == '\0') {
            iVar2 = 0;
            iVar1 = 0x40;
          }
          else {
            iVar2 = 0x10;
            iVar1 = 0;
          }
        }
        else if ((iVar3 == -0x80000000) && (iVar4 == 0)) {
          iVar2 = 0;
          if (param_2 != '\0') {
            iVar1 = 0;
            iVar2 = 0x20;
          }
        }
        else {
          iVar1 = 0;
          iVar2 = 0;
          if ((iVar3 == 0) && ((iVar4 == 1 && (iVar1 = iVar9, iVar2 = 0, param_2 != '\0')))) {
            iVar1 = 0;
            iVar2 = iVar8;
          }
        }
      }
      if ((iVar1 != 0) || (iVar2 != 0)) {
        piVar5[1] = iVar2;
        *piVar5 = iVar1;
      }
      piVar6 = piVar5 + 4;
      iVar4 = piVar5[7];
      iVar3 = piVar5[6];
      piVar5 = piVar6;
    } while ((iVar3 != 0) || (iVar4 != 0));
  }
  return;
}

