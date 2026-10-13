/* Entry 0x08879D54 | file offset 0x00076D2C | FUN_08879d54 | bytes 92 */

void FUN_08879d54(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0889f674(param_1 + 0x1c,2);
    FUN_0887a644(param_1 + 0xc,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

