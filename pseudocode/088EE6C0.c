/* Entry 0x088EE6C0 | file offset 0x000EB698 | FUN_088ee6c0 | bytes 140 */

undefined4 FUN_088ee6c0(undefined4 param_1)

{
  FUN_08935524();
  if (*(char *)(DAT_089d7f00 + 0x1c4) == '\0') {
    sceAudioOutput2OutputBlocking(0,param_1);
  }
  else {
    FUN_089c1ba0(0,(int)(*(float *)(DAT_089d7f00 + 0x1a8) * 32768.0),
                 (int)(*(float *)(DAT_089d7f00 + 0x1ac) * 32768.0),param_1);
  }
  return 1;
}

