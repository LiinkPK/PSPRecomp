/* Entry 0x08935490 | file offset 0x00132468 | FUN_08935490 | bytes 148 */

int FUN_08935490(byte *param_1,byte *param_2,uint param_3)

{
  if ((3 < param_3) && ((((uint)param_1 | (uint)param_2) & 3) == 0)) {
    do {
      if (*(int *)param_1 != *(int *)param_2) break;
      param_3 = param_3 - 4;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (3 < param_3);
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
    if ((uint)*param_1 != (uint)*param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

