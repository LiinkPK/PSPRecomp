/* Entry 0x089C290C | file offset 0x001BF8E4 | FUN_089c290c | bytes 72 */

void FUN_089c290c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089dc008;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c5528;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

