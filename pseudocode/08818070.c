/* Entry 0x08818070 | file offset 0x00015048 | FUN_08818070 | bytes 1748 */

undefined4 FUN_08818070(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 local_230 [4];
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 auStack_200 [16];
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1c0 [16];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 auStack_180 [16];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    FUN_089a34ac(0x7f7fffff,0x7f7fffff,param_1);
    local_48 = param_1 + 0xc;
    FUN_089a34ac(0xff7fffff,0xff7fffff,0xff7fffff);
    local_4c = 0;
    if ('\0' < *(char *)(param_1 + 0x19)) {
      local_50 = 0;
      puVar10 = auStack_180;
      do {
        iVar7 = *(int *)(param_1 + 0x20) + local_50;
        iVar4 = iVar7 + 8;
        FUN_089a34ac(0x7f7fffff,0x7f7fffff,iVar4);
        iVar6 = iVar7 + 0x14;
        FUN_089a34ac(0xff7fffff,0xff7fffff,0xff7fffff,iVar6);
        iVar8 = 0;
        local_58 = iVar6;
        local_54 = iVar4;
        if (0 < *(short *)(iVar7 + 2)) {
          do {
            local_44 = puVar10;
            puVar9 = (undefined4 *)
                     (*(int *)(param_1 + 0x24) + (iVar8 + *(short *)(iVar7 + 4)) * 0x24);
            puVar5 = (undefined1 *)*puVar9;
            uVar3 = *(undefined4 *)(puVar5 + 0x18);
            uVar11 = *(undefined4 *)(puVar5 + 0x1c);
            uVar2 = FUN_08837d18(*(undefined4 *)(param_1 + 0x1c),*puVar5);
            puVar10 = local_44;
            *(undefined1 *)(puVar9 + 8) = uVar2;
            if (*(char *)(puVar9 + 8) == '\0') {
              iVar4 = (int)*(short *)(iVar7 + 2);
            }
            else {
              FUN_08812664(puVar9 + 1,*(undefined4 *)(param_1 + 0x1c),puVar5);
              bVar1 = puVar5[5];
              if (bVar1 < 2) {
                if (bVar1 == 0) {
                  FUN_089a383c(uVar3,uVar11,uVar3,0x3f800000,puVar10);
                  local_190 = puVar9[5];
                  local_18c = puVar9[6];
                  local_188 = puVar9[7];
                  local_a4 = 0x3f800000;
                  local_164 = 0x3f800000;
                  local_184 = 0x3f800000;
                  local_170 = local_190;
                  local_16c = local_18c;
                  local_168 = local_188;
                  local_b0 = local_190;
                  local_ac = local_18c;
                  local_a8 = local_188;
                  FUN_089a38fc(local_230,&local_190,puVar10);
                  local_190 = puVar9[5];
                  local_18c = puVar9[6];
                  local_188 = puVar9[7];
                  local_84 = 0x3f800000;
                  local_154 = 0x3f800000;
                  local_184 = 0x3f800000;
                  local_160 = local_190;
                  local_15c = local_18c;
                  local_158 = local_188;
                  local_90 = local_190;
                  local_8c = local_18c;
                  local_88 = local_188;
                  FUN_089a38c4(&local_220,&local_190,puVar10);
                }
                else {
                  FUN_089a383c(uVar3,0,uVar3,0x3f800000,auStack_1c0);
                  local_1d0 = puVar9[5];
                  local_1cc = puVar9[6];
                  local_1c8 = puVar9[7];
                  local_e4 = 0x3f800000;
                  local_1a4 = 0x3f800000;
                  local_1c4 = 0x3f800000;
                  local_1b0 = local_1d0;
                  local_1ac = local_1cc;
                  local_1a8 = local_1c8;
                  local_f0 = local_1d0;
                  local_ec = local_1cc;
                  local_e8 = local_1c8;
                  FUN_089a38fc(local_230,&local_1d0,auStack_1c0);
                  FUN_089a383c(uVar3,uVar11,uVar3,0x3f800000,auStack_1c0);
                  local_1d0 = puVar9[5];
                  local_1cc = puVar9[6];
                  local_1c8 = puVar9[7];
                  local_c4 = 0x3f800000;
                  local_194 = 0x3f800000;
                  local_1c4 = 0x3f800000;
                  local_1a0 = local_1d0;
                  local_19c = local_1cc;
                  local_198 = local_1c8;
                  local_d0 = local_1d0;
                  local_cc = local_1cc;
                  local_c8 = local_1c8;
                  FUN_089a38c4(&local_220,&local_1d0,auStack_1c0);
                }
              }
              else {
                if (bVar1 != 3) {
                  iVar4 = (int)*(short *)(iVar7 + 2);
                  goto LAB_088186a8;
                }
                local_44 = puVar10;
                FUN_089a383c(uVar3,uVar3,uVar3,0x3f800000,auStack_200);
                local_210 = puVar9[5];
                local_20c = puVar9[6];
                local_208 = puVar9[7];
                local_124 = 0x3f800000;
                local_1e4 = 0x3f800000;
                local_204 = 0x3f800000;
                local_1f0 = local_210;
                local_1ec = local_20c;
                local_1e8 = local_208;
                local_130 = local_210;
                local_12c = local_20c;
                local_128 = local_208;
                FUN_089a38fc(local_230,&local_210,auStack_200);
                local_210 = puVar9[5];
                local_20c = puVar9[6];
                local_208 = puVar9[7];
                local_104 = 0x3f800000;
                local_1d4 = 0x3f800000;
                local_204 = 0x3f800000;
                local_1e0 = local_210;
                local_1dc = local_20c;
                local_1d8 = local_208;
                local_110 = local_210;
                local_10c = local_20c;
                local_108 = local_208;
                FUN_089a38c4(&local_220,&local_210,auStack_200);
                puVar10 = local_44;
              }
              local_14c = local_22c;
              local_148 = local_228;
              local_23c = local_22c;
              local_238 = local_228;
              FUN_089a36e4(local_54,local_54,&local_240);
              local_144 = local_220;
              local_140 = local_21c;
              local_13c = local_218;
              local_240 = local_220;
              local_23c = local_21c;
              local_238 = local_218;
              FUN_089a36b0(local_58,local_58,&local_240);
              iVar4 = (int)*(short *)(iVar7 + 2);
            }
LAB_088186a8:
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar4);
        }
        iVar4 = local_58;
        FUN_089a36e4(param_1,param_1,local_54);
        FUN_089a36b0(local_48,local_48,iVar4);
        local_4c = local_4c + 1;
        local_50 = local_50 + 0x20;
      } while (local_4c < *(char *)(param_1 + 0x19));
    }
    uVar3 = 0;
  }
  return uVar3;
}

