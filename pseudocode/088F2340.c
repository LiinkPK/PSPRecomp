/* Entry 0x088F2340 | file offset 0x000EF318 | FUN_088f2340 | bytes 56 */

void FUN_088f2340(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined2 *)(DAT_089d712c + 0x1de98);
  do {
    *puVar1 = 0xffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x20);
  return;
}

