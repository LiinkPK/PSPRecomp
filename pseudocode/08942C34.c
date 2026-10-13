/* Entry 0x08942C34 | file offset 0x0013FC0C | FUN_08942c34 | bytes 96 */

int FUN_08942c34(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08941fc0();
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_089428f8(*(undefined4 *)(*param_1 + iVar1 * 4),param_1[10]);
    iVar2 = iVar1;
  }
  return iVar2;
}

