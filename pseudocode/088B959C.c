/* Entry 0x088B959C | file offset 0x000B6574 | FUN_088b959c | bytes 76 */

int FUN_088b959c(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(param_1 + 0x3de);
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*psVar2 == -1) {
      return iVar1;
    }
    iVar1 = iVar1 + psVar2[1];
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 3;
  } while (iVar3 < 0x96);
  return iVar1;
}

