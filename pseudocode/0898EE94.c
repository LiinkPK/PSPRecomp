/* Entry 0x0898EE94 | file offset 0x0018BE6C | FUN_0898ee94 | bytes 1044 */

void FUN_0898ee94(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 short param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  iVar1 = DAT_09b6f478;
  if ((short)param_3[0x14] < 0) {
    iVar2 = 0;
  }
  else if (*(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x34) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x34) +
                             (short)param_3[0x14] * 4) + 0x10);
  }
  if (iVar2 != -1) {
    local_70[0] = 0;
    if (*(short *)((int)param_3 + 0x52) < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_08973e20(*(undefined4 *)(DAT_09b6f478 + 0xa8),
                           *(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) +
                                              0x3c) + *(short *)((int)param_3 + 0x52) * 4) + 0x10),
                           (int)(short)param_3[0x15],local_70);
    }
    if (iVar2 != 0) {
      uVar8 = local_70[0];
      if (param_3[0x17] != 0) {
        uVar8 = param_3[0x17];
      }
      uVar9 = *(undefined4 *)(iVar1 + 0xa8);
      local_40 = param_4;
      if (param_3[0x16] == 1) {
        uVar7 = 0;
        iVar6 = 0;
        if (uVar8 != 0) {
          do {
            if (*param_3 == 0) {
              iVar5 = *(int *)(iVar2 + iVar6 * 4);
              local_34 = uVar7;
              iVar4 = FUN_08973e58(uVar9,*(undefined4 *)
                                          (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8
                                                                     ) + 0x3c) +
                                                   *(short *)((int)param_3 + 0x52) * 4) + 0x10));
              puVar3 = (undefined4 *)(iVar4 + iVar5 * 0xc);
              local_50 = *puVar3;
              local_4c = puVar3[1];
              local_48 = puVar3[2];
              uVar7 = local_34;
            }
            else {
              iVar4 = *(int *)*param_3;
              (**(code **)(iVar4 + 0x14))(*param_3 + (int)*(short *)(iVar4 + 0x10),&local_50);
            }
            local_34 = uVar7;
            FUN_089a3918(&local_50,&local_50,param_3 + 0x10);
            local_44 = 0x3f800000;
            FUN_0898eb40(param_1,param_2,param_3 + 1,local_40,(int)param_5,param_6,&local_50);
            iVar6 = iVar6 + 1;
            if ((int)local_70[0] <= iVar6) {
              iVar6 = 0;
            }
            uVar7 = local_34 + 1;
          } while (uVar7 < uVar8);
        }
      }
      else {
        FUN_0898d150();
        uVar7 = 0;
        if (uVar8 != 0) {
          do {
            if (*param_3 == 0) {
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              iVar6 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                           (float)(int)(local_70[0] - 1));
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              else if ((int)(local_70[0] - 1) < iVar6) {
                iVar6 = 0;
              }
              iVar4 = *(int *)(iVar2 + iVar6 * 4);
              local_3c = param_4;
              iVar6 = FUN_08973e58(uVar9,*(undefined4 *)
                                          (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8
                                                                     ) + 0x3c) +
                                                   *(short *)((int)param_3 + 0x52) * 4) + 0x10));
              puVar3 = (undefined4 *)(iVar6 + iVar4 * 0xc);
              local_60 = *puVar3;
              local_5c = puVar3[1];
              local_58 = puVar3[2];
              param_4 = local_3c;
            }
            else {
              iVar6 = *(int *)*param_3;
              (**(code **)(iVar6 + 0x14))(*param_3 + (int)*(short *)(iVar6 + 0x10),&local_60);
            }
            local_38 = uVar9;
            FUN_089a3918(&local_60,&local_60,param_3 + 0x10);
            local_54 = 0x3f800000;
            FUN_0898eb40(param_1,param_2,param_3 + 1,param_4,(int)param_5,param_6,&local_60);
            uVar7 = uVar7 + 1;
            uVar9 = local_38;
          } while (uVar7 < uVar8);
        }
      }
    }
  }
  return;
}

