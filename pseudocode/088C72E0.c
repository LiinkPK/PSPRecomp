/* Entry 0x088C72E0 | file offset 0x000C42B8 | FUN_088c72e0 | bytes 112 */

int FUN_088c72e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 6);
  iVar1 = 0;
  if (param_2 == iVar2 + -1) {
    iVar1 = param_1 + 0x44;
  }
  else if (param_2 == 0) {
    iVar1 = param_1 + 8;
  }
  else if ((param_2 < iVar2 + -1) && ((iVar2 - *(int *)(param_1 + 0x134)) + -1 <= param_2)) {
    iVar1 = param_1 + 0x80 + ((param_2 - iVar2) + 4) * 0x3c;
  }
  return iVar1;
}

