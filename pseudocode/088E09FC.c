/* Entry 0x088E09FC | file offset 0x000DD9D4 | FUN_088e09fc | bytes 220 */

void FUN_088e09fc(float *param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 10) != '\0') {
    fVar1 = param_1[8] / param_1[9];
    FUN_088759fc(*param_1 + (param_1[1] - *param_1) * fVar1,
                 param_1[2] + (param_1[3] - param_1[2]) * fVar1,
                 param_1[4] + (param_1[5] - param_1[4]) * fVar1,
                 param_1[6] + (param_1[7] - param_1[6]) * fVar1,DAT_089d6040,0);
    FUN_08875980(DAT_089d6040);
    fVar1 = param_1[8] + DAT_089d5eac;
    param_1[8] = fVar1;
    if (param_1[9] <= fVar1) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}

