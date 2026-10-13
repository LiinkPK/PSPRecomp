/* Entry 0x0894678C | file offset 0x00143764 | FUN_0894678c | bytes 588 */

void FUN_0894678c(float *param_1)

{
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_60 = *param_1;
  local_54 = local_60 * local_60 + param_1[1] * param_1[1] + param_1[2] * param_1[2] +
             param_1[3] * param_1[3];
  if (local_54 == 0.0) {
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 0.0;
    local_54 = 0.0;
    local_50 = param_1[4];
    local_44 = local_50 * local_50 + param_1[5] * param_1[5] + param_1[6] * param_1[6] +
               param_1[7] * param_1[7];
  }
  else {
    local_54 = SQRT(local_54);
    local_60 = local_60 / local_54;
    local_5c = param_1[1] / local_54;
    local_58 = param_1[2] / local_54;
    local_54 = param_1[3] / local_54;
    local_50 = param_1[4];
    local_44 = local_50 * local_50 + param_1[5] * param_1[5] + param_1[6] * param_1[6] +
               param_1[7] * param_1[7];
  }
  if (local_44 == 0.0) {
    local_50 = 0.0;
    local_4c = 0.0;
    local_48 = 0.0;
    local_44 = 0.0;
    local_40 = param_1[8];
    local_34 = local_40 * local_40 + param_1[9] * param_1[9] + param_1[10] * param_1[10] +
               param_1[0xb] * param_1[0xb];
  }
  else {
    local_44 = SQRT(local_44);
    local_50 = local_50 / local_44;
    local_4c = param_1[5] / local_44;
    local_48 = param_1[6] / local_44;
    local_44 = param_1[7] / local_44;
    local_40 = param_1[8];
    local_34 = local_40 * local_40 + param_1[9] * param_1[9] + param_1[10] * param_1[10] +
               param_1[0xb] * param_1[0xb];
  }
  if (local_34 == 0.0) {
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
  }
  else {
    local_34 = SQRT(local_34);
    local_40 = local_40 / local_34;
    local_3c = param_1[9] / local_34;
    local_38 = param_1[10] / local_34;
    local_34 = param_1[0xb] / local_34;
  }
  local_30 = param_1[0xc];
  local_2c = param_1[0xd];
  local_28 = param_1[0xe];
  local_24 = param_1[0xf];
  FUN_0896fb5c(&local_60);
  FUN_089a0520(1,0x19c,6,0,&DAT_089d9290);
  return;
}

