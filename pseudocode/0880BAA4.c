/* Entry 0x0880BAA4 | file offset 0x00008A7C | FUN_0880baa4 | bytes 900 */

void FUN_0880baa4(undefined1 (*param_1) [12],undefined4 param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 (*local_88) [12];
  undefined1 auStack_84 [4];
  float local_80;
  undefined4 local_78;
  undefined1 auStack_74 [20];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_44;
  
  local_78 = 0;
  local_44 = 0x50;
  FUN_089a3890(param_1);
  *(undefined4 *)param_1[0xb] = 0;
  pbVar6 = (byte *)0x0;
  uVar5 = *(undefined4 *)param_1[2];
  local_88 = param_1;
  do {
    pbVar6 = (byte *)FUN_088351fc(uVar5,local_44,pbVar6);
    if (pbVar6 == (byte *)0x0) {
      uVar5 = *(undefined4 *)param_1[1];
      uVar8 = vdot_t(*param_1,*param_1);
      uVar9 = vzero_s();
      uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*param_1);
      local_4c = vsqrt_s(uVar8);
      vrcp_s(local_4c);
      uVar8 = vcmovt_s(uVar9,(byte)uVar10 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*param_1,uVar8);
      *(int *)*param_1 = auVar1._0_4_;
      *(int *)(*param_1 + 4) = auVar1._4_4_;
      *(int *)(*param_1 + 8) = auVar1._8_4_;
      *(undefined4 *)param_1[1] = uVar5;
      FUN_089a3a44(0xbf800000,param_1,param_1);
      if ((*(uint *)(*(int *)(param_1[4] + 4) + 8) & 4) != 0) {
        if (*(char *)(*(int *)param_1[2] + 0x542) == '\x03') {
          FUN_089a3868(param_1,*(int *)(*(int *)param_1[2] + 0x5d4) + 0x90);
        }
        else {
          FUN_089a3868(param_1,*(int *)param_1[2] + 0x90);
        }
      }
      if (*(int *)param_1[0xb] == 0) {
        FUN_08808214(param_1);
      }
      else {
        *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 4;
      }
      return;
    }
    if ((uint)*pbVar6 == *(uint *)(param_1[10] + 8)) {
      if (pbVar6[4] == 6) {
        *(int *)param_1[0xb] = *(int *)param_1[0xb] + 1;
      }
      else {
        FUN_08812664(auStack_84,*(undefined4 *)param_1[2],pbVar6);
        if (0 < *(int *)(param_1[8] + 8)) {
          FUN_088091a0(param_2,&local_88);
        }
        FUN_089a34c0(auStack_a0,auStack_74);
        if (*(int *)param_1[0xb] < 0x20) {
          if ((*(uint *)(param_1[1] + 4) & 4) != 0) {
            FUN_089a3528(&local_94,param_1[*(int *)param_1[0xb] + 0xb] + 4,auStack_a0);
            auVar3._4_4_ = local_90;
            auVar3._0_4_ = local_94;
            auVar3._8_4_ = local_8c;
            auVar2._4_4_ = local_90;
            auVar2._0_4_ = local_94;
            auVar2._8_4_ = local_8c;
            auVar1._4_4_ = local_90;
            auVar1._0_4_ = local_94;
            auVar1._8_4_ = local_8c;
            uVar5 = vdot_t(auVar1,auVar2);
            uVar8 = vzero_s();
            uVar9 = vcmp_s(8,uVar5,local_94);
            fVar7 = (float)vsqrt_s(uVar5);
            vrcp_s(fVar7);
            uVar5 = vcmovt_s(uVar8,(byte)uVar9 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(auVar3,uVar5);
            local_94 = auVar1._0_4_;
            local_90 = auVar1._4_4_;
            local_8c = auVar1._8_4_;
            local_54 = 0x3f800000;
            local_60 = local_94;
            local_5c = local_90;
            local_58 = local_8c;
            local_50 = fVar7;
            FUN_089a38a8(param_1,param_1,&local_60);
            FUN_089a3680(local_80,&local_94,&local_94);
            if (local_80 * 1.5 < fVar7) {
              do {
                FUN_089a34f4(auStack_74,auStack_74,&local_94);
                if ((0 < *(int *)(param_1[8] + 8)) &&
                   (iVar4 = FUN_088091a0(param_2,&local_88), iVar4 == 0)) break;
                fVar7 = fVar7 - local_80;
              } while (local_80 * 1.5 < fVar7);
            }
          }
          FUN_089a34c0(param_1[*(int *)param_1[0xb] + 0xb] + 4,auStack_a0);
        }
        *(int *)param_1[0xb] = *(int *)param_1[0xb] + 1;
      }
    }
    uVar5 = *(undefined4 *)param_1[2];
  } while( true );
}

