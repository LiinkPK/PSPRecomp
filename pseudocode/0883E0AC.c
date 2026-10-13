/* Entry 0x0883E0AC | file offset 0x0003B084 | FUN_0883e0ac | bytes 92 */

void FUN_0883e0ac(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_0883e1f0(param_1);
    *param_1 = 0;
    FUN_0880abf4(param_1 + 10,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

