/* Entry 0x088DF4D8 | file offset 0x000DC4B0 | FUN_088df4d8 | bytes 100 */

void FUN_088df4d8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x1c) = &DAT_089cc330;
    FUN_088df54c(param_1);
    FUN_0887a2ec(param_1 + 0xc,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

