/* Entry 0x088E38D8 | file offset 0x000E08B0 | FUN_088e38d8 | bytes 76 */

int FUN_088e38d8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == -1) {
    iVar1 = FUN_088e050c(*param_1);
  }
  else if (iVar1 == -2) {
    iVar1 = -1;
  }
  return iVar1;
}

