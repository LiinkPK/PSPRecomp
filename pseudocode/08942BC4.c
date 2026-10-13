/* Entry 0x08942BC4 | file offset 0x0013FB9C | FUN_08942bc4 | bytes 112 */

int FUN_08942bc4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08941dc0();
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_089428f0(*(undefined4 *)(*param_1 + iVar1 * 4),param_2,param_1[10]);
    iVar2 = iVar1;
  }
  return iVar2;
}

