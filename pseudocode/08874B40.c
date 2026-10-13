/* Entry 0x08874B40 | file offset 0x00071B18 | FUN_08874b40 | bytes 316 */

void FUN_08874b40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_0885ea88(param_2);
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_54 = puVar1[3];
  local_50 = puVar1[4];
  local_4c = puVar1[5];
  local_48 = puVar1[6];
  local_44 = puVar1[7];
  local_40 = puVar1[8];
  local_3c = puVar1[9];
  local_38 = puVar1[10];
  local_34 = puVar1[0xb];
  local_30 = puVar1[0xc];
  local_2c = puVar1[0xd];
  local_28 = puVar1[0xe];
  local_24 = puVar1[0xf];
  local_20 = DAT_09b48864;
  local_1c = DAT_09b48868;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_089a383c(0,0,0,&local_30);
  FUN_089a405c(&local_60,&local_60);
  FUN_089a3f40(&local_20,&local_60,&local_20);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

