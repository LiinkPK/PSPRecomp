/* Entry 0x08812A80 | file offset 0x0000FA58 | FUN_08812a80 | bytes 712 */

float FUN_08812a80(int *param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_1c;
  
  fVar6 = 0.0;
  FUN_089a3528(&local_34,param_1 + 4,param_2);
  local_40 = local_34;
  local_3c = local_30;
  local_38 = local_2c;
  local_50 = local_34;
  local_4c = local_30;
  local_48 = local_2c;
  iVar4 = *param_1;
  local_44 = 0x3f800000;
  if (iVar4 < 2) {
    if (-1 < iVar4) {
      if (iVar4 < 1) {
        if (((float)param_1[1] <= 0.0) || ((float)param_1[2] <= 0.0)) {
          fVar6 = (float)FUN_089a3bf8(&local_50);
        }
        else {
          local_30 = local_30 * ((float)param_1[1] / (float)param_1[2]);
          auVar3._4_4_ = local_30;
          auVar3._0_4_ = local_34;
          auVar3._8_4_ = local_2c;
          auVar2._4_4_ = local_30;
          auVar2._0_4_ = local_34;
          auVar2._8_4_ = local_2c;
          auVar1._4_4_ = local_30;
          auVar1._0_4_ = local_34;
          auVar1._8_4_ = local_2c;
          uVar7 = vdot_t(auVar1,auVar2);
          uVar8 = vzero_s();
          uVar9 = vcmp_s(8,uVar7,local_34);
          local_1c = (float)vsqrt_s(uVar7);
          vrcp_s(local_1c);
          uVar7 = vcmovt_s(uVar8,(byte)uVar9 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar3,uVar7);
          local_50 = auVar1._0_4_;
          local_4c = auVar1._4_4_;
          local_48 = auVar1._8_4_;
          local_44 = 0x3f800000;
          FUN_089a3a44(local_1c - (float)param_1[1],&local_50,&local_50);
          local_4c = local_4c * ((float)param_1[2] / (float)param_1[1]);
          fVar6 = (float)FUN_089a3bf8(&local_50);
        }
      }
      else {
        local_4c = 0.0;
        fVar5 = (float)FUN_089a3bf8(&local_50);
        if ((float)param_1[5] - (float)param_1[2] <= *(float *)(param_2 + 4)) {
          if (*(float *)(param_2 + 4) <= (float)param_1[5] + (float)param_1[2]) {
            if (fVar5 <= (float)param_1[1]) {
              return 0.0;
            }
            return fVar5 - (float)param_1[1];
          }
          fVar6 = (float)param_1[5];
        }
        else {
          fVar6 = (float)param_1[5];
        }
        if (*(float *)(param_2 + 4) < fVar6 - (float)param_1[2]) {
          fVar6 = ((float)param_1[5] - (float)param_1[2]) - *(float *)(param_2 + 4);
        }
        else {
          fVar6 = *(float *)(param_2 + 4) - ((float)param_1[5] + (float)param_1[2]);
        }
        if ((float)param_1[1] < fVar5) {
          fVar6 = (float)FUN_089a2c68((fVar5 - (float)param_1[1]) * (fVar5 - (float)param_1[1]) +
                                      fVar6 * fVar6);
        }
      }
    }
  }
  else if (iVar4 == 3) {
    fVar6 = (float)FUN_089a3bf8(&local_50);
    fVar6 = fVar6 - (float)param_1[1];
  }
  return fVar6;
}

