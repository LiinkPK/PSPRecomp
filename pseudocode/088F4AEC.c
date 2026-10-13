/* Entry 0x088F4AEC | file offset 0x000F1AC4 | FUN_088f4aec | bytes 56 */

void FUN_088f4aec(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6
                 )

{
  *param_1 = param_6 >> 0x14;
  *param_2 = param_6 >> 0x10 & 0xf;
  *param_3 = param_6 >> 0xb & 0x1f;
  *param_4 = param_6 >> 6 & 0x1f;
  *param_5 = param_6 & 0x3f;
  return;
}

