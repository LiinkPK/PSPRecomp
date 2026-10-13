/* Entry 0x088B26F0 | file offset 0x000AF6C8 | FUN_088b26f0 | bytes 88 */

float FUN_088b26f0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)(param_1 - param_2) * *(float *)(DAT_089d72ac + 0x18);
  fVar1 = *(float *)(DAT_089d72ac + 0x10);
  if ((*(float *)(DAT_089d72ac + 0x10) <= fVar2) &&
     (fVar1 = fVar2, *(float *)(DAT_089d72ac + 0x14) < fVar2)) {
    fVar1 = *(float *)(DAT_089d72ac + 0x14);
  }
  return fVar1;
}

