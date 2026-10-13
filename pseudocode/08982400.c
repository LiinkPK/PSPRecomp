/* Entry 0x08982400 | file offset 0x0017F3D8 | FUN_08982400 | bytes 2116 */

void FUN_08982400(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 uint *param_6,char param_7)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  float fVar8;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  
  local_90 = (int)*(float *)(param_2 + 0xc);
  local_48 = param_4;
  if (param_7 == '\0') {
    if (*(int *)(param_4 + 4) == 0) {
      iVar2 = 0;
      if (0 < param_3) {
        do {
          uVar3 = *param_6;
          iVar2 = iVar2 + 1;
          param_6 = param_6 + 1;
          uVar5 = (undefined1)
                  (int)((float)(uVar3 & 0xff) * 0.299 + (float)(uVar3 >> 8 & 0xff) * 0.587 +
                       (float)(uVar3 >> 0x10 & 0xff) * 0.114);
          *param_5 = CONCAT31(CONCAT21(CONCAT11((char)local_90,uVar5),uVar5),uVar5);
          param_5 = param_5 + 1;
        } while (iVar2 < param_3);
      }
    }
    else {
      iVar2 = 0;
      if (0 < param_3) {
        local_64 = (float)local_90;
        local_68 = (float)local_90;
        local_4c = local_64 + 4.2949673e+09;
        local_70 = (float)local_90;
        local_50 = local_68 + 4.2949673e+09;
        local_54 = local_70 + 4.2949673e+09;
        local_88 = local_90;
        local_84 = local_90;
        local_6c = local_90;
        do {
          uVar1 = (undefined2)*param_6;
          if (*(int *)(local_48 + 4) == 1) {
            FUN_089a4a24(0,&local_120,uVar1);
            local_120 = local_120 * 0.299 + local_11c * 0.587 + local_118 * 0.114;
            fVar8 = local_64;
            if (local_84 < 0) {
              fVar8 = local_4c;
            }
            if (fVar8 / 255.0 == 0.0) {
              local_114 = 0;
            }
            else {
              local_114 = 0x3f800000;
            }
            local_11c = local_120;
            local_118 = local_120;
            FUN_089a3918(auStack_f0,&DAT_089da410,&local_120);
            FUN_089a3a84(0,0x3f800000,auStack_f0,auStack_f0);
            uVar1 = FUN_089a4928(0,auStack_f0);
            *(undefined2 *)param_5 = uVar1;
          }
          else if (*(int *)(local_48 + 4) == 2) {
            FUN_089a49d4(0,&local_120,uVar1);
            local_120 = local_120 * 0.299 + local_11c * 0.587 + local_118 * 0.114;
            fVar8 = local_68;
            if (local_88 < 0) {
              fVar8 = local_50;
            }
            if (fVar8 / 255.0 == 0.0) {
              local_114 = 0;
            }
            else {
              local_114 = 0x3f800000;
            }
            local_11c = local_120;
            local_118 = local_120;
            FUN_089a3918(auStack_e0,&DAT_089da410,&local_120);
            FUN_089a3a84(0,0x3f800000,auStack_e0,auStack_e0);
            uVar1 = FUN_089a4928(0,auStack_e0);
            *(undefined2 *)param_5 = uVar1;
          }
          else {
            FUN_089a498c(&local_120,uVar1);
            local_120 = local_120 * 0.299 + local_11c * 0.587 + local_118 * 0.114;
            fVar8 = local_70;
            if (local_6c < 0) {
              fVar8 = local_54;
            }
            if (fVar8 / 255.0 == 0.0) {
              local_114 = 0;
            }
            else {
              local_114 = 0x3f800000;
            }
            local_11c = local_120;
            local_118 = local_120;
            FUN_089a3918(auStack_d0,&DAT_089da410,&local_120);
            FUN_089a3a84(0,0x3f800000,auStack_d0,auStack_d0);
            uVar1 = FUN_089a48f0(auStack_d0);
            *(undefined2 *)param_5 = uVar1;
          }
          iVar2 = iVar2 + 1;
          param_6 = (uint *)((int)param_6 + 2);
          param_5 = (undefined4 *)((int)param_5 + 2);
        } while (iVar2 < param_3);
      }
    }
  }
  else if (*(int *)(param_4 + 4) == 0) {
    iVar2 = 0;
    iVar4 = (*(uint *)(param_4 + 8) >> 2) - 1;
    if (0 < param_3) {
      param_6 = param_6 + iVar4;
      param_5 = param_5 + iVar4;
      do {
        uVar3 = *param_6;
        iVar2 = iVar2 + 1;
        param_6 = param_6 + -1;
        uVar5 = (undefined1)
                (int)((float)(uVar3 & 0xff) * 0.299 + (float)(uVar3 >> 8 & 0xff) * 0.587 +
                     (float)(uVar3 >> 0x10 & 0xff) * 0.114);
        *param_5 = CONCAT31(CONCAT21(CONCAT11((char)local_90,uVar5),uVar5),uVar5);
        param_5 = param_5 + -1;
      } while (iVar2 < param_3);
    }
  }
  else {
    iVar2 = 0;
    if (0 < param_3) {
      local_74 = (float)local_90;
      local_78 = (float)local_90;
      local_58 = local_74 + 4.2949673e+09;
      iVar4 = ((*(uint *)(param_4 + 8) >> 1) - 1) * 2;
      local_80 = (float)local_90;
      local_5c = local_78 + 4.2949673e+09;
      local_60 = local_80 + 4.2949673e+09;
      puVar7 = (undefined2 *)((int)param_6 + iVar4);
      puVar6 = (undefined2 *)((int)param_5 + iVar4);
      local_8c = local_90;
      local_7c = local_90;
      do {
        uVar1 = *puVar7;
        if (*(int *)(local_48 + 4) == 1) {
          FUN_089a4a24(0,&local_100,uVar1);
          local_100 = local_100 * 0.299 + local_fc * 0.587 + local_f8 * 0.114;
          fVar8 = local_74;
          if (local_8c < 0) {
            fVar8 = local_58;
          }
          if (fVar8 / 255.0 == 0.0) {
            local_f4 = 0;
          }
          else {
            local_f4 = 0x3f800000;
          }
          local_fc = local_100;
          local_f8 = local_100;
          FUN_089a3918(auStack_c0,&DAT_089da410,&local_100);
          FUN_089a3a84(0,0x3f800000,auStack_c0,auStack_c0);
          uVar1 = FUN_089a4928(0,auStack_c0);
          *puVar6 = uVar1;
        }
        else if (*(int *)(local_48 + 4) == 2) {
          FUN_089a49d4(0,&local_100,uVar1);
          local_100 = local_100 * 0.299 + local_fc * 0.587 + local_f8 * 0.114;
          fVar8 = local_78;
          if (local_90 < 0) {
            fVar8 = local_5c;
          }
          if (fVar8 / 255.0 == 0.0) {
            local_f4 = 0;
          }
          else {
            local_f4 = 0x3f800000;
          }
          local_fc = local_100;
          local_f8 = local_100;
          FUN_089a3918(auStack_b0,&DAT_089da410,&local_100);
          FUN_089a3a84(0,0x3f800000,auStack_b0,auStack_b0);
          uVar1 = FUN_089a4928(0,auStack_b0);
          *puVar6 = uVar1;
        }
        else {
          FUN_089a498c(&local_100,uVar1);
          local_100 = local_100 * 0.299 + local_fc * 0.587 + local_f8 * 0.114;
          fVar8 = local_80;
          if (local_7c < 0) {
            fVar8 = local_60;
          }
          if (fVar8 / 255.0 == 0.0) {
            local_f4 = 0;
          }
          else {
            local_f4 = 0x3f800000;
          }
          local_fc = local_100;
          local_f8 = local_100;
          FUN_089a3918(auStack_a0,&DAT_089da410,&local_100);
          FUN_089a3a84(0,0x3f800000,auStack_a0,auStack_a0);
          uVar1 = FUN_089a48f0(auStack_a0);
          *puVar6 = uVar1;
        }
        iVar2 = iVar2 + 1;
        puVar7 = puVar7 + -1;
        puVar6 = puVar6 + -1;
      } while (iVar2 < param_3);
    }
  }
  return;
}

