/* Entry 0x089ACD20 | file offset 0x001A9CF8 | FUN_089acd20 | bytes 156 */

int FUN_089acd20(int param_1)

{
  if (param_1 != 0) {
    FUN_089b4868();
    FUN_089ac148(param_1);
    FUN_089acaa8(*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x20));
    FUN_089ac948(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x22));
    FUN_089ac75c(*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x24));
    FUN_089ac598(*(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x26));
    FUN_089acc90(*(undefined4 *)(param_1 + 0x1c),*(ushort *)(param_1 + 0x28) + 1);
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x44));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x48));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x54));
  }
  return param_1;
}

