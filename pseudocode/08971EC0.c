/* Entry 0x08971EC0 | file offset 0x0016EE98 | FUN_08971ec0 | bytes 96 */

int FUN_08971ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08942244();
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_08971554(*(undefined4 *)(*param_1 + iVar1 * 4),param_1[10]);
    iVar2 = iVar1;
  }
  return iVar2;
}

