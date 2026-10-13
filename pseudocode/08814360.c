/* Entry 0x08814360 | file offset 0x00011338 | FUN_08814360 | bytes 88 */

void FUN_08814360(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c6f88;
    FUN_088a4ec0(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

