/* Entry 0x08971CFC | file offset 0x0016ECD4 | FUN_08971cfc | bytes 96 */

int FUN_08971cfc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08941fc0();
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_08971554(*(undefined4 *)(*param_1 + iVar1 * 4),param_1[10]);
    iVar2 = iVar1;
  }
  return iVar2;
}

