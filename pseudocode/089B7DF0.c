/* Entry 0x089B7DF0 | file offset 0x001B4DC8 | FUN_089b7df0 | bytes 360 */

float FUN_089b7df0(float param_1,float param_2,float param_3,uint param_4)

{
  param_1 = param_1 - param_2;
  param_3 = param_3 - param_2;
  if (0.0 <= param_1) {
    param_4 = param_4 & 0xf000;
    if (param_3 <= param_1) {
      if (param_4 == 0x2000) {
        param_3 = param_3 + param_3;
        param_1 = param_1 - param_3 * (float)(int)(param_1 / param_3);
        param_3 = param_3 - param_1;
        if (param_3 < param_1) goto LAB_089b7ef0;
      }
      else if (param_4 < 0x2001) {
        if (param_4 == 0) goto LAB_089b7f34;
        if (param_4 == 0x1000) {
          return (param_1 - param_3 * (float)(int)(param_1 / param_3)) + param_2;
        }
      }
      else if ((param_4 == 0x3000) || (param_4 == 0x4000)) {
LAB_089b7f34:
        return param_3 + param_2;
      }
    }
  }
  else {
    param_4 = param_4 & 0xf00;
    if (param_4 == 0x200) {
      param_3 = param_3 + param_3;
      param_1 = param_3 + (param_1 - param_3 * (float)(int)(param_1 / param_3));
      param_3 = param_3 - param_1;
      if (param_3 < param_1) {
LAB_089b7ef0:
        return param_3 + param_2;
      }
    }
    else if (param_4 < 0x201) {
      if (param_4 == 0) {
LAB_089b7f50:
        return param_2 + 0.0;
      }
      if (param_4 == 0x100) {
        return param_3 + (param_1 - param_3 * (float)(int)(param_1 / param_3)) + param_2;
      }
    }
    else if ((param_4 == 0x300) || (param_4 == 0x400)) goto LAB_089b7f50;
  }
  return param_1 + param_2;
}

