/* Entry 0x089C1B30 | file offset 0x001BEB08 | FUN_089c1b30 | bytes 112 */

undefined4 FUN_089c1b30(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80440010;
  if (param_1 < 4) {
    uVar1 = 0x80440011;
    if (param_2 - 0x40 < 0xff81) {
      uVar1 = 0x80440011;
      if ((param_2 & 0x3f) == 0) {
        uVar1 = sceAudioSetChannelDataLen((&DAT_09af84a4)[param_1]);
      }
    }
  }
  return uVar1;
}

