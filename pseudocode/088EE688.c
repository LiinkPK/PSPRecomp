/* Entry 0x088EE688 | file offset 0x000EB660 | FUN_088ee688 | bytes 56 */

float FUN_088ee688(void)

{
  float fVar1;
  
  if (DAT_089d7f00 == 0) {
    fVar1 = -1.0;
  }
  else {
    fVar1 = *(float *)(DAT_089d7f00 + 0x1d8) / 90000.0;
  }
  return fVar1;
}

