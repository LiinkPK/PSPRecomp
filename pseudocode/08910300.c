/* Entry 0x08910300 | file offset 0x0010D2D8 | FUN_08910300 | bytes 68 */

void FUN_08910300(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_089110fc();
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

