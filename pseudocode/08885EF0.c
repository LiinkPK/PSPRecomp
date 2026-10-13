/* Entry 0x08885EF0 | file offset 0x00082EC8 | FUN_08885ef0 | bytes 156 */

void FUN_08885ef0(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) {
    if ((int)*(short *)(iVar1 + 0xc) == (uint)*(ushort *)(&DAT_089c9fda + param_1[2] * 6)) {
      FUN_088d9f5c(iVar1,*(undefined2 *)(&DAT_089c9fdc + param_1[2] * 6),0);
    }
    else {
      FUN_088db10c();
      if (param_1[1] != 0) {
        FUN_088da060(param_1[1]);
        param_1[1] = 0;
      }
    }
  }
  return;
}

