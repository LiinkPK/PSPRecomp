/* Entry 0x089C2DC4 | file offset 0x001BFD9C | FUN_089c2dc4 | bytes 76 */

void FUN_089c2dc4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089c55a8;
    if (param_1 != 0) {
      *(undefined **)(param_1 + 4) = &DAT_089c5468;
    }
    if ((param_2 & 1) != 0) {
      FUN_089748d0();
    }
  }
  return;
}

