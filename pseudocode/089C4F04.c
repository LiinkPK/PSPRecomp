/* Entry 0x089C4F04 | file offset 0x001C1EDC | FUN_089c4f04 | bytes 72 */

void FUN_089c4f04(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089dd2e8;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c5630;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

