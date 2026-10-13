/* Entry 0x08899178 | file offset 0x00096150 | FUN_08899178 | bytes 88 */

void FUN_08899178(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08893cf8(DAT_089d6ac8);
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  *(undefined4 *)(param_1 + 0xf8) = param_3;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}

