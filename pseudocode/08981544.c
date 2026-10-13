/* Entry 0x08981544 | file offset 0x0017E51C | FUN_08981544 | bytes 1036 */

void FUN_08981544(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6
                 ,char param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 auStack_b0 [12];
  float local_a4;
  undefined1 auStack_a0 [12];
  float local_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  uint local_50;
  float local_4c;
  float local_48;
  int local_44;
  
  uVar5 = (int)*(float *)(param_2 + 0xc) << 0x18;
  local_44 = param_4;
  if (param_7 == '\0') {
    if (*(int *)(param_4 + 4) == 0) {
      iVar2 = 0;
      if (0 < param_3) {
        do {
          iVar2 = iVar2 + 1;
          *param_5 = *param_6 & 0xffffff | uVar5;
          param_6 = param_6 + 1;
          param_5 = param_5 + 1;
        } while (iVar2 < param_3);
      }
    }
    else {
      iVar2 = 0;
      if (0 < param_3) {
        local_48 = (float)(int)uVar5 + 4.2949673e+09;
        do {
          if (*(int *)(local_44 + 4) == 2) {
            FUN_089a49d4(0,auStack_b0,(short)*param_6);
            local_a4 = (float)(int)uVar5;
            if ((int)uVar5 < 0) {
              local_a4 = local_48;
            }
            local_a4 = local_a4 / 255.0;
            FUN_089a3918(auStack_90,&DAT_089da410,auStack_b0);
            FUN_089a3a84(0,0x3f800000,auStack_90,auStack_90);
            uVar1 = FUN_089a4928(0,auStack_90);
            *(undefined2 *)param_5 = uVar1;
          }
          else {
            FUN_089a498c(auStack_b0,(short)*param_6);
            local_a4 = (float)(int)uVar5;
            if ((int)uVar5 < 0) {
              local_a4 = (float)(int)uVar5 + 4.2949673e+09;
            }
            local_a4 = local_a4 / 255.0;
            FUN_089a3918(auStack_80,&DAT_089da410,auStack_b0);
            FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
            uVar1 = FUN_089a48f0(auStack_80);
            *(undefined2 *)param_5 = uVar1;
          }
          iVar2 = iVar2 + 1;
          param_6 = (uint *)((int)param_6 + 2);
          param_5 = (uint *)((int)param_5 + 2);
        } while (iVar2 < param_3);
      }
    }
  }
  else if (*(int *)(param_4 + 4) == 0) {
    iVar2 = 0;
    iVar3 = (*(uint *)(param_4 + 8) >> 2) - 1;
    if (0 < param_3) {
      param_6 = param_6 + iVar3;
      param_5 = param_5 + iVar3;
      do {
        iVar2 = iVar2 + 1;
        *param_5 = *param_6 & 0xffffff | uVar5;
        param_6 = param_6 + -1;
        param_5 = param_5 + -1;
      } while (iVar2 < param_3);
    }
  }
  else {
    iVar2 = 0;
    if (0 < param_3) {
      local_4c = (float)(int)uVar5 + 4.2949673e+09;
      iVar3 = ((*(uint *)(param_4 + 8) >> 1) - 1) * 2;
      puVar6 = (undefined2 *)((int)param_6 + iVar3);
      puVar4 = (undefined2 *)((int)param_5 + iVar3);
      local_50 = uVar5;
      do {
        if (*(int *)(local_44 + 4) == 2) {
          FUN_089a49d4(0,auStack_a0,*puVar6);
          local_94 = (float)(int)uVar5;
          if ((int)uVar5 < 0) {
            local_94 = local_4c;
          }
          local_94 = local_94 / 255.0;
          FUN_089a3918(auStack_70,&DAT_089da410,auStack_a0);
          FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
          uVar1 = FUN_089a4928(0,auStack_70);
          *puVar4 = uVar1;
        }
        else {
          FUN_089a498c(auStack_a0,*puVar6);
          local_94 = (float)(int)uVar5;
          if ((int)local_50 < 0) {
            local_94 = (float)(int)uVar5 + 4.2949673e+09;
          }
          local_94 = local_94 / 255.0;
          FUN_089a3918(auStack_60,&DAT_089da410,auStack_a0);
          FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
          uVar1 = FUN_089a48f0(auStack_60);
          *puVar4 = uVar1;
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + -1;
        puVar4 = puVar4 + -1;
      } while (iVar2 < param_3);
    }
  }
  return;
}

