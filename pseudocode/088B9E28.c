/* Entry 0x088B9E28 | file offset 0x000B6E00 | FUN_088b9e28 | bytes 92 */

int FUN_088b9e28(short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088b1d9c((int)param_1);
  iVar2 = -1;
  if ((iVar1 != 0) && (iVar2 = (int)*(short *)(iVar1 + 8), *(short *)(iVar1 + 8) < 0)) {
    iVar2 = (int)param_1;
  }
  return iVar2;
}

