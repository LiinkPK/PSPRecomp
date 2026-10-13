/* Entry 0x088A8B00 | file offset 0x000A5AD8 | FUN_088a8b00 | bytes 1316 */

void FUN_088a8b00(undefined4 param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = FUN_088a751c();
  if (iVar1 == 0) {
    param_2[0x35] = 2.8026e-45;
  }
  else {
    fVar6 = (float)FUN_088a7d0c(param_1,param_2);
    FUN_088a499c(fVar6,param_2[0x33]);
    if ((((uint)param_2[0x37] & 1) != 0) && (param_2[0x3f] != 0.0)) {
      fVar4 = param_2[0x34];
      if (fVar4 != 0.0) {
        iVar1 = (**(code **)(*(int *)((int)fVar4 + 0x2c) + 0x14))
                          ((int)fVar4 + (int)*(short *)(*(int *)((int)fVar4 + 0x2c) + 0x10),
                           param_2[0x3c]);
        if (iVar1 != 0) {
          fVar4 = 0.0;
          if (param_2[0x3c] == 0.0) {
            fVar4 = param_2[0x3d];
          }
          else if (param_2[0x3c] == 5.60519e-45) {
            fVar7 = (float)FUN_08873574(DAT_089d6d80 + 0xd0);
            fVar8 = (float)FUN_089a47ec(0x3edf66f3);
            fVar9 = *(float *)((int)param_2[0x30] + 8);
            fVar7 = (float)FUN_089a47ec(fVar7 * 0.017453292 * 0.5);
            FUN_088a7284(0,0,-(-(fVar8 * fVar9) / fVar7) - *(float *)((int)param_2[0x30] + 8),
                         param_2);
          }
          if (fVar4 != -NAN) {
            FUN_088a4924(param_2[0x33],iVar1,fVar4);
            uVar3 = *(uint *)((int)param_2[0x30] + 0x7c);
            FUN_088a9024(param_2,param_2 + 0x1c,iVar1,fVar4,(uVar3 & 2) != 0,(uVar3 & 4) != 0,
                         (uVar3 & 8) != 0);
            FUN_08941ac8(*(undefined4 *)(DAT_089d6d80 + 8),
                         *(undefined4 *)((int)param_2[0x33] + 0x10),param_2 + 0x1c);
          }
        }
        if ((*(uint *)((int)param_2[0x30] + 0x7c) & 0x40) != 0) {
          fVar4 = param_2[0x33];
          iVar1 = *(int *)((int)param_2[0x34] + 0x2c);
          uVar2 = (**(code **)(iVar1 + 0x1c))((int)param_2[0x34] + (int)*(short *)(iVar1 + 0x18));
          FUN_088a4760(0x3f800000,0x3f800000,0x3f800000,uVar2,fVar4);
          fVar4 = param_2[0x33];
          iVar1 = *(int *)((int)param_2[0x34] + 0x2c);
          uVar2 = (**(code **)(iVar1 + 0x44))((int)param_2[0x34] + (int)*(short *)(iVar1 + 0x40));
          FUN_088a4894(fVar4,uVar2);
        }
      }
      if (0.0 < param_2[0x3f]) {
        fVar4 = param_2[0x3f] - fVar6;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        param_2[0x3f] = fVar4;
      }
    }
    pfVar5 = (float *)param_2[0x30];
    if (pfVar5[0x3f] != pfVar5[0x40]) {
      uVar2 = FUN_0885ea90(DAT_089d6d80 + 0x10);
      fVar4 = (float)FUN_089a3804(uVar2,param_2);
      pfVar5 = (float *)param_2[0x30];
      fVar4 = (fVar4 - pfVar5[0x40]) / (pfVar5[0x3f] - pfVar5[0x40]);
      param_2[0x3a] = fVar4;
      if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      param_2[0x3a] = fVar4;
      param_2[0x37] = (float)((uint)param_2[0x37] | 0x40);
    }
    fVar4 = param_2[0x37];
    if (((uint)fVar4 & 4) != 0) {
      FUN_088a45a8(*pfVar5 + *param_2,pfVar5[1] + param_2[1],pfVar5[2] + param_2[2],param_2[0x33]);
      fVar4 = (float)((uint)param_2[0x37] & 0xfffffffb);
      param_2[0x37] = fVar4;
    }
    if (((uint)fVar4 & 8) != 0) {
      fVar4 = param_2[0x30];
      FUN_088a4644(*(float *)((int)fVar4 + 0xc) * 0.017453292 + param_2[3],
                   *(float *)((int)fVar4 + 0x10) * 0.017453292 + param_2[4],
                   *(float *)((int)fVar4 + 0x14) * 0.017453292 + param_2[5],param_2[0x33]);
      fVar4 = (float)((uint)param_2[0x37] & 0xfffffff7);
      param_2[0x37] = fVar4;
    }
    if (((uint)fVar4 & 0x10) != 0) {
      fVar4 = param_2[0x30];
      FUN_088a46cc(*(float *)((int)fVar4 + 0x18) * param_2[6],
                   *(float *)((int)fVar4 + 0x1c) * param_2[7],
                   *(float *)((int)fVar4 + 0x20) * param_2[8],param_2[0x33]);
      fVar4 = (float)((uint)param_2[0x37] & 0xffffffef);
      param_2[0x37] = fVar4;
    }
    if (((uint)fVar4 & 0x20) != 0) {
      FUN_088a4674(param_2[0x33],param_2 + 0xc);
      fVar4 = (float)((uint)param_2[0x37] & 0xffffffdf);
      param_2[0x37] = fVar4;
    }
    if (((uint)fVar4 & 0x40) != 0) {
      FUN_088a4760(param_2[0x2c],param_2[0x2d],param_2[0x2e],param_2[0x2f] * param_2[0x3a],
                   param_2[0x33]);
      param_2[0x37] = (float)((uint)param_2[0x37] & 0xffffffbf);
    }
    FUN_088a7b70(fVar6,param_2);
    if ((0.0 < param_2[0x39]) &&
       (fVar6 = param_2[0x39] - fVar6, param_2[0x39] = fVar6, fVar6 <= 0.0)) {
      param_2[0x39] = 0.0;
      iVar1 = FUN_088a4a6c(param_2[0x33]);
      if (iVar1 == 1) {
        FUN_088a6aa4(param_2);
      }
      else {
        FUN_088a6a78(param_2);
      }
    }
  }
  return;
}

