/* Entry 0x08831010 | file offset 0x0002DFE8 | FUN_08831010 | bytes 92 */

void FUN_08831010(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c7c48;
    FUN_08814360(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

