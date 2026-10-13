/* Entry 0x0889F434 | file offset 0x0009C40C | FUN_0889f434 | bytes 120 */

int FUN_0889f434(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 < *(int *)(param_1 + 0x40)) {
    iVar2 = *(int *)(param_1 + 8) + param_2 * 0x2c;
    if (iVar2 != 0) {
      iVar1 = FUN_0887afbc(param_1 + 0xc,(int)*(short *)(iVar2 + 2),0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x44) + (param_2 - *(int *)(param_1 + 0x40)) * 0x84 + 4;
  }
  return iVar1;
}

