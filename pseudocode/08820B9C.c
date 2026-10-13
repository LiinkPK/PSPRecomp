/* Entry 0x08820B9C | file offset 0x0001DB74 | FUN_08820b9c | bytes 72 */

float FUN_08820b9c(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_08820cbc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),
                              *(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  if (fVar1 <= 0.0) {
    fVar1 = 1.0;
  }
  return 1.0 / fVar1;
}

