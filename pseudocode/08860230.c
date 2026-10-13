/* Entry 0x08860230 | file offset 0x0005D208 | FUN_08860230 | bytes 2904 */

undefined4
FUN_08860230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  float local_300;
  float local_2fc;
  float local_2f8;
  undefined1 auStack_2f0 [64];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  float local_270;
  float local_26c;
  float local_268;
  undefined4 local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined1 auStack_250 [64];
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  undefined1 auStack_200 [16];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_3b0 = 0x358637bd;
  local_3ac = 0x358637bd;
  local_3a8 = 0x358637bd;
  local_3a4 = 0x3f800000;
  local_60 = param_1;
  local_5c = param_4;
  local_58 = param_3;
  local_54 = param_2;
  local_48 = param_8;
  local_44 = param_7;
  FUN_089a38e0(auStack_320,param_2,param_1);
  FUN_089a38e0(auStack_310,param_3,param_1);
  FUN_089a3b30(&local_300,auStack_320,auStack_310);
  if (((local_300 == 0.0) && (local_2fc == 0.0)) && (local_2f8 == 0.0)) {
    uVar7 = 0;
  }
  else {
    local_50 = param_6;
    local_4c = param_5;
    FUN_089a3868(auStack_2b0,local_5c);
    FUN_089a3868(auStack_2a0,local_4c);
    FUN_089a3868(auStack_290,local_50);
    FUN_089a3890(auStack_280);
    FUN_089a4030(auStack_2f0,auStack_2b0);
    fVar6 = (float)FUN_089a3b10(&local_300,local_60);
    FUN_089a3f40(&local_160,auStack_2f0,&local_300);
    local_1d0 = local_160;
    local_1cc = local_15c;
    local_1c8 = local_158;
    local_1c4 = local_154;
    local_3e0 = local_160;
    local_3dc = (float)local_15c;
    local_3d8 = (float)local_158;
    local_3d4 = (float)local_154;
    local_3c4 = 1.0;
    local_3d0 = fVar6;
    local_3cc = fVar6;
    local_3c8 = fVar6;
    FUN_089a38e0(&local_140,&local_3e0,&local_3d0);
    local_1e0 = local_140;
    local_1dc = local_13c;
    local_1d8 = local_138;
    local_1d4 = local_134;
    local_270 = local_140;
    local_26c = local_13c;
    local_268 = local_138;
    local_264 = local_134;
    fVar6 = (float)FUN_089a4500(local_140);
    local_120 = fVar6;
    uVar7 = FUN_089a4500(local_26c);
    local_11c = uVar7;
    uVar8 = FUN_089a4500(local_268);
    local_118 = uVar8;
    local_3b4 = FUN_089a4500(local_264);
    local_3c0 = fVar6;
    local_3bc = (float)uVar7;
    local_3b8 = (float)uVar8;
    local_1a0 = fVar6;
    local_19c = uVar7;
    local_198 = uVar8;
    local_194 = local_3b4;
    local_114 = local_3b4;
    FUN_089a38e0(&local_100,&local_3c0,&local_3b0);
    local_1b0 = local_100;
    local_1ac = local_fc;
    local_1a8 = local_f8;
    local_1a4 = local_f4;
    local_3e0 = local_100;
    local_3dc = local_fc;
    local_3d8 = local_f8;
    local_3d4 = local_f4;
    local_3d0 = local_270;
    if (local_100 < 0.0) {
      local_3d0 = DAT_09af84c0;
    }
    local_3cc = local_26c;
    if (local_fc < 0.0) {
      local_3cc = DAT_09af84c4;
    }
    local_3c8 = local_268;
    if (local_f8 < 0.0) {
      local_3c8 = DAT_09af84c8;
    }
    local_3c4 = (float)local_264;
    if (local_f4 < 0.0) {
      local_3c4 = (float)DAT_09af84cc;
    }
    local_1c0 = local_3d0;
    local_1bc = local_3cc;
    local_1b8 = local_3c8;
    local_1b4 = local_3c4;
    local_e0 = local_3d0;
    local_dc = local_3cc;
    local_d8 = local_3c8;
    local_d4 = local_3c4;
    FUN_089a3868(&local_270,&local_3d0);
    uVar7 = local_5c;
    if ((((local_270 < 0.0) && (local_26c < 0.0)) && (local_268 < 0.0)) ||
       (((0.0 < local_270 && (0.0 < local_26c)) && (0.0 < local_268)))) {
      uVar7 = 0;
    }
    else {
      FUN_089a38e0(auStack_320,local_4c,local_5c);
      FUN_089a38e0(auStack_310,local_50,uVar7);
      FUN_089a3b30(&local_260,auStack_320,auStack_310);
      if (((local_260 == 0.0) && (local_25c == 0.0)) && (local_258 == 0.0)) {
        uVar7 = 0;
      }
      else {
        FUN_089a3868(auStack_2b0,local_60);
        FUN_089a3868(auStack_2a0,local_54);
        FUN_089a3868(auStack_290,local_58);
        FUN_089a3890(auStack_280);
        FUN_089a4030(auStack_250,auStack_2b0);
        uVar7 = FUN_089a3af0(&local_260,local_5c);
        FUN_089a3f40(&local_210,auStack_250,&local_260);
        FUN_089a383c(uVar7,uVar7,uVar7,0x3f800000,auStack_350);
        FUN_089a38e0(&local_210,&local_210,auStack_350);
        fVar6 = (float)FUN_089a4500(local_210);
        local_c0 = fVar6;
        uVar7 = FUN_089a4500(local_20c);
        local_bc = uVar7;
        uVar8 = FUN_089a4500(local_208);
        local_b8 = uVar8;
        local_3d4 = (float)FUN_089a4500(local_204);
        local_3e0 = fVar6;
        local_3dc = (float)uVar7;
        local_3d8 = (float)uVar8;
        local_170 = fVar6;
        local_16c = uVar7;
        local_168 = uVar8;
        local_164 = local_3d4;
        local_b4 = local_3d4;
        FUN_089a38e0(&local_a0,&local_3e0,&local_3b0);
        uVar7 = local_48;
        local_180 = local_a0;
        local_17c = local_9c;
        local_178 = local_98;
        local_174 = local_94;
        local_3d0 = local_a0;
        local_3cc = local_9c;
        local_3c8 = local_98;
        local_3c4 = local_94;
        local_3c0 = local_210;
        if (local_a0 < 0.0) {
          local_3c0 = DAT_09af84c0;
        }
        local_3bc = local_20c;
        if (local_9c < 0.0) {
          local_3bc = DAT_09af84c4;
        }
        local_3b8 = local_208;
        if (local_98 < 0.0) {
          local_3b8 = DAT_09af84c8;
        }
        local_3b4 = local_204;
        if (local_94 < 0.0) {
          local_3b4 = DAT_09af84cc;
        }
        local_190 = local_3c0;
        local_18c = local_3bc;
        local_188 = local_3b8;
        local_184 = local_3b4;
        local_80 = local_3c0;
        local_7c = local_3bc;
        local_78 = local_3b8;
        local_74 = local_3b4;
        FUN_089a3868(&local_210,&local_3c0);
        if ((((local_210 < 0.0) && (local_20c < 0.0)) && (local_208 < 0.0)) ||
           (((0.0 < local_210 && (0.0 < local_20c)) && (0.0 < local_208)))) {
          uVar7 = 0;
        }
        else {
          FUN_089a3b30(auStack_200,&local_300,&local_260);
          FUN_089a39b4(&local_1f0,auStack_200);
          uVar8 = local_60;
          if (local_1ec <= local_1f0) {
            iVar4 = 0;
            if (local_1f0 < local_1e8) {
              iVar4 = 2;
            }
          }
          else {
            iVar4 = 1;
            if (local_1ec < local_1e8) {
              iVar4 = 2;
            }
          }
          FUN_089a3868(auStack_340,auStack_250 + iVar4 * 0x10);
          FUN_089a3868(auStack_330,auStack_2f0 + iVar4 * 0x10);
          iVar4 = FUN_0885fe94(uVar8,local_54,local_58,auStack_340,&local_210,&local_360,auStack_3a0
                               ,auStack_390);
          if (iVar4 == 0) {
            iVar4 = FUN_0885fe94(local_5c,local_4c,local_50,auStack_330,&local_270,&local_358,
                                 auStack_380,auStack_370);
            fVar3 = local_358;
            fVar6 = local_360;
            if (iVar4 == 0) {
              bVar1 = local_35c < local_360;
              if (bVar1) {
                local_360 = local_35c;
                local_35c = fVar6;
              }
              bVar2 = local_354 < local_358;
              if (bVar2) {
                local_358 = local_354;
                local_354 = fVar3;
              }
              if ((local_35c < local_358) || (local_354 < local_360)) {
                uVar7 = 0;
              }
              else {
                if (local_360 <= local_358) {
                  puVar5 = auStack_370;
                  if (!bVar2) {
                    puVar5 = auStack_380;
                  }
                  FUN_089a3868(local_44,puVar5);
                  if (local_35c < local_354) {
                    puVar5 = auStack_3a0;
                    if (!bVar1) {
                      puVar5 = auStack_390;
                    }
                    FUN_089a3868(uVar7,puVar5);
                  }
                  else {
                    puVar5 = auStack_380;
                    if (!bVar2) {
                      puVar5 = auStack_370;
                    }
                    FUN_089a3868(uVar7,puVar5);
                  }
                }
                else {
                  puVar5 = auStack_390;
                  if (!bVar1) {
                    puVar5 = auStack_3a0;
                  }
                  FUN_089a3868(local_44,puVar5);
                  if (local_354 < local_35c) {
                    puVar5 = auStack_380;
                    if (!bVar2) {
                      puVar5 = auStack_370;
                    }
                    FUN_089a3868(uVar7,puVar5);
                  }
                  else {
                    puVar5 = auStack_3a0;
                    if (!bVar1) {
                      puVar5 = auStack_390;
                    }
                    FUN_089a3868(uVar7,puVar5);
                  }
                }
                uVar7 = 1;
              }
            }
            else {
              uVar7 = 0;
            }
          }
          else {
            uVar7 = 0;
          }
        }
      }
    }
  }
  return uVar7;
}

