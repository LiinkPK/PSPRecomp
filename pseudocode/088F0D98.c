/* Entry 0x088F0D98 | file offset 0x000EDD70 | FUN_088f0d98 | bytes 108 */

undefined4 FUN_088f0d98(void)

{
  undefined4 uVar1;
  short local_20;
  ushort local_1e;
  ushort local_1c;
  
  sceRtcGetCurrentClockLocalTime(&local_20);
  if (((*(short *)(DAT_089d712c + 0x1df84) == local_20) &&
      (*(byte *)(DAT_089d712c + 0x1df86) == local_1e)) &&
     (*(byte *)(DAT_089d712c + 0x1df87) == local_1c)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

