/* Entry 0x08871B40 | file offset 0x0006EB18 | FUN_08871b40 | bytes 132 */

void FUN_08871b40(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  param_1[1] = param_1[1] & param_4;
  *param_1 = *param_1 & param_3;
  param_1[3] = param_1[3] & param_4;
  param_1[2] = param_1[2] & param_3;
  param_1[5] = param_1[5] & param_4;
  param_1[4] = param_1[4] & param_3;
  param_1[7] = param_1[7] & param_4;
  param_1[6] = param_1[6] & param_3;
  param_1[0xc] = 0;
  FUN_089a3890(param_1 + 8);
  return;
}

