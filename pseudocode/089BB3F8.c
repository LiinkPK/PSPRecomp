/* Entry 0x089BB3F8 | file offset 0x001B83D0 | FUN_089bb3f8 | bytes 104 */

int FUN_089bb3f8(int param_1)

{
  if (param_1 != 0) {
    FUN_089bb22c(*(undefined4 *)(param_1 + 0xc),1);
    thunk_FUN_089bb22c(*(undefined4 *)(param_1 + 0x10),1);
    FUN_089bb368(*(undefined4 *)(param_1 + 0x14),*(byte *)(param_1 + 0x18) + 1);
    thunk_FUN_089bb004(1,*(undefined4 *)(param_1 + 4));
    thunk_FUN_089bb004(1,*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}

