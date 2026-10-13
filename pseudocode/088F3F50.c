/* Entry 0x088F3F50 | file offset 0x000F0F28 | FUN_088f3f50 | bytes 104 */

void FUN_088f3f50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_089d712c + 0xf6e0;
  do {
    if (*(short *)(iVar2 + 0xaac) == param_2) {
      iVar3 = param_1 + 0x438 + iVar3;
      cVar1 = *(char *)(iVar3 + 0x2c3);
      if (cVar1 < '\x01') {
        return;
      }
      *(char *)(iVar3 + 0x2c3) = cVar1 + -1;
      *(char *)(iVar2 + 0xaae) = *(char *)(iVar2 + 0xaae) + '\x01';
      return;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x276);
  return;
}

