/* Entry 0x089701C4 | file offset 0x0016D19C | FUN_089701c4 | bytes 140 */

int FUN_089701c4(int param_1,int param_2)

{
  if (param_1 == 9) {
    param_2 = -1;
  }
  else if ((param_1 == 3) || (param_1 == 0)) {
    param_2 = FUN_089701a8(2,0);
  }
  else {
    param_2 = (uint)*(ushort *)(&DAT_089da28c + (char)(&DAT_089da2e4)[param_1] * 2) +
              (int)(char)(&DAT_089da2f0)[param_1] + param_2;
  }
  return param_2;
}

