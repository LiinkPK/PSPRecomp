/* Entry 0x08998278 | file offset 0x00195250 | FUN_08998278 | bytes 32 */

uint FUN_08998278(uint param_1)

{
  return 0x7f800000 - (param_1 & 0x7fffffff) >> 0x1f;
}

