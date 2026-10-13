/* Entry 0x088CD424 | file offset 0x000CA3FC | FUN_088cd424 | bytes 120 */

void FUN_088cd424(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x40) = &DAT_089cbd10;
    FUN_088cd4c8(param_1);
    FUN_088cdc60(param_1);
    FUN_0887a644(param_1 + 0x2c,2);
    FUN_0887a2ec(param_1 + 0xc,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

