/* Entry 0x08806420 | file offset 0x000033F8 | FUN_08806420 | bytes 304 */

void FUN_08806420(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(param_1 + 0x68c) != 0.0) {
    fVar4 = *(float *)(param_1 + 0x684);
    fVar2 = (float)FUN_08838300(param_1);
    fVar3 = *(float *)(param_1 + 0x688);
    bVar1 = false;
    fVar4 = fVar4 + *(float *)(param_1 + 0x68c) * fVar2;
    *(float *)(param_1 + 0x684) = fVar4;
    if (0.0 <= *(float *)(param_1 + 0x68c)) {
      if (fVar3 < fVar4) {
        bVar1 = true;
      }
    }
    else if (fVar4 < fVar3) {
      bVar1 = true;
    }
    if (bVar1) {
      *(float *)(param_1 + 0x684) = fVar3;
      *(undefined4 *)(param_1 + 0x68c) = 0;
      fVar4 = fVar3;
    }
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x684) = fVar4;
    if (1.0 <= fVar4) {
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xffdfffff;
      *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
    }
    else {
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x200000;
      *(float *)(param_1 + 0x490) = fVar4;
    }
  }
  return;
}

