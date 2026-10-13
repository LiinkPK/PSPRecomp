/* Entry 0x08835AA4 | file offset 0x00032A7C | FUN_08835aa4 | bytes 152 */

void FUN_08835aa4(int param_1,undefined4 *param_2)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  FUN_089a34c0(param_1 + 0x2ec,&local_2c);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x10000000;
  return;
}

