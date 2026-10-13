/* Entry 0x088EC234 | file offset 0x000E920C | FUN_088ec234 | bytes 52 */

void FUN_088ec234(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089cca28;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

