/* Entry 0x0892AEF8 | file offset 0x00127ED0 | FUN_0892aef8 | bytes 348 */

void FUN_0892aef8(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      if (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0xc)) {
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x24) + 0x44))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x40),
                   (int)(*(float *)(param_1 + 0x14) * 255.0) & 0xff);
        *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18);
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + 1.0;
      }
    }
  }
  else if (*(int *)(param_1 + 8) == 1) {
    if (*(char *)(param_1 + 0x21) == '\0') {
      fVar1 = *(float *)(param_1 + 0x1c) - 0.25;
      *(float *)(param_1 + 0x1c) = fVar1;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1c) + 0.25;
      *(undefined1 *)(param_1 + 0x21) = 0;
      *(float *)(param_1 + 0x1c) = fVar1;
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x1c) = fVar1;
    (**(code **)(*(int *)(param_1 + 0x24) + 0x44))
              (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x40),(int)(fVar1 * 255.0) & 0xff);
  }
  return;
}

