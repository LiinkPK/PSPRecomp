/* Entry 0x088B7ED4 | file offset 0x000B4EAC | FUN_088b7ed4 | bytes 132 */

void FUN_088b7ed4(int param_1,undefined4 param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = FUN_088b8414(param_1,param_2,1);
  if (iVar1 == 0) {
    iVar1 = 0;
    psVar2 = (short *)(param_1 + 0x3de);
    do {
      if (*psVar2 == -1) {
        *psVar2 = (short)param_2;
        return;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 3;
    } while (iVar1 < 0x96);
  }
  return;
}

