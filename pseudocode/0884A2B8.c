/* Entry 0x0884A2B8 | file offset 0x00047290 | FUN_0884a2b8 | bytes 136 */

int FUN_0884a2b8(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  
  if (*(short *)(param_2 + 10) < 0) {
    param_2 = 0;
  }
  else {
    sVar1 = *(short *)(param_2 + 8);
    while ((sVar1 < param_3 && (-1 < *(short *)(param_2 + 10)))) {
      param_2 = FUN_0884808c(param_1,(int)*(short *)(param_2 + 10));
      sVar1 = *(short *)(param_2 + 8);
    }
  }
  return param_2;
}

