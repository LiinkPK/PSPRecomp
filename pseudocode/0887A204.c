/* Entry 0x0887A204 | file offset 0x000771DC | FUN_0887a204 | bytes 176 */

bool FUN_0887a204(int param_1,int param_2)

{
  float fVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_089a3528(&local_28,param_2,param_1);
  local_34 = local_28;
  local_30 = local_24;
  local_2c = local_20;
  local_40 = local_28;
  local_3c = local_24;
  local_38 = local_20;
  fVar1 = (float)FUN_089a37dc(&local_40);
  return fVar1 <= *(float *)(param_1 + 0xc) + *(float *)(param_2 + 0xc);
}

