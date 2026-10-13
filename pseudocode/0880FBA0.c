/* Entry 0x0880FBA0 | file offset 0x0000CB78 | FUN_0880fba0 | bytes 88 */

void FUN_0880fba0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0880fc58(param_1);
    FUN_0886f048(param_1 + 0x9c,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

