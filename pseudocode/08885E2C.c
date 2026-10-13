/* Entry 0x08885E2C | file offset 0x00082E04 | FUN_08885e2c | bytes 196 */

void FUN_08885e2c(int *param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (param_1[1] != 0) {
      FUN_088da060(param_1[1]);
      param_1[1] = 0;
      iVar2 = *param_1;
    }
    param_1[2] = (uint)(param_3 != '\0');
    iVar1 = (uint)(param_3 != '\0') * 6;
    if (param_2 == '\0') {
      iVar2 = FUN_088daa40(iVar2,*(undefined2 *)(&DAT_089c9fd8 + iVar1),0);
      param_1[1] = iVar2;
      *(undefined2 *)(iVar2 + 0xe) = *(undefined2 *)(&DAT_089c9fda + param_1[2] * 6);
    }
    else {
      iVar2 = FUN_088daa40(iVar2,*(undefined2 *)(&DAT_089c9fda + iVar1),0);
      param_1[1] = iVar2;
    }
  }
  return;
}

