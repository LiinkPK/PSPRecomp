/* Entry 0x0888B014 | file offset 0x00087FEC | FUN_0888b014 | bytes 108 */

bool FUN_0888b014(void)

{
  char cVar1;
  
  cVar1 = *DAT_089d7280;
  if (cVar1 != '\x01') {
    FUN_088af044(DAT_089d7260);
    FUN_088aef98(DAT_089d7260);
    FUN_08890a00(*(undefined4 *)(DAT_089d6a10 + 0x7cc));
    *(undefined4 *)(DAT_089d6a10 + 0x7cc) = 0;
  }
  return cVar1 != '\x01';
}

