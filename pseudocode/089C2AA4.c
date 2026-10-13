/* Entry 0x089C2AA4 | file offset 0x001BFA7C | FUN_089c2aa4 | bytes 76 */

void FUN_089c2aa4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089dc928;
    if (param_1 != 0) {
      *(undefined **)(param_1 + 4) = &DAT_089c5468;
    }
    if ((param_2 & 1) != 0) {
      FUN_089748d0();
    }
  }
  return;
}

