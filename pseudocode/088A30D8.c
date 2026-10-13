/* Entry 0x088A30D8 | file offset 0x000A00B0 | FUN_088a30d8 | bytes 52 */

void FUN_088a30d8(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089cac38;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

