/* Entry 0x08838300 | file offset 0x000352D8 | FUN_08838300 | bytes 76 */

float FUN_08838300(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 0x388) & 0x80000000) == 0) {
    fVar1 = *(float *)(param_1 + 0x3c8) * DAT_089d5eac;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x3cc);
  }
  return fVar1;
}

