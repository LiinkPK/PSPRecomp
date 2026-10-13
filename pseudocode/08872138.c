/* Entry 0x08872138 | file offset 0x0006F110 | FUN_08872138 | bytes 460 */

longlong FUN_08872138(undefined4 param_1,float *param_2)

{
  undefined1 auVar1 [12];
  uint uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_30 [4];
  float local_20;
  
  pfVar7 = local_30;
  uVar6 = 0;
  iVar5 = 0;
  do {
    fVar8 = *param_2;
    *pfVar7 = fVar8 - 127.5;
    if (0.0 < fVar8 - 127.5) {
      *pfVar7 = *pfVar7 - *(float *)(DAT_089d6008 + 600);
      if (*pfVar7 < 0.0) {
        *pfVar7 = 0.0;
      }
      else {
        uVar2 = 0x10;
        if (iVar5 == 0) {
          uVar2 = 8;
        }
        uVar6 = uVar6 | uVar2;
      }
    }
    else {
      *pfVar7 = *pfVar7 + *(float *)(DAT_089d6008 + 600);
      if (0.0 < *pfVar7) {
        *pfVar7 = 0.0;
      }
      else {
        uVar2 = 4;
        if (iVar5 == 0) {
          uVar2 = 0x20;
        }
        uVar6 = uVar6 | uVar2;
      }
    }
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 1;
    *pfVar7 = *pfVar7 / (127.5 - *(float *)(DAT_089d6008 + 600));
    pfVar7 = pfVar7 + 1;
  } while (iVar5 < 2);
  auVar4._4_4_ = local_30[1];
  auVar4._0_4_ = local_30[0];
  auVar4._8_4_ = 0;
  auVar3._4_4_ = local_30[1];
  auVar3._0_4_ = local_30[0];
  auVar3._8_4_ = 0;
  auVar1._4_4_ = local_30[1];
  auVar1._0_4_ = local_30[0];
  auVar1._8_4_ = 0;
  uVar9 = vdot_t(auVar1,auVar3);
  uVar10 = vzero_s();
  uVar11 = vcmp_s(8,uVar9,local_30[0]);
  local_20 = (float)vsqrt_s(uVar9);
  vrcp_s(local_20);
  uVar9 = vcmovt_s(uVar10,(byte)uVar11 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar4,uVar9);
  local_30[0] = auVar1._0_4_;
  local_30[1] = auVar1._4_4_;
  local_30[2] = auVar1._8_4_;
  local_30[3] = local_20;
  if (1.0 < local_20) {
    local_30[3] = 1.0;
  }
  FUN_089a3868(param_1,local_30);
  return (ulonglong)uVar6 << 0x20;
}

