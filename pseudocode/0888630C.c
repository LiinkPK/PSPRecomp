/* Entry 0x0888630C | file offset 0x000832E4 | FUN_0888630c | bytes 128 */

void FUN_0888630c(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) {
    if (*(short *)(iVar1 + 0xc) == 1) {
      FUN_088d9f5c(iVar1,2,0);
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

