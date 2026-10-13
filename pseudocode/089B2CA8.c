/* Entry 0x089B2CA8 | file offset 0x001AFC80 | FUN_089b2ca8 | bytes 36 */

short * FUN_089b2ca8(int param_1)

{
  if (-1 < **(short **)(param_1 + 0xc0)) {
    return *(short **)(param_1 + 0xc0) + 8;
  }
  return (short *)&DAT_089d21b8;
}

