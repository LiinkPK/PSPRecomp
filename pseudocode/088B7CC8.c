/* Entry 0x088B7CC8 | file offset 0x000B4CA0 | FUN_088b7cc8 | bytes 60 */

int FUN_088b7cc8(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(param_1 + 0xa2);
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*psVar2 != -1) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 1;
  } while (iVar3 < 10);
  return iVar1;
}

