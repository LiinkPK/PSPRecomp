/* Entry 0x08885F8C | file offset 0x00082F64 | FUN_08885f8c | bytes 156 */

void FUN_08885f8c(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) {
    if (((int)*(short *)(iVar1 + 0xc) == (uint)*(ushort *)(&DAT_089c9fdc + param_1[2] * 6)) &&
       ((*(ushort *)(iVar1 + 0x20) & 0x20) != 0)) {
      FUN_088db10c();
      if (param_1[1] != 0) {
        FUN_088da060(param_1[1]);
        param_1[1] = 0;
      }
    }
  }
  return;
}

