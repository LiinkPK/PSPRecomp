/* Entry 0x089C4DF4 | file offset 0x001C1DCC | FUN_089c4df4 | bytes 92 */

void FUN_089c4df4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_089dd250;
    FUN_089843ec(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,0x18);
    }
  }
  return;
}

