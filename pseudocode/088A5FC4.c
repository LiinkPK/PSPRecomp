/* Entry 0x088A5FC4 | file offset 0x000A2F9C | FUN_088a5fc4 | bytes 100 */

undefined4 * FUN_088a5fc4(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  FUN_0885e7c0(param_1 + 4);
  FUN_08873498(param_1 + 0x34);
  FUN_088a64dc(param_1 + 0x48,param_1);
  param_1[0x4a] = 0xbf800000;
  param_1[0x4b] = 0x3f800000;
  return param_1;
}

