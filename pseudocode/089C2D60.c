/* Entry 0x089C2D60 | file offset 0x001BFD38 | FUN_089c2d60 | bytes 76 */

void FUN_089c2d60(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089c5570;
    if (param_1 != 0) {
      *(undefined **)(param_1 + 4) = &DAT_089c5468;
    }
    if ((param_2 & 1) != 0) {
      FUN_089748d0();
    }
  }
  return;
}

