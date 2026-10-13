/* Entry 0x08895F18 | file offset 0x00092EF0 | FUN_08895f18 | bytes 72 */

void FUN_08895f18(undefined4 *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_0889f704(param_1 + 5);
    param_1[0xe] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

