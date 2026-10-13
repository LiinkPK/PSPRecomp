/* Entry 0x088ED208 | file offset 0x000EA1E0 | FUN_088ed208 | bytes 100 */

undefined4 FUN_088ed208(void)

{
  undefined4 uVar1;
  
  if (DAT_089d7f00 == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(char *)(DAT_089d7f00 + 1) != '\0') && ((*(uint *)(DAT_089d7f00 + 0x140) & 0x10) != 0)) {
      *(uint *)(DAT_089d7f00 + 0x140) = *(uint *)(DAT_089d7f00 + 0x140) | 0x20;
    }
    uVar1 = 1;
  }
  return uVar1;
}

