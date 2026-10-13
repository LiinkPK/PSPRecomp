/* Entry 0x088A46FC | file offset 0x000A16D4 | FUN_088a46fc | bytes 100 */

void FUN_088a46fc(int param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = (float)param_2[3] * *(float *)(param_1 + 0x28);
  FUN_089a3868();
  FUN_08941a9c(*(undefined4 *)(DAT_089d6d80 + 8),*(undefined4 *)(param_1 + 0x10),&local_20);
  return;
}

