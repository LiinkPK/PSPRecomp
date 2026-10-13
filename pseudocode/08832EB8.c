/* Entry 0x08832EB8 | file offset 0x0002FE90 | FUN_08832eb8 | bytes 856 */

void FUN_08832eb8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [64];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  
  uVar3 = DAT_09af84cc;
  uVar2 = DAT_09af84c8;
  uVar1 = DAT_09af84c4;
  if ((*(int *)(param_2 + 0x178) == 0) || ((*(uint *)(param_2 + 0x188) & 1) != 0)) {
    *param_1 = DAT_09af84c0;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  else {
    local_f0 = *(undefined4 *)(param_2 + 0x140);
    local_ec = *(undefined4 *)(param_2 + 0x144);
    local_e8 = *(undefined4 *)(param_2 + 0x148);
    local_e4 = *(undefined4 *)(param_2 + 0x14c);
    local_90 = local_f0;
    local_8c = local_ec;
    local_88 = local_e8;
    local_84 = local_e4;
    FUN_089a3868(&local_a0,&local_f0);
    if (local_94 != 0.0) {
      FUN_08836560(param_2);
    }
    if ((*(byte *)(param_2 + 0x197) & 8) == 0) {
      local_64 = *(float *)(param_2 + 0x13c);
      local_70 = *(undefined4 *)(param_2 + 0x130);
      local_6c = *(undefined4 *)(param_2 + 0x134);
      local_68 = *(undefined4 *)(param_2 + 0x138);
      fVar4 = *(float *)(param_2 + 0x9c) - local_64;
      if ((fVar4 <= -3.1415927) || (3.1415927 <= fVar4)) {
        if (0.0 < fVar4) {
          fVar4 = (float)FUN_089941c0(fVar4 + 3.1415927,0x40c90fdb);
          fVar4 = fVar4 - 3.1415927;
        }
        else {
          fVar4 = (float)FUN_089941c0(3.1415927 - fVar4,0x40c90fdb);
          fVar4 = 3.1415927 - fVar4;
        }
      }
      FUN_089a4124(fVar4,auStack_e0,&DAT_09af8ac0);
      local_94 = 0.0;
      FUN_089a3f40(&local_a0,auStack_e0,&local_a0);
    }
    else {
      local_80 = *(undefined4 *)(param_2 + 0x130);
      local_7c = *(undefined4 *)(param_2 + 0x134);
      local_74 = *(float *)(param_2 + 0x13c);
      local_78 = *(undefined4 *)(param_2 + 0x138);
      fVar4 = -local_74;
      if ((fVar4 <= -3.1415927) || (3.1415927 <= fVar4)) {
        if (0.0 < fVar4) {
          fVar4 = (float)FUN_089941c0(fVar4 + 3.1415927,0x40c90fdb);
          fVar4 = fVar4 - 3.1415927;
        }
        else {
          fVar4 = (float)FUN_089941c0(3.1415927 - fVar4,0x40c90fdb);
          fVar4 = 3.1415927 - fVar4;
        }
      }
      FUN_089a4124(fVar4,auStack_e0,&DAT_09af8ac0);
      local_94 = 0.0;
      FUN_089a3f40(&local_a0,param_2,&local_a0);
      FUN_089a3f40(&local_a0,auStack_e0,&local_a0);
    }
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
  }
  return;
}

