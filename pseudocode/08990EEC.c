/* Entry 0x08990EEC | file offset 0x0018DEC4 | FUN_08990eec | bytes 52 */

void FUN_08990eec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x904) = &DAT_089dd370;
    if ((param_2 & 1) != 0) {
      FUN_08990ebc();
    }
  }
  return;
}

