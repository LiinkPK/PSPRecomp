/* Entry 0x088E5BE4 | file offset 0x000E2BBC | FUN_088e5be4 | bytes 2708 */

void FUN_088e5be4(int param_1,ushort *param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
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
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_34;
  undefined4 local_30;
  
  if (*param_2 < 0x12e) {
    return;
  }
  if (0x164 < *param_2) {
    return;
  }
  iVar8 = 0;
  if (*param_2 != 0x12e) {
    iVar8 = *(int *)(param_1 + *(int *)(param_2 + 4) * 4);
  }
  switch(*param_2) {
  case 0x12e:
    iVar7 = FUN_08831320(0xb60);
    iVar8 = 0;
    if (iVar7 != 0) {
      uVar10 = FUN_088470b8(*(undefined4 *)(param_2 + 4));
      FUN_08805c6c(iVar7,uVar10);
      iVar8 = iVar7;
    }
    *(int *)(param_1 + *(int *)(param_2 + 6) * 4) = iVar8;
    break;
  case 0x12f:
    (**(code **)(*(int *)(iVar8 + 0x544) + 0xfc))
              (iVar8 + *(short *)(*(int *)(iVar8 + 0x544) + 0xf8));
    *(undefined4 *)(param_1 + *(int *)(param_2 + 4) * 4) = 0;
    break;
  case 0x130:
    FUN_088357b8(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),iVar8,1);
    break;
  case 0x131:
    FUN_088358d0(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),iVar8,1);
    break;
  case 0x132:
    FUN_08835c54(*(float *)(param_2 + 6) * 0.017453292,iVar8);
    break;
  case 0x133:
    FUN_08835bf8(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),iVar8);
    break;
  case 0x134:
    FUN_0882fa10(*(undefined4 *)(param_2 + 8),0,iVar8 + 0x130,*(undefined4 *)(param_2 + 6),0);
    break;
  case 0x135:
    FUN_0882fb90(*(undefined4 *)(param_2 + 8),0,iVar8 + 0x130,*(undefined4 *)(param_2 + 6));
    break;
  case 0x136:
    local_250 = *(undefined4 *)(param_2 + 6);
    local_24c = *(undefined4 *)(param_2 + 8);
    local_248 = *(undefined4 *)(param_2 + 10);
    local_234 = 0x3f800000;
    local_244 = 0x3f800000;
    local_240 = local_250;
    local_23c = local_24c;
    local_238 = local_248;
    fVar9 = (float)FUN_08838300(iVar8);
    FUN_0880606c(*(float *)(param_2 + 0xc) * fVar9,iVar8,&local_250);
    break;
  case 0x138:
    FUN_088060f8(iVar8);
    break;
  case 0x139:
    FUN_08806108(*(float *)(param_2 + 6) * 0.017453292,iVar8);
    break;
  case 0x13a:
    FUN_088060b0(iVar8);
    break;
  case 0x13b:
    FUN_0880611c(*(float *)(param_2 + 6) * 0.017453292,*(undefined4 *)(param_2 + 8),iVar8);
    break;
  case 0x13c:
    FUN_088061e0(iVar8,*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10));
    break;
  case 0x13d:
    FUN_08806294(iVar8);
    break;
  case 0x13e:
    FUN_088063ac(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0xc),iVar8);
    break;
  case 0x13f:
    (**(code **)(*(int *)(iVar8 + 0x544) + 0x11c))
              (iVar8 + *(short *)(*(int *)(iVar8 + 0x544) + 0x118),*(undefined4 *)(param_2 + 6),0);
    break;
  case 0x140:
    goto switchD_088e5c84_caseD_140;
  case 0x141:
    goto switchD_088e5c84_caseD_141;
  case 0x142:
    FUN_088a9de8(*(undefined4 *)(*(int *)(iVar8 + 0x390) + 0x5c),*(undefined4 *)(param_2 + 6),
                 iVar8 + 0x4c8,0,0);
    break;
  case 0x143:
    FUN_0882fa10(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 10),iVar8 + 0x130,
                 *(undefined4 *)(param_2 + 6),0);
    break;
  case 0x144:
    FUN_0882fb90(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 10),iVar8 + 0x130,
                 *(undefined4 *)(param_2 + 6));
    break;
  case 0x147:
    FUN_08806650(*(undefined4 *)(param_2 + 8),iVar8,
                 *(undefined4 *)(param_1 + *(int *)(param_2 + 6) * 4));
    break;
  case 0x148:
    FUN_08806714(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0xc),iVar8);
    break;
  case 0x149:
    FUN_08806964(*(undefined4 *)(param_2 + 6),iVar8);
    break;
  case 0x14a:
    if (*(int *)(iVar8 + 0x398) != 0) {
      FUN_0880cd90(*(undefined4 *)(iVar8 + 0x398));
    }
    break;
  case 0x14b:
    FUN_088a26f8((float)*(int *)(param_2 + 6),iVar8 + 0x510,0);
    break;
  case 0x14c:
    iVar7 = *(int *)(param_2 + 8);
    fVar9 = (float)*(int *)(param_2 + 6) / 100.0;
    if (0.0 < (float)iVar7) {
      *(float *)(iVar8 + 0x514) = fVar9;
      *(float *)(iVar8 + 0x518) = (fVar9 - *(float *)(iVar8 + 0x510)) / (float)iVar7;
    }
    else {
      *(float *)(iVar8 + 0x510) = fVar9;
      *(float *)(iVar8 + 0x514) = fVar9;
      *(undefined4 *)(iVar8 + 0x518) = 0;
    }
    break;
  case 0x14d:
    FUN_088067e0(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),iVar8);
    break;
  case 0x14e:
    FUN_088068a0(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),iVar8);
    break;
  case 0x14f:
    iVar8 = FUN_088aa350(*(undefined4 *)(*(int *)(iVar8 + 0x390) + 0x5c),
                         *(undefined4 *)(param_2 + 6),iVar8 + 0x4c8);
    if (iVar8 != 0) {
      FUN_088a6aa4(iVar8);
    }
    break;
  case 0x150:
    if (*(float *)(iVar8 + 0x3b0) < *(float *)(param_2 + 8)) {
      FUN_08834d60(*(undefined4 *)(param_2 + 6),iVar8);
    }
    else {
      FUN_08834d30(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),iVar8);
    }
    break;
  case 0x151:
    FUN_088372b0(iVar8,*(undefined4 *)(param_2 + 6));
    break;
  case 0x152:
    FUN_088372d0(iVar8,*(undefined4 *)(param_2 + 6));
    break;
  case 0x153:
    FUN_08806320(iVar8);
    break;
  case 0x154:
    FUN_088062cc(iVar8,*(undefined4 *)(param_2 + 6));
    break;
  case 0x155:
    FUN_08806358(iVar8,*(undefined4 *)(param_2 + 6));
    break;
  case 0x156:
    *(undefined4 *)(iVar8 + 0x38c) = *(undefined4 *)(iVar8 + 0x38c);
    *(uint *)(iVar8 + 0x388) = *(uint *)(iVar8 + 0x388) | 0x40000;
    break;
  case 0x157:
    *(undefined4 *)(iVar8 + 0x38c) = *(undefined4 *)(iVar8 + 0x38c);
    *(uint *)(iVar8 + 0x388) = *(uint *)(iVar8 + 0x388) & 0xfffbffff;
    break;
  case 0x158:
    *(undefined4 *)(*(int *)(iVar8 + 0x4a8) + 4) = *(undefined4 *)(param_2 + 6);
    break;
  case 0x159:
    *(uint *)(iVar8 + 0x580) = *(uint *)(iVar8 + 0x580) | 0x20;
    break;
  case 0x15a:
    iVar7 = FUN_088678dc();
    goto joined_r0x088e5ff8;
  case 0x15b:
    iVar7 = FUN_08867900();
