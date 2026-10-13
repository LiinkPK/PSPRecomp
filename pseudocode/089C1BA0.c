/* Entry 0x089C1BA0 | file offset 0x001BEB78 | FUN_089c1ba0 | bytes 104 */

undefined4 FUN_089c1ba0(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80440010;
  if (param_1 < 4) {
    uVar1 = 0x8044000a;
    if (param_2 < 0x8001) {
      uVar1 = 0x8044000a;
      if (param_3 < 0x8001) {
        uVar1 = sceAudioOutputPannedBlocking((&DAT_09af84a4)[param_1]);
      }
    }
  }
  return uVar1;
}

