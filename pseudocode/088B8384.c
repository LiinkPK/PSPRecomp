/* Entry 0x088B8384 | file offset 0x000B535C | FUN_088b8384 | bytes 108 */

void FUN_088b8384(int param_1)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  psVar1 = (short *)(param_1 + 0x3de);
  do {
    if (*psVar1 != -1) {
      FUN_088b830c(param_1,(int)*psVar1);
    }
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 3;
  } while (iVar2 < 0x96);
  return;
}