joined_r0x088e5ff8:
    if (iVar7 != 0) {
switchD_088e5c84_caseD_140:
      FUN_08806560(*(undefined4 *)(param_2 + 8),iVar8,*(undefined4 *)(param_2 + 6),
                   *(undefined4 *)(param_2 + 10));
    }
    break;
  case 0x15c:
    iVar7 = FUN_088678dc();
    goto joined_r0x088e604c;
  case 0x15d:
    iVar7 = FUN_08867900();
joined_r0x088e604c:
    if (iVar7 != 0) {
switchD_088e5c84_caseD_141:
      iVar7 = 1;
      do {
        FUN_088065ec(iVar8,*(undefined4 *)(param_2 + iVar7 * 2 + 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < 6);
    }
    break;
  case 0x15e:
    if (*(int *)(iVar8 + 0x398) != 0) {
      FUN_089a3ebc(&local_220);
      local_1d0 = local_220;
      local_1cc = local_21c;
      local_1c8 = local_218;
      local_1c4 = local_214;
      local_1c0 = local_210;
      local_1bc = local_20c;
      local_1b8 = local_208;
      local_1b4 = local_204;
      local_1b0 = local_200;
      local_1ac = local_1fc;
      local_1a8 = local_1f8;
      local_1a4 = local_1f4;
      local_1a0 = local_1f0;
      local_19c = local_1ec;
      local_198 = local_1e8;
      local_194 = local_1e4;
      FUN_089a4180(*(float *)(param_2 + 6) * 0.017453292,&local_220,&local_220);
      FUN_089a4124(*(float *)(param_2 + 8) * 0.017453292,&local_220,&local_220);
      FUN_089a3f40(&local_1e0,&local_220,iVar8 + 0x90);
      auVar4._4_4_ = local_1dc;
      auVar4._0_4_ = local_1e0;
      auVar4._8_4_ = local_1d8;
      auVar3._4_4_ = local_1dc;
      auVar3._0_4_ = local_1e0;
      auVar3._8_4_ = local_1d8;
      auVar2._4_4_ = local_1dc;
      auVar2._0_4_ = local_1e0;
      auVar2._8_4_ = local_1d8;
      uVar10 = vdot_t(auVar2,auVar3);
      uVar11 = vzero_s();
      uVar12 = vcmp_s(8,uVar10,local_1e0);
      local_34 = vsqrt_s(uVar10);
      vrcp_s(local_34);
      uVar10 = vcmovt_s(uVar11,(byte)uVar12 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar4,uVar10);
      local_230 = auVar1._0_4_;
      local_22c = auVar1._4_4_;
      local_228 = auVar1._8_4_;
      local_1e0 = local_230;
      local_1dc = local_22c;
      local_1d8 = local_228;
      local_190 = local_230;
      local_18c = local_22c;
      local_188 = local_228;
      FUN_0880cdf4(*(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0xe),*(undefined4 *)(iVar8 + 0x398),&local_230);
    }
    break;
  case 0x15f:
    if (*(int *)(iVar8 + 0x398) != 0) {
      FUN_089a3ebc(&local_170);
      local_120 = local_170;
      local_11c = local_16c;
      local_118 = local_168;
      local_114 = local_164;
      local_110 = local_160;
      local_10c = local_15c;
      local_108 = local_158;
      local_104 = local_154;
      local_100 = local_150;
      local_fc = local_14c;
      local_f8 = local_148;
      local_f4 = local_144;
      local_f0 = local_140;
      local_ec = local_13c;
      local_e8 = local_138;
      local_e4 = local_134;
      FUN_089a4180(*(float *)(param_2 + 6) * 0.017453292,&local_170,&local_170);
      FUN_089a4124(*(float *)(param_2 + 8) * 0.017453292,&local_170,&local_170);
      FUN_089a3f40(&local_130,&local_170,&DAT_09af8ab0);
      auVar6._4_4_ = local_12c;
      auVar6._0_4_ = local_130;
      auVar6._8_4_ = local_128;
      auVar5._4_4_ = local_12c;
      auVar5._0_4_ = local_130;
      auVar5._8_4_ = local_128;
      auVar1._4_4_ = local_12c;
      auVar1._0_4_ = local_130;
      auVar1._8_4_ = local_128;
      uVar10 = vdot_t(auVar1,auVar5);
      uVar11 = vzero_s();
      uVar12 = vcmp_s(8,uVar10,local_130);
      local_30 = vsqrt_s(uVar10);
      vrcp_s(local_30);
      uVar10 = vcmovt_s(uVar11,(byte)uVar12 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar6,uVar10);
      local_184 = auVar1._0_4_;
      local_180 = auVar1._4_4_;
      local_17c = auVar1._8_4_;
      local_130 = local_184;
      local_12c = local_180;
      local_128 = local_17c;
      local_e0 = local_184;
      local_dc = local_180;
      local_d8 = local_17c;
      FUN_0880cdf4(*(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0xe),*(undefined4 *)(iVar8 + 0x398),&local_184);
    }
    break;
  case 0x160:
    if (*(int *)(iVar8 + 0x398) != 0) {
      FUN_0880ce48(*(undefined4 *)(param_2 + 8),*(undefined4 *)(iVar8 + 0x398),
                   *(undefined4 *)(param_2 + 6));
    }
    break;
  case 0x161:
    FUN_0880687c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0xe),iVar8);
    break;
  case 0x162:
    FUN_0880693c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0xe),iVar8);
    break;
  case 0x163:
    *(undefined4 *)(iVar8 + 0x724) = *(undefined4 *)(param_2 + 6);
  }
  return;
}

