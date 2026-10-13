/* Entry 0x089B4948 | file offset 0x001B1920 | FUN_089b4948 | bytes 40 */

void FUN_089b4948(uint *param_1,uint param_2)

{
  param_1[1] = param_2 & 0xffffff | 0xa000000;
  *param_1 = ((param_2 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
  return;
}

