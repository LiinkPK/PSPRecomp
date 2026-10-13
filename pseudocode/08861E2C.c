/* Entry 0x08861E2C | file offset 0x0005EE04 | FUN_08861e2c | bytes 116 */

void FUN_08861e2c(undefined4 *param_1)

{
  (**(code **)(param_1[6] + 0xc))
            ((int)param_1 + (int)*(short *)(param_1[6] + 8),param_1[3],param_1[4],param_1[2]);
  FUN_0885c538(param_1[5],param_1[3],0);
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0886300c(param_1[1]);
  param_1[1] = 0xffffffff;
  *param_1 = 3;
  return;
}

