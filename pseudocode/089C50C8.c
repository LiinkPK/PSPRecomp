/* Entry 0x089C50C8 | file offset 0x001C20A0 | FUN_089c50c8 | bytes 72 */

void FUN_089c50c8(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c5718;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c5700;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

