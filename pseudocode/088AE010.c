/* Entry 0x088AE010 | file offset 0x000AAFE8 | FUN_088ae010 | bytes 56 */

void FUN_088ae010(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6
                 )

{
  *param_2 = param_1 >> 0x14;
  *param_3 = param_1 >> 0x10 & 0xf;
  *param_4 = param_1 >> 0xb & 0x1f;
  *param_5 = param_1 >> 6 & 0x1f;
  *param_6 = param_1 & 0x3f;
  return;
}

