/* Entry 0x088F3E98 | file offset 0x000F0E70 | FUN_088f3e98 | bytes 80 */

void FUN_088f3e98(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_089d712c + 0xf6e0;
  iVar2 = 0;
  iVar1 = iVar3;
  do {
    *(undefined1 *)(iVar1 + 2) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x2ab);
  iVar1 = 0;
  do {
    *(undefined1 *)(iVar3 + 0xaae) = 0;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 0x276);
  return;
}

