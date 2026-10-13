/* Entry 0x088F1BFC | file offset 0x000EEBD4 | FUN_088f1bfc | bytes 384 */

void FUN_088f1bfc(void)

{
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 auStack_40 [16];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if (((*(short *)(DAT_089d712c + 0x1df80) != 0) && (*(char *)(DAT_089d712c + 0x1df82) != '\0')) &&
     (*(char *)(DAT_089d712c + 0x1df83) != '\0')) {
    FUN_088efdc8(auStack_40,*(short *)(DAT_089d712c + 0x1df80),*(char *)(DAT_089d712c + 0x1df82),
                 *(char *)(DAT_089d712c + 0x1df83));
    sceRtcGetTick(auStack_40,&local_28);
    sceRtcGetCurrentClockLocalTime(&local_50);
    FUN_088efdc8(auStack_40,local_50,local_4e,local_4c);
    sceRtcGetTick(auStack_40,&local_30);
    DAT_089d7f14 = *(short *)(DAT_089d712c + 0x1df3c);
    DAT_089d7f16 = *(undefined2 *)(DAT_089d712c + 0x1df3e);
    if (DAT_089d7f14 == 0) {
      DAT_089d7f14 = 1;
      DAT_089d7f16 = 2;
    }
    if ((local_24 == local_2c && local_28 < local_30 || local_24 < local_2c) &&
       (DAT_089d7f18 = FUN_088efcd8(&local_30,&local_28), 1 < DAT_089d7f18)) {
      DAT_089d7f14 = 0;
      DAT_089d7f16 = 1;
    }
  }
  return;
}

