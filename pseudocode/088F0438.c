/* Entry 0x088F0438 | file offset 0x000ED410 | FUN_088f0438 | bytes 100 */

char FUN_088f0438(int param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(DAT_089d712c + param_1 + 0x1de90);
  cVar2 = (bVar1 & 1) != 0;
  if ((bVar1 & 2) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if ((bVar1 & 4) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if ((bVar1 & 8) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}

