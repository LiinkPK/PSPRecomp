/* Entry 0x08854FAC | file offset 0x00051F84 | FUN_08854fac | bytes 1156 */

void FUN_08854fac(int *param_1)

{
  undefined1 auVar1 [12];
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [12];
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_a0 [24];
  undefined4 local_88;
  uint local_74;
  undefined1 auStack_70 [4];
  float local_6c;
  undefined4 local_60;
  int local_58;
  undefined4 *local_54;
  undefined4 local_50;
  uint local_4c;
  
  if (((*param_1 != 0) && (param_1[4] != 0)) && (param_1[2] != 0)) {
    iVar5 = param_1[3];
    iVar3 = param_1[4];
    local_58 = iVar3;
    local_50 = FUN_08899300();
    iVar8 = 0;
    fVar9 = DAT_089d5eac / 60.0;
    if (0 < iVar3) {
      local_54 = &DAT_09af8aa0;
      uVar6 = 0x1f0000;
      do {
        pfVar4 = (float *)(param_1[2] + iVar5 * 0x60);
        if (0.0 < pfVar4[0x11]) {
          fVar2 = pfVar4[0xc];
          if ((int)fVar2 < 1) {
            if ((int)fVar2 < 0) {
              fVar2 = pfVar4[0x11];
            }
            else {
              DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
              pfVar4[5] = pfVar4[5] -
                          ((float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                           (DAT_089d4db4 - DAT_089d4db0) + DAT_089d4db0) * fVar9;
              pfVar4[0xe] = pfVar4[0xe] + DAT_089d4dbc * fVar9;
              local_4c = uVar6;
              fVar2 = (float)FUN_089a47a4();
              *pfVar4 = fVar2 * pfVar4[0xd];
              pfVar4[1] = 0.0;
              fVar2 = (float)FUN_089a46dc(pfVar4[0xe]);
              pfVar4[2] = fVar2 * 0.1;
              FUN_088684fc(pfVar4[0x10],pfVar4,pfVar4);
              FUN_089a38a8(pfVar4,pfVar4,pfVar4 + 4);
              pauVar7 = (undefined1 (*) [12])(pfVar4 + 8);
              FUN_088684fc(pfVar4[0x10] + pfVar4[0xe],pauVar7,local_54);
              uVar6 = local_4c;
              pfVar4[9] = pfVar4[9] - 0.5;
              fVar2 = pfVar4[0xb];
              uVar10 = vdot_t(*pauVar7,*pauVar7);
              uVar11 = vzero_s();
              uVar12 = vcmp_s(8,uVar10,*(undefined4 *)*pauVar7);
              local_60 = vsqrt_s(uVar10);
              vrcp_s(local_60);
              uVar10 = vcmovt_s(uVar11,(byte)uVar12 & 1);
              vpfxd(4,4,4,5);
              auVar1 = vscl_t(*pauVar7,uVar10);
              *(int *)*pauVar7 = auVar1._0_4_;
              pfVar4[9] = auVar1._4_4_;
              pfVar4[10] = auVar1._8_4_;
              pfVar4[0xb] = fVar2;
              fVar2 = pfVar4[0xf];
              pfVar4[0xf] = fVar2 + 0.017453292;
              if (6.2831855 < fVar2 + 0.017453292) {
                pfVar4[0xf] = pfVar4[0xf] - 6.2831855;
              }
              FUN_089a3868(auStack_70,pfVar4);
              local_6c = local_6c + 1.0;
              fVar2 = (float)FUN_088976e4(local_50,auStack_a0,auStack_70,0x22,1,0,0);
              if ((fVar2 != -3.4028235e+38) && (pfVar4[1] < fVar2)) {
                pfVar4[1] = fVar2 + 0.01;
                if (((local_74 & uVar6) >> 0x10 == 0x1e) || ((local_74 & uVar6) >> 0x10 == 0x1f)) {
                  local_6c = fVar2;
                  FUN_0885ad38(0x3dcccccd,0x3f000000,0x41f00000,DAT_089d4dc8 + 0x160,auStack_70,
                               local_88,(local_74 & uVar6) >> 0x10,0);
                  pfVar4[0xc] = 2.8026e-45;
                }
                else {
                  pfVar4[0xc] = 1.4013e-45;
                }
              }
              fVar2 = pfVar4[0x11];
            }
          }
          else if ((int)fVar2 < 3) {
            fVar2 = pfVar4[0x11];
          }
          else {
            fVar2 = pfVar4[0x11];
          }
          pfVar4[0x11] = fVar2 - DAT_089d5eac;
        }
        else if (iVar5 == param_1[3]) {
          iVar3 = param_1[3];
          param_1[3] = iVar3 + 1;
          if (0x27 < iVar3 + 1) {
            param_1[3] = 0;
          }
          param_1[4] = param_1[4] + -1;
        }
        iVar5 = iVar5 + 1;
        if (0x27 < iVar5) {
          iVar5 = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_58);
    }
  }
  return;
}

