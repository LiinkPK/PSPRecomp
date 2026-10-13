/* Entry 0x08834840 | file offset 0x00031818 | FUN_08834840 | bytes 84 */

float FUN_08834840(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_0884e4c4(*(undefined4 *)(param_1 + 0x39c));
  fVar1 = fVar1 * *(float *)(param_1 + 0x3d8);
  if ((*(uint *)(param_1 + 900) & 0x80) != 0) {
    fVar1 = (float)FUN_0884e504(*(undefined4 *)(param_1 + 0x39c));
    fVar1 = fVar1 * *(float *)(param_1 + 0x3d8);
  }
  return fVar1;
}

