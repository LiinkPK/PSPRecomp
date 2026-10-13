/* Entry 0x089C25F4 | file offset 0x001BF5CC | FUN_089c25f4 | bytes 52 */

void FUN_089c25f4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089c5468;
    if ((param_2 & 1) != 0) {
      FUN_089748d0();
    }
  }
  return;
}

