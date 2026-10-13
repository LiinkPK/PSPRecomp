/* Entry 0x089B5438 | file offset 0x001B2410 | FUN_089b5438 | bytes 172 */

void FUN_089b5438(float param_1,float param_2,uint *param_3,uint param_4)

{
  param_1 = param_2 - param_1;
  if ((param_1 <= 0.0) && (0.0 <= param_1)) {
    *param_3 = param_4 & 0xffffff | 0xcf000000;
    param_3[2] = 0xce000000;
    param_3[1] = (uint)param_2 >> 8 | 0xcd000000;
    return;
  }
  *param_3 = param_4 & 0xffffff | 0xcf000000;
  param_3[2] = (uint)(1.0 / param_1) >> 8 | 0xce000000;
  param_3[1] = (uint)param_2 >> 8 | 0xcd000000;
  return;
}

