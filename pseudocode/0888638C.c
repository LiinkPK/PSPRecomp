/* Entry 0x0888638C | file offset 0x00083364 | FUN_0888638c | bytes 144 */

void FUN_0888638c(int *param_1)

{
  int iVar1;
  
  if ((((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) && (*(short *)(iVar1 + 0xc) == 2)) &&
     (((*(ushort *)(iVar1 + 0x20) & 0x20) != 0 && ((param_1[2] & 1U) == 0)))) {
    FUN_088db10c();
    if (param_1[1] != 0) {
      FUN_088da060(param_1[1]);
      param_1[1] = 0;
    }
  }
  return;
}

