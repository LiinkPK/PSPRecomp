/* Entry 0x08942DF8 | file offset 0x0013FDD0 | FUN_08942df8 | bytes 96 */

int FUN_08942df8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08942244();
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_089428f8(*(undefined4 *)(*param_1 + iVar1 * 4),param_1[10]);
    iVar2 = iVar1;
  }
  return iVar2;
}

