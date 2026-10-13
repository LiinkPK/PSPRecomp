/* Entry 0x089C26E4 | file offset 0x001BF6BC | FUN_089c26e4 | bytes 76 */

void FUN_089c26e4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089c54a0;
    if (param_1 != 0) {
      *(undefined **)(param_1 + 4) = &DAT_089c5468;
    }
    if ((param_2 & 1) != 0) {
      FUN_089748d0();
    }
  }
  return;
}

