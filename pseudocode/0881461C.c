/* Entry 0x0881461C | file offset 0x000115F4 | FUN_0881461c | bytes 92 */

void FUN_0881461c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c6fb8;
    FUN_08814360(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

