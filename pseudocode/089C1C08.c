/* Entry 0x089C1C08 | file offset 0x001BEBE0 | FUN_089c1c08 | bytes 132 */

undefined4 FUN_089c1c08(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x80440002;
  if (DAT_09af7204 == 1) {
    sceAudioChRelease(DAT_09af8490);
    sceAudioChRelease(DAT_09af84a4);
    sceAudioChRelease(DAT_09af84a8);
    sceAudioChRelease(DAT_09af84ac);
    DAT_09af849c = 0;
    DAT_09af7204 = 0;
    DAT_09af8498 = 0;
    uVar1 = 0;
  }
  return uVar1;
}

