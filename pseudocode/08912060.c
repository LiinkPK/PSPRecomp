/* Entry 0x08912060 | file offset 0x0010F038 | FUN_08912060 | bytes 68 */

void FUN_08912060(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_089110fc();
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

