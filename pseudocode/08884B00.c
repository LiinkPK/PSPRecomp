/* Entry 0x08884B00 | file offset 0x00081AD8 | FUN_08884b00 | bytes 192 */

void FUN_08884b00(undefined4 *param_1,char param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  if (param_1[1] != 0) {
    FUN_088da060(param_1[1]);
    param_1[1] = 0;
    uVar2 = *param_1;
  }
  iVar1 = (uint)(param_3 != '\0') * 10;
  param_1[5] = (uint)(param_3 != '\0');
  if (param_2 == '\0') {
    iVar1 = FUN_088daa40(uVar2,*(undefined2 *)(&DAT_089c9f88 + iVar1),0);
    param_1[1] = iVar1;
    *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)(&DAT_089c9f8a + param_1[5] * 10);
  }
  else {
    uVar2 = FUN_088daa40(uVar2,*(undefined2 *)(&DAT_089c9f8a + iVar1),0);
    param_1[1] = uVar2;
  }
  return;
}

