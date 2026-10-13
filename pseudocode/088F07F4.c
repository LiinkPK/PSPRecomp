/* Entry 0x088F07F4 | file offset 0x000ED7CC | FUN_088f07f4 | bytes 180 */

undefined4 FUN_088f07f4(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_088efdac(&DAT_09b698c8);
  if (((*(short *)(DAT_089d712c + 0x1de84) != DAT_09b698c8) ||
      (*(byte *)(DAT_089d712c + 0x1de86) != DAT_09b698ca)) ||
     (*(byte *)(DAT_089d712c + 0x1de87) != DAT_09b698cc)) {
    DAT_089d7f1b = 1;
    if ((*(short *)(DAT_089d712c + 0x1de84) == 0) || (*(char *)(DAT_089d712c + 0x1de86) == '\0')) {
      DAT_089d7f1b = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

