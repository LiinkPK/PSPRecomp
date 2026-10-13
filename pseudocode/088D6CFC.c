/* Entry 0x088D6CFC | file offset 0x000D3CD4 | FUN_088d6cfc | bytes 148 */

void FUN_088d6cfc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x278) = &DAT_089cc0b0;
    FUN_088d6dbc(param_1);
    FUN_088d96e4(param_1 + 0x264,2);
    FUN_088d7b74(param_1 + 0x244,2);
    FUN_088d91d0(param_1 + 0x5c,2);
    FUN_088d853c(param_1 + 0x4c,2);
    FUN_088d7fa8(param_1 + 0x24,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

