/* Entry 0x08867CA0 | file offset 0x00064C78 | FUN_08867ca0 | bytes 96 */

void FUN_08867ca0(undefined4 *param_1)

{
  if (DAT_089d5f24 < 2) {
    if (0 < DAT_089d5f24) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = 1;
      return;
    }
  }
  else if (DAT_089d5f24 < 3) {
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 2;
  return;
}

