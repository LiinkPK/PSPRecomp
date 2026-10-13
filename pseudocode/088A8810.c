/* Entry 0x088A8810 | file offset 0x000A57E8 | FUN_088a8810 | bytes 752 */

void FUN_088a8810(undefined4 param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar1 = FUN_088a751c();
  if (iVar1 == 0) {
    param_2[0x35] = 2.8026e-45;
  }
  else if (0.0 < param_2[0x38]) {
    fVar6 = (float)FUN_088a7d0c(param_1,param_2);
    param_2[0x38] = param_2[0x38] - fVar6;
  }
  else {
    FUN_088a47e4(param_2[0x33],1);
    pfVar2 = (float *)param_2[0x30];
    fVar13 = *param_2;
    fVar11 = *pfVar2;
    fVar19 = pfVar2[1];
    fVar18 = param_2[1];
    fVar22 = pfVar2[2];
    fVar21 = param_2[2];
    fVar7 = param_2[3];
    fVar9 = param_2[4];
    fVar16 = param_2[5];
    fVar6 = param_2[6];
    fVar8 = param_2[7];
    fVar10 = param_2[8];
    fVar14 = pfVar2[3];
    fVar20 = pfVar2[4];
    fVar23 = pfVar2[5];
    fVar15 = pfVar2[6];
    fVar12 = pfVar2[7];
    fVar17 = pfVar2[8];
    if (((((uint)param_2[0x37] & 1) != 0) && (fVar5 = param_2[0x34], fVar5 != 0.0)) &&
       (iVar1 = (**(code **)(*(int *)((int)fVar5 + 0x2c) + 0x14))
                          ((int)fVar5 + (int)*(short *)(*(int *)((int)fVar5 + 0x2c) + 0x10),
                           param_2[0x3c]), iVar1 != 0)) {
      fVar5 = 0.0;
      if (param_2[0x3c] == 0.0) {
        fVar5 = param_2[0x3d];
      }
      if (fVar5 != -NAN) {
        FUN_088a4924(param_2[0x33],iVar1,fVar5);
        uVar4 = *(uint *)((int)param_2[0x30] + 0x7c);
        if ((uVar4 & 1) == 0) {
          iVar3 = *(int *)((int)param_2[0x30] + 0x78);
          if (iVar3 != 0) {
            FUN_088a4970(param_2[0x33],iVar3);
            param_2[0x3f] = (float)*(int *)((int)param_2[0x30] + 0x78);
            uVar4 = *(uint *)((int)param_2[0x30] + 0x7c);
          }
        }
        else {
          FUN_088a4970(param_2[0x33],1);
          param_2[0x3f] = 0.0;
          uVar4 = *(uint *)((int)param_2[0x30] + 0x7c);
        }
        FUN_088a9024(param_2,param_2 + 0x1c,iVar1,fVar5,(uVar4 & 2) != 0,(uVar4 & 4) != 0,
                     (uVar4 & 8) != 0);
        FUN_08941ac8(*(undefined4 *)(DAT_089d6d80 + 8),*(undefined4 *)((int)param_2[0x33] + 0x10),
                     param_2 + 0x1c);
      }
    }
    FUN_088a45a8(fVar11 + fVar13,fVar19 + fVar18,fVar22 + fVar21,param_2[0x33]);
    FUN_088a4644(fVar14 * 0.017453292 + fVar7,fVar20 * 0.017453292 + fVar9,
                 fVar23 * 0.017453292 + fVar16,param_2[0x33]);
    FUN_088a46cc(fVar15 * fVar6,fVar12 * fVar8,fVar17 * fVar10,param_2[0x33]);
    FUN_088a4674(param_2[0x33],param_2 + 0xc);
    FUN_088a46fc(param_2[0x33],param_2 + 0x2c);
    param_2[0x37] = (float)((uint)param_2[0x37] & 0xffffff83);
    FUN_088a793c(param_2);
    param_2[0x35] = 1.4013e-45;
  }
  return;
}

