/* Entry 0x08820B54 | file offset 0x0001DB2C | FUN_08820b54 | bytes 72 */

float FUN_08820b54(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_08820cbc(*(undefined4 *)(*(int *)(param_1 + 4) + 4),
                              *(undefined4 *)(*(int *)(param_1 + 4) + 8));
  if (fVar1 <= 0.0) {
    fVar1 = 1.0;
  }
  return 1.0 / fVar1;
}

