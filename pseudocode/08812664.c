/* Entry 0x08812664 | file offset 0x0000F63C | FUN_08812664 | bytes 264 */

void FUN_08812664(uint *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 auStack_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar1 = *(byte *)(param_3 + 5);
  param_1[3] = param_3;
  *param_1 = (uint)bVar1;
  param_1[1] = *(uint *)(param_3 + 0x18);
  param_1[2] = *(uint *)(param_3 + 0x1c);
  local_40 = *(undefined4 *)(param_3 + 8);
  local_3c = *(undefined4 *)(param_3 + 0xc);
  local_38 = *(undefined4 *)(param_3 + 0x10);
  local_34 = 0x3f800000;
  FUN_088369a4(param_2,auStack_80,*(undefined2 *)(param_3 + 6));
  FUN_089a3f40(&local_40,auStack_80,&local_40);
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  local_90 = local_40;
  local_8c = local_3c;
  local_88 = local_38;
  FUN_089a34c0(param_1 + 4,&local_90);
  param_1[5] = (uint)((float)param_1[5] - *(float *)(param_3 + 0x14));
  return;
}

