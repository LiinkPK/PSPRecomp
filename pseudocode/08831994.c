/* Entry 0x08831994 | file offset 0x0002E96C | FUN_08831994 | bytes 624 */

void FUN_08831994(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = param_1 + 0x100;
  if (*(int *)(param_1 + 0x468) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x46c) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x470) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x474) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x478) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x47c) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x480) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x484) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x488) != 0) {
    FUN_0883e79c();
  }
  if (*(int *)(param_1 + 0x48c) != 0) {
    FUN_0883e79c();
  }
  local_a4 = 0;
  iVar1 = FUN_08835358(param_1);
  if (iVar1 == 0) {
    FUN_089a3868(iVar2,param_1 + 0x80);
  }
  else {
    FUN_08812664(auStack_b0,param_1,iVar1);
    local_50 = local_a0;
    local_4c = local_9c;
    local_80 = local_a0;
    local_48 = local_98;
    local_7c = local_9c;
    local_44 = 0x3f800000;
    local_78 = local_98;
    local_74 = 0x3f800000;
    local_90 = local_a0;
    local_8c = local_9c;
    local_88 = local_98;
    local_84 = 0x3f800000;
    FUN_089a3868(iVar2,&local_90);
  }
  iVar1 = FUN_08835418(param_1);
  if (iVar1 == 0) {
    FUN_089a3868(param_1 + 0x110,iVar2);
  }
  else {
    FUN_08812664(auStack_b0,param_1,iVar1);
    local_30 = local_a0;
    local_2c = local_9c;
    local_60 = local_a0;
    local_28 = local_98;
    local_5c = local_9c;
    local_24 = 0x3f800000;
    local_58 = local_98;
    local_54 = 0x3f800000;
    local_70 = local_a0;
    local_6c = local_9c;
    local_68 = local_98;
    local_64 = 0x3f800000;
    FUN_089a3868(param_1 + 0x110,&local_70);
  }
  return;
}

