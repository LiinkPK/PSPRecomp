/* Entry 0x089C284C | file offset 0x001BF824 | FUN_089c284c | bytes 72 */

void FUN_089c284c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089dbfc0;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c5528;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

