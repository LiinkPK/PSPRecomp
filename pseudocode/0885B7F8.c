/* Entry 0x0885B7F8 | file offset 0x000587D0 | FUN_0885b7f8 | bytes 520 */

void FUN_0885b7f8(float param_1,float param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined4 local_5c;
  uint local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = FUN_08899300();
  FUN_089a34c0(&local_80,param_4);
  local_7c = local_7c + param_2;
  local_7c = (float)FUN_088976e4(uVar1,auStack_74,&local_80,0x22,1,0,0);
  if ((local_7c != -3.4028235e+38) &&
     ((uVar2 = (local_48 & 0x1f0000) >> 0x10, uVar2 == 0x1e || (uVar2 == 0x1f)))) {
    fVar3 = *(float *)(param_4 + 4);
    param_1 = param_1 * 1.5;
    if (param_5 == 1) {
      if ((fVar3 - param_1 < local_7c) && (local_7c < fVar3 + param_2)) {
        local_40 = local_80;
        local_38 = local_78;
        local_34 = 0x3f800000;
        local_3c = local_7c;
        FUN_0885ad38(param_1,0x3f800000,0x42f00000,DAT_089d4dc8 + 0x160,&local_40,local_5c,uVar2,1);
      }
    }
    else {
      fVar3 = (float)FUN_08867e7c(fVar3 - local_7c);
      if ((*(float *)(param_4 + 4) - param_1 < local_7c) &&
         (local_7c < *(float *)(param_4 + 4) + param_1)) {
        local_30 = local_80;
        local_2c = local_7c;
        local_28 = local_78;
        local_24 = 0x3f800000;
        FUN_0885ad38(param_1 - fVar3,0x3f800000,0x42f00000,DAT_089d4dc8 + 0x160,&local_30,local_5c,
                     (local_48 & 0x1f0000) >> 0x10,1);
      }
    }
  }
  return;
}

