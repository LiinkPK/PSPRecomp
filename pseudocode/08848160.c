/* Entry 0x08848160 | file offset 0x00045138 | FUN_08848160 | bytes 2084 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08848160(int *param_1,uint param_2)

{
  bool bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined1 auStack_120 [4];
  float local_11c;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_50;
  
  fVar9 = 0.0;
  local_114 = 0;
  uVar10 = 0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  if (*param_1 != 0) {
    iVar5 = FUN_08835358(*param_1);
    if (iVar5 == 0) {
      return;
    }
    FUN_08812664(auStack_120,*param_1,iVar5);
    local_b0 = local_110;
    local_ac = local_10c;
    local_a8 = local_108;
    local_a4 = 0x3f800000;
    local_d0 = local_110;
    local_cc = local_10c;
    local_c8 = local_108;
    local_c4 = 0x3f800000;
    local_f0 = local_110;
    local_ec = local_10c;
    local_e8 = local_108;
    local_e4 = 0x3f800000;
    FUN_089a38e0(&local_90,&local_f0,param_1 + 0x10);
    local_e0 = local_90;
    local_dc = local_8c;
    local_d8 = local_88;
    local_d4 = local_84;
    local_100 = local_90;
    local_fc = local_8c;
    local_f8 = local_88;
    local_f4 = local_84;
    FUN_089a3868(&local_130,&local_100);
    uVar10 = local_12c;
    local_70 = local_110;
    local_6c = local_10c;
    local_68 = local_108;
    local_64 = 0x3f800000;
    local_c0 = local_110;
    local_bc = local_10c;
    local_b8 = local_108;
    local_b4 = 0x3f800000;
    fVar12 = local_10c - (float)param_1[0x15];
    auVar4._4_4_ = 0;
    auVar4._0_4_ = local_130;
    auVar4._8_4_ = uStack_128;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = local_130;
    auVar3._8_4_ = uStack_128;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = local_130;
    auVar2._8_4_ = uStack_128;
    uVar13 = vdot_t(auVar2,auVar3);
    uVar14 = vzero_s();
    uVar15 = vcmp_s(8,uVar13,local_130);
    local_50 = (float)vsqrt_s(uVar13);
    vrcp_s(local_50);
    uVar13 = vcmovt_s(uVar14,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar4,uVar13);
    local_130 = auVar2._0_4_;
    local_12c = auVar2._4_4_;
    uStack_128 = auVar2._8_4_;
    fVar9 = local_50 - local_11c;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    uVar13 = FUN_089a3b10(&local_130,param_1 + 8);
    fVar11 = (float)FUN_089a4500(uVar13);
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
  }
  uVar8 = 0;
  do {
    iVar5 = FUN_088480d0(DAT_089d4974,uVar8);
    if (iVar5 == 0) {
      return;
    }
    if ((*(char *)((int)param_1 + 0x81) == '\0') || ((*(uint *)(iVar5 + 0x18) & 0x4000) != 0)) {
      iVar6 = func_0x08b30898(param_1[0xc]);
      if (iVar5 == iVar6) {
        bVar1 = false;
      }
      else if (param_1[0x1f] == 5) {
        bVar1 = false;
        if (((*(byte *)(iVar5 + 0xf) & 4) != 0) && ((*(uint *)(iVar5 + 0x18) & 0x80) != 0)) {
          bVar1 = true;
        }
      }
      else if (param_1[0x1f] == 1) {
        bVar1 = false;
        if (((*(byte *)(iVar5 + 0xf) & 1) != 0) && ((*(uint *)(iVar5 + 0x18) & 0x80) != 0)) {
          bVar1 = true;
        }
      }
      else if (param_1[0x1f] == 3) {
        bVar1 = false;
        if (((*(byte *)(iVar5 + 0xf) & 2) != 0) && ((*(uint *)(iVar5 + 0x18) & 0x80) != 0)) {
          bVar1 = true;
        }
      }
      else if (param_1[0x1f] == 4) {
        bVar1 = false;
        if (((*(byte *)(iVar5 + 0xf) & 4) != 0) && ((*(uint *)(iVar5 + 0x18) & 0x80) == 0)) {
          bVar1 = true;
        }
      }
      else if (param_1[0x1f] == 0) {
        bVar1 = false;
        if (((*(byte *)(iVar5 + 0xf) & 1) != 0) && ((*(uint *)(iVar5 + 0x18) & 0x80) == 0)) {
          bVar1 = true;
        }
      }
      else if (param_1[0x1f] == 2) {
        bVar1 = false;
        if (((*(byte *)(iVar5 + 0xf) & 2) != 0) && ((*(uint *)(iVar5 + 0x18) & 0x80) == 0)) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
        if (param_1[0x1f] == 6) {
          bVar1 = (*(byte *)(iVar5 + 0xf) & 8) != 0;
        }
      }
      if (bVar1) {
        if ((*(uint *)(iVar5 + 0x18) & 0x10000) == 0) {
          iVar6 = func_0x08b30898(param_1[0xc]);
          if (iVar6 == 0) {
            iVar6 = func_0x08b2f9d0(param_1[0xc]);
            if (iVar6 == 0) {
              bVar1 = false;
              goto LAB_0884875c;
            }
            uVar7 = *(uint *)(iVar5 + 0x18);
          }
          else {
            uVar7 = *(uint *)(iVar5 + 0x18);
          }
          if ((uVar7 & 0x20000) == 0) {
            if ((*(uint *)(iVar5 + 0x18) & 0x40000) == 0) {
              if ((*(uint *)(iVar5 + 0x18) & 0x80000) == 0) {
                if ((*(uint *)(iVar5 + 0x18) & 0x100000) == 0) {
                  if ((*(uint *)(iVar5 + 0x18) & 0x200000) == 0) {
                    bVar1 = false;
                    if ((*(uint *)(iVar5 + 0x18) & 0x400000) != 0) {
                      bVar1 = (param_1[0x1e] & 0x40U) != 0;
                    }
                  }
                  else {
                    bVar1 = (param_1[0x1e] & 0x20U) != 0;
                  }
                }
                else {
                  bVar1 = (param_1[0x1e] & 0x10U) != 0;
                }
              }
              else {
                bVar1 = (param_1[0x1e] & 8U) != 0;
              }
            }
            else {
              bVar1 = (param_1[0x1e] & 4U) != 0;
            }
          }
          else {
            bVar1 = (param_1[0x1e] & 2U) != 0;
          }
        }
        else {
          bVar1 = true;
        }
LAB_0884875c:
        if (bVar1) {
          bVar1 = false;
          if ((param_2 == 1) || (param_2 == 4)) {
            if ((*(char *)(iVar5 + 3) == '\x01') || (*(char *)(iVar5 + 3) == '\x04')) {
              bVar1 = true;
            }
          }
          else if (*(byte *)(iVar5 + 3) == param_2) {
            bVar1 = true;
          }
          if ((((bVar1) && (iVar6 = FUN_08847f10(iVar5,param_1[0xc],*param_1), iVar6 != 0)) &&
              (iVar6 = FUN_08847e08(fVar9,uVar10,fVar11,iVar5,param_1[0xc],auStack_120), iVar6 != 0)
              ) && (iVar6 = FUN_08847ec4(fVar12,iVar5), iVar6 != 0)) {
            if (param_2 == 1) {
              bVar1 = false;
              if (*(char *)(iVar5 + 3) == '\x04') {
                iVar6 = func_0x08b2ff2c(param_1[0xc],(*(uint *)(iVar5 + 0x18) & 0x100) != 0);
                if ((iVar6 != 0) &&
                   (iVar5 = func_0x08ab81e0(_DAT_08ab8388,param_1[0xc],iVar5), iVar5 != 0)) {
                  bVar1 = true;
                }
              }
              else {
                iVar6 = func_0x08b2fd90(param_1[0xc],(*(uint *)(iVar5 + 0x18) & 0x100) != 0);
                if ((iVar6 == 0) && (iVar6 = func_0x08b2fea0(param_1[0xc],iVar5), iVar6 == 0)) {
                  iVar6 = func_0x08b34e38(param_1[0xc]);
                  if (((iVar6 != 0) && ((*(uint *)(param_1[0xc] + 0x380) & 0x1000) != 0)) &&
                     (iVar5 = func_0x08ab81e0(_DAT_08ab8388,param_1[0xc],iVar5), iVar5 != 0)) {
                    bVar1 = true;
                  }
                }
                else {
                  iVar5 = func_0x08ab81e0(_DAT_08ab8388,param_1[0xc],iVar5);
                  if (iVar5 != 0) {
                    bVar1 = true;
                  }
                }
              }
              if (!bVar1) goto LAB_08848938;
            }
            param_1[(uVar8 >> 5) + 0x18] = param_1[(uVar8 >> 5) + 0x18] | 1 << (uVar8 & 0x1f);
          }
        }
      }
    }
LAB_08848938:
    uVar8 = uVar8 + 1;
  } while( true );
}

