/* Entry 0x088F3EE8 | file offset 0x000F0EC0 | FUN_088f3ee8 | bytes 104 */

void FUN_088f3ee8(int param_1,int param_2)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar2 = (short *)(DAT_089d712c + 0xf6e0);
  do {
    if (*psVar2 == param_2) {
      iVar3 = param_1 + 0x438 + iVar3;
      cVar1 = *(char *)(iVar3 + 0x18);
      if (cVar1 < '\x01') {
        return;
      }
      *(char *)(iVar3 + 0x18) = cVar1 + -1;
      *(char *)(psVar2 + 1) = (char)psVar2[1] + '\x01';
      return;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 2;
  } while (iVar3 < 0x2ab);
  return;
}

