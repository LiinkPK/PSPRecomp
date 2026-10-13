/* Entry 0x08998234 | file offset 0x0019520C | FUN_08998234 | bytes 68 */

uint FUN_08998234(uint param_1,uint param_2)

{
  return 0x7ff00000 - (param_2 & 0x7fffffff | (param_1 | -param_1) >> 0x1f) >> 0x1f;
}

