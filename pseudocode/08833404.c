/* Entry 0x08833404 | file offset 0x000303DC | FUN_08833404 | bytes 304 */

void FUN_08833404(int param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = false;
  if (((*(byte *)(param_1 + 0x195) & 8) == 0) && (bVar1 = false, 0.0 < *(float *)(param_1 + 0x2a8)))
  {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_08834d60(*(undefined4 *)(param_1 + 0x2a8),param_1);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  if (*(float *)(param_1 + 0x3b4) != 0.0) {
    fVar2 = (float)FUN_08838300(param_1);
    if ((*(uint *)(param_1 + 0x38c) & 0x100) != 0) {
      fVar2 = *(float *)(DAT_089d69e0 + 0x18);
    }
    fVar2 = *(float *)(param_1 + 0x3b0) + *(float *)(param_1 + 0x3b4) * fVar2;
    *(float *)(param_1 + 0x3b0) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0x3b8)) {
      *(float *)(param_1 + 0x3b0) = *(float *)(param_1 + 0x3b8);
      *(undefined4 *)(param_1 + 0x3b4) = 0;
      fVar2 = *(float *)(param_1 + 0x3b0);
    }
    else if (1.0 <= fVar2) {
      *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
      fVar2 = 1.0;
      *(undefined4 *)(param_1 + 0x3b4) = 0;
    }
    *(float *)(param_1 + 0x370) = fVar2;
  }
  return;
}

