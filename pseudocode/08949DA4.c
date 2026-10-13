/* Entry 0x08949DA4 | file offset 0x00146D7C | FUN_08949da4 | bytes 100 */

void FUN_08949da4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  DAT_09b6f478 = param_1;
  *(undefined1 *)(param_1 + 0x94) = 2;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x154)) {
    *(int *)(param_1 + 0x88) = iVar1;
    FUN_0894a5b0(param_1,iVar1);
  }
  *(undefined1 *)(param_1 + 0x94) = 5;
  return;
}

