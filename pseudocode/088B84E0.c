/* Entry 0x088B84E0 | file offset 0x000B54B8 | FUN_088b84e0 | bytes 88 */

int FUN_088b84e0(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(param_1 + 0x3de);
  iVar1 = 0;
  iVar3 = 0;
  do {
    if ((*psVar2 != -1) && ((psVar2[2] & 2U) != 0)) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 3;
  } while (iVar3 < 0x96);
  return iVar1;
}

