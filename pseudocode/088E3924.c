/* Entry 0x088E3924 | file offset 0x000E08FC | FUN_088e3924 | bytes 76 */

int FUN_088e3924(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 + 0x160;
  do {
    if (*(int *)(param_1 + 4) == 0) {
      return param_1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 8;
  } while (iVar1 < 0x40);
  return 0;
}

