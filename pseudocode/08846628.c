/* Entry 0x08846628 | file offset 0x00043600 | FUN_08846628 | bytes 1044 */

void FUN_08846628(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = DAT_089d4960;
  if (param_1[1] != 0) {
    FUN_0886eb84();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_0884415c(iVar1,param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    FUN_0884415c(iVar1,param_1[4]);
    param_1[4] = 0;
  }
  if (param_1[6] != 0) {
    FUN_0884415c(iVar1,param_1[6]);
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    FUN_0884415c(iVar1,param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    FUN_0884415c(iVar1,param_1[8]);
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    FUN_0884415c(iVar1,param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_0884415c(iVar1,param_1[0xc]);
    param_1[0xc] = 0;
  }
  FUN_0883ec44(param_1 + 0xd);
  FUN_08842650(param_1 + 0x18);
  FUN_088a3a10(param_1 + 0x35);
  FUN_0883ebb0(param_1 + 0xd);
  FUN_0884246c(param_1 + 0x18);
  FUN_088a3998(param_1 + 0x35);
  iVar5 = param_1[0x29];
  FUN_088105e0(param_1 + 0x28);
  if (iVar5 != 0) {
    FUN_0884415c(iVar1,iVar5);
  }
  iVar5 = FUN_08828ac8(param_1 + 0x25);
  if (iVar5 != 0) {
    FUN_0884415c(iVar1,iVar5);
  }
  if (param_1[0x22] != 0) {
    FUN_0884415c(iVar1,param_1[0x22]);
    param_1[0x22] = 0;
  }
  if (param_1[0x23] != 0) {
    FUN_0884415c(iVar1,param_1[0x23]);
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    FUN_0884415c(iVar1,param_1[0x24]);
    param_1[0x24] = 0;
  }
  if (*(char *)(*param_1 + 6) != '\0') {
    if (param_1[0x34] != 0) {
      FUN_088cf314(DAT_089d7830,param_1[0x34],0);
    }
    param_1[0x34] = 0;
  }
  uVar2 = param_1[0x39];
  if ((uVar2 & 1) != 0) {
    FUN_08854ad0(DAT_089d4dc8 + 0x4e0);
    uVar2 = param_1[0x39];
  }
  if ((uVar2 & 2) != 0) {
    FUN_08859e18(DAT_089d4dc8 + 0x6200);
    uVar2 = param_1[0x39];
  }
  if ((uVar2 & 4) != 0) {
    FUN_08851cec(DAT_089d4dc8 + 0x65e0);
    uVar2 = param_1[0x39];
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_0885249c(DAT_089d4dc8 + 0x6b00,(int)*(short *)(*param_1 + 2));
    uVar2 = param_1[0x39];
  }
  if ((uVar2 & 8) != 0) {
    FUN_088579e4(DAT_089d4dc8 + 0x52d0);
    uVar2 = param_1[0x39];
  }
  iVar5 = *param_1;
  if ((uVar2 & 0x10) != 0) {
    iVar5 = FUN_088b70c8((int)*(char *)(iVar5 + 6));
    FUN_08856b44(DAT_089d4dc8 + 0x69c0,*(undefined1 *)(iVar5 + 9));
    iVar5 = *param_1;
  }
  FUN_0886d41c(0,iVar5 + 0x24);
  FUN_0886d41c(1,*param_1 + 0x24);
  if (param_1[0x33] != 0) {
    FUN_0887a644(param_1[0x33],3);
    param_1[0x33] = 0;
  }
  if (param_1[0x32] != 0) {
    FUN_0884415c(iVar1,param_1[0x32]);
    param_1[0x32] = 0;
  }
  if ((param_1[0x39] & 0x20U) != 0) {
    FUN_08844520(DAT_089d4960,(int)*(short *)(*param_1 + 4));
  }
  *param_1 = 0;
  iVar1 = DAT_089d4960;
  piVar3 = *(int **)(DAT_089d4960 + 8);
  if ((piVar3 != (int *)0x0) && (*(int *)(DAT_089d4960 + 0xc) != 0)) {
    iVar5 = param_1[0x3a];
    if (param_1 == piVar3) {
      *(int *)(DAT_089d4960 + 8) = iVar5;
      piVar3 = (int *)0x0;
      piVar4 = *(int **)(iVar1 + 0xc);
    }
    else {
      piVar4 = (int *)piVar3[0x3a];
      if ((int *)piVar3[0x3a] == param_1) {
        piVar3[0x3a] = iVar5;
      }
      else {
        do {
          piVar3 = piVar4;
          piVar4 = (int *)piVar3[0x3a];
        } while ((int *)piVar3[0x3a] != param_1);
        piVar3[0x3a] = iVar5;
      }
      piVar4 = *(int **)(iVar1 + 0xc);
    }
    if (param_1 == piVar4) {
      *(int **)(iVar1 + 0xc) = piVar3;
    }
    param_1[0x3a] = 0;
  }
  return;
}

