/* Entry 0x08910A04 | file offset 0x0010D9DC | FUN_08910a04 | bytes 152 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08910a04(int param_1)

{
  FUN_08895b84(DAT_089d6ae0);
  FUN_08895ae4(DAT_089d6ae0);
  FUN_0888e5d0();
  FUN_0888e4a0();
  FUN_08896ab0(DAT_089d6af0);
  FUN_088699f4(param_1);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088a0d1c();
    FUN_088a0cd4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  func_0x08aa7850(_DAT_08aaad80);
  func_0x08acce68(_DAT_08acd0e8);
  return;
}

