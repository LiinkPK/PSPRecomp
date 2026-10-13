/* Entry 0x08980E08 | file offset 0x0017DDE0 | FUN_08980e08 | bytes 1256 */

void FUN_08980e08(undefined4 param_1,int param_2,uint param_3,int *param_4,undefined4 *param_5,
                 char param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  uint local_40;
  
  local_40 = param_3;
  FUN_089a38e0(local_110,param_2 + 0x20,param_2 + 0x10);
  if (*(char *)(param_2 + 0x70) == '\0') {
    iVar3 = *param_4;
  }
  else {
    iVar3 = *param_4 - local_40;
  }
  local_d0 = (float)iVar3;
  if (iVar3 < 0) {
    local_d0 = local_d0 + 4.2949673e+09;
  }
  local_cc = local_d0;
  local_c8 = local_d0;
  local_c4 = local_d0;
  FUN_089a3950(local_110,local_110,&local_d0);
  FUN_089a3868(local_100,param_2 + 0x10);
  uVar5 = local_40;
  if (param_6 == '\0') {
    if (param_4[1] == 0) {
      local_f0 = 0x3b808081;
      local_ec = 0x3b808081;
      local_e8 = 0x3b808081;
      local_e4 = 0x3b808081;
      if (local_40 < (uint)param_4[2] >> 2) {
        param_5 = param_5 + local_40;
        do {
          FUN_089a3918(auStack_c0,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_c0,auStack_c0);
          uVar2 = FUN_089a48cc(auStack_c0);
          *param_5 = uVar2;
          FUN_089a38a8(local_100,local_100,local_110);
          uVar5 = uVar5 + 1;
          param_5 = param_5 + 1;
        } while (uVar5 < (uint)param_4[2] >> 2);
      }
    }
    else if (local_40 < (uint)param_4[2] >> 1) {
      puVar4 = (undefined2 *)((int)param_5 + local_40 * 2);
      do {
        if (param_4[1] == 1) {
          FUN_089a3918(auStack_b0,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_b0,auStack_b0);
          uVar1 = FUN_089a4818(auStack_b0);
        }
        else if (param_4[1] == 2) {
          FUN_089a3918(auStack_a0,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_a0,auStack_a0);
          uVar1 = FUN_089a4928(0,auStack_a0);
        }
        else {
          FUN_089a3918(auStack_90,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_90,auStack_90);
          uVar1 = FUN_089a48f0(auStack_90);
        }
        *puVar4 = uVar1;
        FUN_089a38a8(local_100,local_100,local_110);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 < (uint)param_4[2] >> 1);
    }
  }
  else if (param_4[1] == 0) {
    local_e0 = 0x3b808081;
    local_dc = 0x3b808081;
    local_d8 = 0x3b808081;
    local_d4 = 0x3b808081;
    uVar6 = 0;
    if ((uint)param_4[2] >> 2 != local_40) {
      do {
        FUN_089a3918(auStack_80,&DAT_089da410,local_100);
        FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
        uVar2 = FUN_089a48cc(auStack_80);
        *param_5 = uVar2;
        FUN_089a38a8(local_100,local_100,local_110);
        uVar6 = uVar6 + 1;
        param_5 = param_5 + 1;
      } while (uVar6 < ((uint)param_4[2] >> 2) - uVar5);
    }
  }
  else {
    uVar5 = 0;
    if ((uint)param_4[2] >> 1 != local_40) {
      do {
        if (param_4[1] == 1) {
          FUN_089a3918(auStack_70,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
          uVar1 = FUN_089a4818(auStack_70);
        }
        else if (param_4[1] == 2) {
          FUN_089a3918(auStack_60,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
          uVar1 = FUN_089a4928(0,auStack_60);
        }
        else {
          FUN_089a3918(auStack_50,&DAT_089da410,local_100);
          FUN_089a3a84(0,0x3f800000,auStack_50,auStack_50);
          uVar1 = FUN_089a48f0(auStack_50);
        }
        *(undefined2 *)param_5 = uVar1;
        FUN_089a38a8(local_100,local_100,local_110);
        uVar5 = uVar5 + 1;
        param_5 = (undefined4 *)((int)param_5 + 2);
      } while (uVar5 < ((uint)param_4[2] >> 1) - local_40);
    }
  }
  return;
}

