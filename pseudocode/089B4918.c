/* Entry 0x089B4918 | file offset 0x001B18F0 | FUN_089b4918 | bytes 36 */

void FUN_089b4918(uint *param_1,uint param_2)

{
  param_1[1] = param_2 >> 0x18 | 0x5d000000;
  *param_1 = param_2 & 0xffffff | 0x5c000000;
  return;
}

