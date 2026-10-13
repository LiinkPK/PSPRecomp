/* Entry 0x08882958 | file offset 0x0007F930 | FUN_08882958 | bytes 868 */

void FUN_08882958(float param_1,float param_2,float param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [64];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  
  local_40 = param_4;
  local_3c = param_3;
  fVar2 = (float)FUN_089a47ec(param_1 * 0.017453292 * 0.5);
  param_2 = param_2 * fVar2;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  fVar3 = -param_2;
  fVar4 = -fVar2;
  local_e4 = 0x3f800000;
  FUN_089a383c(fVar3,fVar4,0xbf800000,0x3f800000,auStack_e0);
  FUN_089a383c(fVar3,fVar2,0xbf800000,0x3f800000,auStack_d0);
  FUN_08868fe8(&local_80,&local_f0,auStack_e0,auStack_d0);
  local_100 = local_80;
  local_fc = local_7c;
  local_f8 = local_78;
  local_f4 = local_74;
  FUN_089a3868(param_5,&local_100);
  FUN_089a383c(param_2,fVar2,0xbf800000,0x3f800000,auStack_e0);
  FUN_089a383c(param_2,fVar4,0xbf800000,0x3f800000,auStack_d0);
  FUN_08868fe8(&local_70,&local_f0,auStack_e0,auStack_d0);
  local_100 = local_70;
  local_fc = local_6c;
  local_f8 = local_68;
  local_f4 = local_64;
  FUN_089a3868(param_5 + 0x10,&local_100);
  FUN_089a383c(fVar3,fVar2,0xbf800000,0x3f800000,auStack_e0);
  FUN_089a383c(param_2,fVar2,0xbf800000,0x3f800000,auStack_d0);
  FUN_08868fe8(&local_60,&local_f0,auStack_e0,auStack_d0);
  local_100 = local_60;
  local_fc = local_5c;
  local_f8 = local_58;
  local_f4 = local_54;
  FUN_089a3868(param_5 + 0x20,&local_100);
  FUN_089a383c(param_2,fVar4,0xbf800000,0x3f800000,auStack_e0);
  FUN_089a383c(fVar3,fVar4,0xbf800000,0x3f800000,auStack_d0);
  FUN_08868fe8(&local_50,&local_f0,auStack_e0,auStack_d0);
  local_100 = local_50;
  local_fc = local_4c;
  local_f8 = local_48;
  local_f4 = local_44;
  FUN_089a3868(param_5 + 0x30,&local_100);
  FUN_089a383c(0,0,0xbf800000,-local_3c,param_5 + 0x40);
  FUN_089a383c(0,0,0x3f800000,local_40,param_5 + 0x50);
  FUN_089a4030(auStack_c0,param_6);
  iVar1 = 0;
  do {
    FUN_089a3f40(param_5,auStack_c0,param_5);
    iVar1 = iVar1 + 1;
    param_5 = param_5 + 0x10;
  } while (iVar1 < 6);
  return;
}

