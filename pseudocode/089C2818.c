/* Entry 0x089C2818 | file offset 0x001BF7F0 | FUN_089c2818 | bytes 52 */

void FUN_089c2818(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c5528;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

