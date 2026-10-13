/* Entry 0x08992140 | file offset 0x0018F118 | FUN_08992140 | bytes 108 */

void FUN_08992140(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x50) = &DAT_089dd380;
    if (-1 < *(int *)(param_1 + 4)) {
      sceAtracReleaseAtracID();
    }
    FUN_08934b18(*(undefined4 *)(param_1 + 0x34));
    if ((param_2 & 1) != 0) {
      FUN_089928fc(param_1);
    }
  }
  return;
}

