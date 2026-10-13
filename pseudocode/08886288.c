/* Entry 0x08886288 | file offset 0x00083260 | FUN_08886288 | bytes 132 */

void FUN_08886288(int *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1[1] != 0) {
      FUN_088da060(param_1[1]);
      param_1[1] = 0;
      iVar1 = *param_1;
    }
    if (param_2 == '\0') {
      iVar1 = FUN_088daa40(iVar1,0,0);
      param_1[1] = iVar1;
      *(undefined2 *)(iVar1 + 0xe) = 1;
    }
    else {
      iVar1 = FUN_088daa40(iVar1,1,0);
      param_1[1] = iVar1;
    }
  }
  return;
}

