/* Entry 0x08810A88 | file offset 0x0000DA60 | FUN_08810a88 | bytes 124 */

int FUN_08810a88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_08810b04();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (param_2 < 0) {
    iVar1 = 0;
  }
  else if (*(int *)(param_1 + 8) < param_2) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar1 + param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_2;
  }
  return iVar1;
}

