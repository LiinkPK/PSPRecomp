/* Entry 0x0884C5E8 | file offset 0x000495C0 | FUN_0884c5e8 | bytes 1192 */

void FUN_0884c5e8(int param_1)

{
  short sVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  
  sVar1 = *(short *)(param_1 + 0x130);
  iVar6 = *(int *)(DAT_089d4d80 + 0x2810);
  iVar7 = param_1 + 0x10;
  FUN_089a38fc(&local_120,iVar7,param_1);
  auVar4._4_4_ = uStack_11c;
  auVar4._0_4_ = local_120;
  auVar4._8_4_ = uStack_118;
  auVar3._4_4_ = uStack_11c;
  auVar3._0_4_ = local_120;
  auVar3._8_4_ = uStack_118;
  auVar2._4_4_ = uStack_11c;
  auVar2._0_4_ = local_120;
  auVar2._8_4_ = uStack_118;
  uVar11 = vdot_t(auVar2,auVar3);
  uVar13 = vzero_s();
  uVar14 = vcmp_s(8,uVar11,local_120);
  fVar12 = (float)vsqrt_s(uVar11);
  vrcp_s(fVar12);
  uVar11 = vcmovt_s(uVar13,(byte)uVar14 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar4,uVar11);
  local_120 = auVar2._0_4_;
  uStack_11c = auVar2._4_4_;
  uStack_118 = auVar2._8_4_;
  local_60 = fVar12;
  FUN_089a3b30(auStack_90,param_1 + 0x20,&local_120);
  FUN_089a3a44(*(undefined4 *)(iVar6 + sVar1 * 0x90 + -0x90),auStack_90,auStack_90);
  local_54 = param_1 + 0x38;
  local_58 = param_1 + 0x4c;
  if (((*(uint *)(param_1 + 0x130) & 0x10000) == 0) && ((*(uint *)(param_1 + 0x130) & 0x20000) == 0)
     ) {
    FUN_089a38fc(auStack_110,param_1,auStack_90);
    FUN_089a38c4(auStack_100,param_1,auStack_90);
    FUN_089a38fc(auStack_f0,iVar7,auStack_90);
    FUN_089a38c4(auStack_e0,iVar7,auStack_90);
    FUN_089a34c0(local_54,auStack_110);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    FUN_089a34c0(local_58,auStack_100);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x3f000000;
    FUN_089a34c0(param_1 + 0x60,auStack_f0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(float *)(param_1 + 0x58) = fVar12 / 0.2;
    FUN_089a34c0(param_1 + 0x74,auStack_e0);
    *(float *)(param_1 + 0x6c) = fVar12 / 0.2;
    *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
    *(undefined2 *)(param_1 + 300) = 4;
  }
  else {
    if ((*(uint *)(param_1 + 0x130) & 0x10000) == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 0.2;
    }
    if ((*(uint *)(param_1 + 0x130) & 0x20000) == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.2;
    }
    fVar10 = fVar9;
    if (fVar12 < fVar8 + fVar9) {
      if (((*(uint *)(param_1 + 0x130) & 0x10000) == 0) ||
         ((*(uint *)(param_1 + 0x130) & 0x20000) == 0)) {
        fVar10 = fVar12;
        if ((*(uint *)(param_1 + 0x130) & 0x10000) != 0) {
          fVar8 = fVar12;
          fVar10 = fVar9;
        }
      }
      else {
        fVar8 = fVar12 * 0.5;
        fVar10 = fVar12 * 0.5;
      }
    }
    local_50 = param_1 + 0x74;
    local_4c = param_1 + 0x60;
    FUN_089a3a44(fVar8,auStack_80,&local_120);
    FUN_089a3a44(-fVar10,auStack_70,&local_120);
    FUN_089a38fc(auStack_110,param_1,auStack_90);
    FUN_089a38c4(auStack_100,param_1,auStack_90);
    FUN_089a38c4(auStack_f0,auStack_110,auStack_80);
    local_48 = auStack_e0;
    FUN_089a38c4(auStack_e0,auStack_100,auStack_80);
    FUN_089a38fc(auStack_d0,iVar7,auStack_90);
    FUN_089a38c4(auStack_c0,iVar7,auStack_90);
    FUN_089a38c4(auStack_b0,auStack_d0,auStack_70);
    FUN_089a38c4(auStack_a0,auStack_c0,auStack_70);
    FUN_089a34c0(local_54,auStack_110);
    *(undefined4 *)(param_1 + 0x34) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x30) = 0x3c23d70a;
    FUN_089a34c0(local_58,auStack_100);
    *(undefined4 *)(param_1 + 0x44) = 0x3c23d70a;
    local_44 = 0x3c23d70a;
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
    FUN_089a34c0(local_4c,auStack_f0);
    puVar5 = local_48;
    *(undefined4 *)(param_1 + 0x5c) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x58) = 0x3f7d70a4;
    FUN_089a34c0(local_50,local_48);
    *(undefined4 *)(param_1 + 0x6c) = 0x3f7d70a4;
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    FUN_089a34c0(param_1 + 0x88,auStack_f0);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_089a34c0(param_1 + 0x9c,puVar5);
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0x3f000000;
    FUN_089a34c0(param_1 + 0xb0,auStack_b0);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(float *)(param_1 + 0xa8) = fVar12 / 0.2;
    FUN_089a34c0(param_1 + 0xc4,auStack_a0);
    *(float *)(param_1 + 0xbc) = fVar12 / 0.2;
    *(undefined4 *)(param_1 + 0xc0) = 0x3f000000;
    FUN_089a34c0(param_1 + 0xd8,auStack_b0);
    *(undefined4 *)(param_1 + 0xd0) = 0x3f7d70a4;
    *(undefined4 *)(param_1 + 0xd4) = 0x3f000000;
    FUN_089a34c0(param_1 + 0xec,auStack_a0);
    *(undefined4 *)(param_1 + 0xe4) = 0x3f7d70a4;
    *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
    FUN_089a34c0(param_1 + 0x100,auStack_d0);
    uVar11 = local_44;
    *(undefined4 *)(param_1 + 0xf8) = local_44;
    *(undefined4 *)(param_1 + 0xfc) = 0x3f000000;
    FUN_089a34c0(param_1 + 0x114,auStack_c0);
    *(undefined4 *)(param_1 + 0x10c) = uVar11;
    *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
    *(undefined2 *)(param_1 + 300) = 0xc;
  }
  return;
}

