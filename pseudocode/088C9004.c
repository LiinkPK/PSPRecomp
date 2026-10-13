/* Entry 0x088C9004 | file offset 0x000C5FDC | FUN_088c9004 | bytes 64 */

int FUN_088c9004(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0xbda8)) {
    iVar1 = (-*(int *)(param_1 + 0xbda4) - param_2) + 199;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

