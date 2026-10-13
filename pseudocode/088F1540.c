/* Entry 0x088F1540 | file offset 0x000EE518 | FUN_088f1540 | bytes 104 */

char FUN_088f1540(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_088c4f74((int)*(short *)(DAT_089d712c + 0x1dee0));
  cVar1 = *(short *)(iVar2 + 0x16) != -1;
  if (*(short *)(iVar2 + 0x18) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(iVar2 + 0x1a) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

