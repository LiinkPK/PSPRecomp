/* Entry 0x088DE2C4 | file offset 0x000DB29C | FUN_088de2c4 | bytes 156 */

void FUN_088de2c4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xa0) = &DAT_089cc290;
    FUN_088de378(param_1);
    FUN_088df4d8(param_1 + 0x80,2);
    FUN_0899372c(param_1 + 0x48,2,0x1c,FUN_088decb0,0,0);
    FUN_088de968(param_1 + 0x30,2);
    FUN_088df084(param_1 + 0x14,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

