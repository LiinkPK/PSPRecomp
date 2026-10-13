/* Entry 0x0880CAB4 | file offset 0x00009A8C | FUN_0880cab4 | bytes 584 */

void FUN_0880cab4(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  undefined1 auVar2 [12];
  
  FUN_089a3f68(auStack_70,param_6,&DAT_09af8aa0);
  FUN_089a38e0(auStack_60,param_3,param_5);
  FUN_089a3bc8(auStack_60,auStack_60);
  FUN_089a3f40(auStack_60,param_4,auStack_60);
  FUN_089a3b30(&local_80,auStack_70,auStack_60);
  uVar7 = FUN_08867fec(auStack_60,auStack_70);
  auVar6._4_4_ = local_7c;
  auVar6._0_4_ = local_80;
  auVar6._8_4_ = local_78;
  auVar5._4_4_ = local_7c;
  auVar5._0_4_ = local_80;
  auVar5._8_4_ = local_78;
  auVar2._4_4_ = local_7c;
  auVar2._0_4_ = local_80;
  auVar2._8_4_ = local_78;
  uVar13 = vdot_t(auVar2,auVar5);
  uVar14 = vzero_s();
  uVar15 = vcmp_s(8,uVar13,local_80);
  local_40 = vsqrt_s(uVar13);
  vrcp_s(local_40);
  uVar13 = vcmovt_s(uVar14,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar6,uVar13);
  fVar1 = auVar2._0_4_;
  fVar3 = auVar2._4_4_;
  fVar4 = auVar2._8_4_;
  local_50 = fVar1;
  local_4c = fVar3;
  local_48 = fVar4;
  fVar8 = (float)FUN_089a47a4(uVar7);
  fVar9 = (float)FUN_089a46dc(uVar7);
  fVar11 = 1.0 - fVar9;
  *param_2 = fVar1 * fVar1 * fVar11 + fVar9;
  fVar10 = fVar1 * fVar3 * fVar11;
  param_2[1] = fVar10 + fVar8 * fVar4;
  fVar12 = fVar1 * fVar4 * fVar11;
  param_2[2] = fVar12 - fVar8 * fVar3;
  param_2[3] = 0.0;
  param_2[4] = fVar10 - fVar8 * fVar4;
  param_2[5] = fVar3 * fVar3 * fVar11 + fVar9;
  fVar10 = fVar3 * fVar4 * fVar11;
  param_2[6] = fVar10 + fVar8 * fVar1;
  param_2[7] = 0.0;
  param_2[8] = fVar12 + fVar8 * fVar3;
  param_2[9] = fVar10 - fVar8 * fVar1;
  param_2[10] = fVar4 * fVar4 * fVar11 + fVar9;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
  FUN_089a3efc(param_3 + 0x10,param_2);
  FUN_089a3fb8(param_2,param_2,param_6);
  FUN_089a3fb8(param_2,param_2,param_3 + 0x90);
  FUN_089a3f40(param_2 + 0xc,param_4,param_5);
  return;
}

