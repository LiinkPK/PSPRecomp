/* Entry 0x0891C098 | file offset 0x00119070 | FUN_0891c098 | bytes 140 */

undefined4 FUN_0891c098(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 4) == 0) {
    if (*(short *)(param_1 + 0x44) < 0) {
      uVar1 = 0;
    }
    else {
      *(code **)(DAT_089d8510 + 0x140) = FUN_0891c6b0;
      *(undefined4 *)(DAT_089d8510 + 0x144) = 0;
      FUN_0891e164(DAT_089d8510,(int)*(short *)(param_1 + 0x44));
      uVar1 = 1;
    }
  }
  else {
    *(code **)(DAT_089d8510 + 0x140) = FUN_0891c6b0;
    *(undefined4 *)(DAT_089d8510 + 0x144) = 0;
    FUN_0891e114(DAT_089d8510,param_1 + 4);
    uVar1 = 1;
  }
  return uVar1;
}

