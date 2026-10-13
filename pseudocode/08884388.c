/* Entry 0x08884388 | file offset 0x00081360 | FUN_08884388 | bytes 316 */

void FUN_08884388(int *param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_1[6] = (uint)(param_3 != '\0');
  iVar2 = 0;
  piVar3 = param_1;
  do {
    if (piVar3[3] != 0) {
      FUN_088da060();
      piVar3[3] = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 3);
  iVar1 = param_1[6] * 0xc;
  iVar2 = *param_1;
  if (param_2 == '\0') {
    if (iVar2 != 0) {
      iVar2 = FUN_088daa40(iVar2,*(undefined2 *)(&DAT_089c9f70 + iVar1),0);
      param_1[3] = iVar2;
      *(undefined2 *)(iVar2 + 0xe) = *(undefined2 *)(&DAT_089c9f72 + iVar1);
    }
    iVar2 = FUN_088daa40(param_1[1],*(undefined2 *)(&DAT_089c9f76 + iVar1),0);
    param_1[4] = iVar2;
    *(undefined2 *)(iVar2 + 0xe) = *(undefined2 *)(&DAT_089c9f78 + iVar1);
    iVar2 = param_1[2];
  }
  else {
    if (iVar2 != 0) {
      iVar2 = FUN_088daa40(iVar2,*(undefined2 *)(&DAT_089c9f72 + iVar1),0);
      param_1[3] = iVar2;
    }
    iVar2 = FUN_088daa40(param_1[1],*(undefined2 *)(&DAT_089c9f78 + iVar1),0);
    param_1[4] = iVar2;
    iVar2 = param_1[2];
  }
  if (iVar2 != 0) {
    iVar2 = FUN_088daa40(iVar2,(uint)(param_3 != '\0'),0);
    param_1[5] = iVar2;
  }
  return;
}

