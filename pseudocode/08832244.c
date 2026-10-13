/* Entry 0x08832244 | file offset 0x0002F21C | FUN_08832244 | bytes 472 */

void FUN_08832244(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
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
  
  if (0.0 < *(float *)(param_2 + 0x3e0)) {
    fVar3 = (float)FUN_08838300(param_2);
    fVar3 = *(float *)(param_2 + 0x3e0) - fVar3;
    *(float *)(param_2 + 0x3e0) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined4 *)(param_2 + 0xdc) = 0;
    }
  }
  uVar2 = DAT_09af84cc;
  uVar1 = DAT_09af84c8;
  uVar4 = DAT_09af84c4;
  if (0.0 < *(float *)(param_2 + 0xdc)) {
    if (*(float *)(param_2 + 0xdc) < 0.01) {
      *(undefined4 *)(param_2 + 0xdc) = 0;
      FUN_089a3890(&local_60);
    }
    else {
      fVar3 = (float)FUN_08838300(param_2);
      FUN_089a3a44(*(float *)(param_2 + 0xdc) * fVar3,&local_30,param_2 + 0xd0);
      local_40 = local_30;
      local_3c = local_2c;
      local_38 = local_28;
      local_34 = local_24;
      local_50 = local_30;
      local_4c = local_2c;
      local_48 = local_28;
      local_44 = local_24;
      FUN_089a3868(&local_60,&local_50);
      uVar4 = FUN_08838300(param_2);
      fVar3 = (float)FUN_089a4774(0x3f666666,uVar4);
      *(float *)(param_2 + 0xdc) = *(float *)(param_2 + 0xdc) * fVar3;
    }
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = local_54;
  }
  else {
    *param_1 = DAT_09af84c0;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  return;
}

