/* Entry 0x08899780 | file offset 0x00096758 | FUN_08899780 | bytes 412 */

void FUN_08899780(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [12];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_a0 = *param_3;
  local_98 = param_3[2];
  local_9c = (float)param_3[1] + param_1;
  uVar1 = FUN_08899300();
  local_30 = DAT_09af8b10;
  local_2c = DAT_09af8b14;
  local_28 = DAT_09af8b18;
  local_c0 = DAT_09af8b10;
  local_bc = DAT_09af8b14;
  local_b8 = DAT_09af8b18;
  FUN_089a34c0(auStack_58,&local_c0);
  FUN_089a34c0(auStack_64,&local_a0);
  iVar2 = FUN_0889beb0(0x42c80000,uVar1,auStack_94,auStack_64,0x22,1,1,0,0,0,0);
  if (iVar2 == 0) {
    *param_2 = local_a0;
    param_2[1] = 0;
    param_2[2] = local_98;
    param_2[3] = 0x3f800000;
  }
  else {
    *param_2 = local_88;
    param_2[1] = local_84;
    param_2[2] = local_80;
    param_2[3] = 0x3f800000;
  }
  return;
}

