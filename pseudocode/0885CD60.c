/* Entry 0x0885CD60 | file offset 0x00059D38 | FUN_0885cd60 | bytes 128 */

void FUN_0885cd60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_089a3528(param_1 + 3);
  param_1[2] = param_4;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_089a34f4(param_1 + 9,param_2,param_3);
  param_1[8] = param_4;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  return;
}

