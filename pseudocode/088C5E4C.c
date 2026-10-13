/* Entry 0x088C5E4C | file offset 0x000C2E24 | FUN_088c5e4c | bytes 2972 */

void FUN_088c5e4c(int *param_1,int *param_2,int param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int local_3c;
  int local_38;
  
  iVar3 = (**(code **)(*param_2 + 0xc))((int)param_2 + (int)*(short *)(*param_2 + 8));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  psVar2 = DAT_089d7414;
  if (iVar3 != 0) {
    uVar4 = (**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10));
    iVar5 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
    uVar6 = (**(code **)(*param_2 + 0x24))((int)param_2 + (int)*(short *)(*param_2 + 0x20));
    iVar7 = Stat_ATK_from_growth_record(iVar3,uVar6);
    *param_1 = iVar7;
    iVar7 = Stat_DEF_from_growth_record(iVar3,uVar6);
    param_1[1] = iVar7;
    iVar7 = Stat_LUK_from_growth_record(iVar3,uVar6);
    param_1[2] = iVar7;
    iVar7 = Stat_CP_from_growth_record(iVar3,iVar5);
    param_1[3] = iVar7;
    iVar7 = Stat_BaseBRV_from_growth_record(iVar3,uVar6);
    param_1[4] = iVar7;
    iVar3 = Stat_HP_from_growth_record(iVar3,uVar6);
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    else if (999999 < iVar3) {
      iVar3 = 999999;
    }
    param_1[5] = iVar3;
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] + param_4;
    param_1[6] = *param_1;
    param_1[7] = param_1[1];
    param_1[8] = param_1[2];
    param_1[9] = param_1[3];
    param_1[10] = param_1[4];
    param_1[0xb] = param_1[5];
    iVar7 = 0;
    iVar3 = FUN_088bf4cc(uVar4,0xe4);
    if (iVar3 != 0) {
      iVar7 = (int)*(short *)(iVar3 + 4);
    }
    param_1[0xb] = (param_1[0xb] * (iVar7 + 100)) / 100;
    iVar3 = FUN_088bf4cc(uVar4,0x6d);
    if (iVar3 != 0) {
      iVar7 = 0;
      psVar9 = (short *)(iVar3 + 4);
      if (0 < *(short *)(iVar3 + 2)) {
        do {
          iVar7 = iVar7 + 1;
          param_1[0xb] = param_1[0xb] + (int)*psVar9;
          psVar9 = psVar9 + 1;
        } while (iVar7 < *(short *)(iVar3 + 2));
      }
    }
    iVar3 = FUN_088bf4cc(uVar4,0x26);
    if (iVar3 != 0) {
      param_1[0xb] = (int)*(short *)(iVar3 + 4);
    }
    iVar3 = param_1[0xb];
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    else if (999999 < iVar3) {
      iVar3 = 999999;
    }
    param_1[0xb] = iVar3;
    iVar8 = (**(code **)(*param_2 + 0x2c))((int)param_2 + (int)*(short *)(*param_2 + 0x28),iVar3);
    local_38 = 0;
    local_3c = 0;
    iVar3 = 0;
    iVar7 = FUN_088bf4cc(uVar4,99);
    if (iVar7 != 0) {
      for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
        if ((iVar8 * 100) / param_1[0xb] <= (int)*(short *)(iVar7 + 4)) {
          iVar3 = iVar3 + *(short *)(iVar7 + 6);
        }
      }
    }
    if ((iVar8 == param_1[0xb]) && (iVar7 = FUN_088bf4cc(uVar4,100), iVar7 != 0)) {
      iVar3 = iVar3 + *(short *)(iVar7 + 4);
    }
    iVar7 = (**(code **)(*param_2 + 0x3c))((int)param_2 + (int)*(short *)(*param_2 + 0x38));
    if ((iVar7 == 1) && (iVar7 = FUN_088bf4cc(uVar4,0x67), iVar7 != 0)) {
      iVar3 = iVar3 + *(short *)(iVar7 + 4);
    }
    iVar7 = (**(code **)(*param_2 + 0x44))((int)param_2 + (int)*(short *)(*param_2 + 0x40));
    if ((iVar7 == 1) && (iVar7 = FUN_088bf4cc(uVar4,0x68), iVar7 != 0)) {
      iVar3 = iVar3 + *(short *)(iVar7 + 4);
    }
    iVar7 = (**(code **)(*param_2 + 0x4c))((int)param_2 + (int)*(short *)(*param_2 + 0x48));
    if ((iVar7 == 1) && (iVar7 = FUN_088bf4cc(uVar4,0x69), iVar7 != 0)) {
      iVar3 = iVar3 + *(short *)(iVar7 + 4);
    }
    iVar8 = FUN_088bf4cc(uVar4,0x7e);
    iVar7 = iVar3;
    if (iVar8 != 0) {
      iVar7 = iVar3 + *(short *)(iVar8 + 4);
    }
    iVar8 = FUN_088bf4cc(uVar4,0x7f);
    if (iVar8 != 0) {
      iVar3 = iVar3 + *(short *)(iVar8 + 4);
    }
    iVar8 = FUN_088bf4cc(uVar4,0x80);
    iVar10 = 0;
    if (iVar8 != 0) {
      local_38 = (int)*(short *)(iVar8 + 4);
    }
    iVar8 = FUN_088bf4cc(uVar4,0xe6);
    if (iVar8 != 0) {
      local_3c = (int)*(short *)(iVar8 + 4);
    }
    iVar8 = FUN_088bf4cc(uVar4,0xe5);
    if (iVar8 != 0) {
      iVar10 = (int)*(short *)(iVar8 + 4);
    }
    param_1[6] = (param_1[6] * (iVar7 + 100)) / 100;
    param_1[7] = (param_1[7] * (iVar3 + 100)) / 100;
    param_1[8] = (param_1[8] * (local_38 + 100)) / 100;
    param_1[9] = (param_1[9] * (local_3c + 100)) / 100;
    param_1[10] = (param_1[10] * (iVar10 + 100)) / 100;
    iVar3 = FUN_088bf4cc(uVar4,0x6b);
    if (iVar3 != 0) {
      param_1[6] = param_1[6] + (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0x6c);
    if (iVar3 != 0) {
      param_1[7] = param_1[7] + (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0xe2);
    if (iVar3 != 0) {
      param_1[8] = param_1[8] + (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0xe3);
    if (iVar3 != 0) {
      param_1[9] = param_1[9] + (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0x6e);
    if (iVar3 != 0) {
      param_1[10] = param_1[10] + (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0x71);
    if (iVar3 != 0) {
      if (*(short *)(iVar3 + 4) != 0) {
        param_1[6] = (int)psVar2[2] + (psVar2[6] * iVar5) / 100 + param_1[6];
      }
      if (*(short *)(iVar3 + 6) != 0) {
        param_1[7] = (int)psVar2[3] + (psVar2[7] * iVar5) / 100 + param_1[7];
      }
      if (*(short *)(iVar3 + 8) != 0) {
        param_1[0xb] = (int)*psVar2 + (psVar2[4] * iVar5) / 100 + param_1[0xb];
      }
      if (*(short *)(iVar3 + 10) != 0) {
        param_1[10] = (int)psVar2[1] + (psVar2[5] * iVar5) / 100 + param_1[10];
      }
    }
    iVar3 = FUN_088bf4cc(uVar4,0x72);
    if ((iVar3 != 0) &&
       (iVar5 = (**(code **)(*param_2 + 0x5c))
                          ((int)param_2 + (int)*(short *)(*param_2 + 0x58),
                           (int)*(short *)(iVar3 + 4)), iVar5 == 1)) {
      sVar1 = *(short *)(iVar3 + 6);
      if (sVar1 < 2) {
        if (-1 < sVar1) {
          if (sVar1 < 1) {
            param_1[6] = param_1[6] + (int)*(short *)(iVar3 + 8);
          }
          else {
            param_1[7] = param_1[7] + (int)*(short *)(iVar3 + 8);
          }
        }
      }
      else if (sVar1 < 3) {
        param_1[0xb] = param_1[0xb] + (int)*(short *)(iVar3 + 8);
      }
      else if (sVar1 < 4) {
        param_1[10] = param_1[10] + (int)*(short *)(iVar3 + 8);
      }
    }
    iVar3 = FUN_088bf4cc(uVar4,0x155);
    if (iVar3 != 0) {
      for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
        iVar5 = (**(code **)(*param_2 + 100))
                          ((int)param_2 + (int)*(short *)(*param_2 + 0x60),
                           (int)*(short *)(iVar3 + 4));
        if (iVar5 == 1) {
          sVar1 = *(short *)(iVar3 + 6);
          if (sVar1 < 2) {
            if (-1 < sVar1) {
              if (sVar1 < 1) {
                param_1[6] = param_1[6] + (int)*(short *)(iVar3 + 8);
              }
              else {
                param_1[7] = param_1[7] + (int)*(short *)(iVar3 + 8);
              }
            }
          }
          else if (sVar1 < 3) {
            param_1[0xb] = param_1[0xb] + (int)*(short *)(iVar3 + 8);
          }
          else if (sVar1 < 4) {
            param_1[10] = param_1[10] + (int)*(short *)(iVar3 + 8);
          }
        }
      }
    }
    iVar3 = FUN_088bf4cc(uVar4,0x73);
    if ((iVar3 != 0) &&
       (iVar5 = (**(code **)(*param_2 + 0x6c))
                          ((int)param_2 + (int)*(short *)(*param_2 + 0x68),
                           (int)*(short *)(iVar3 + 4),(int)*(short *)(iVar3 + 6)), iVar5 == 1)) {
      sVar1 = *(short *)(iVar3 + 8);
      if (sVar1 < 2) {
        if (-1 < sVar1) {
          if (sVar1 < 1) {
            param_1[6] = param_1[6] + (int)*(short *)(iVar3 + 10);
          }
          else {
            param_1[7] = param_1[7] + (int)*(short *)(iVar3 + 10);
          }
        }
      }
      else if (sVar1 < 3) {
        param_1[0xb] = param_1[0xb] + (int)*(short *)(iVar3 + 10);
      }
      else if (sVar1 < 4) {
        param_1[10] = param_1[10] + (int)*(short *)(iVar3 + 10);
      }
    }
    iVar3 = (**(code **)(*param_2 + 0x54))((int)param_2 + (int)*(short *)(*param_2 + 0x50));
    if ((iVar3 == 1) && (iVar3 = FUN_088bf4cc(uVar4,0xf3), iVar3 != 0)) {
      iVar5 = 100;
      for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
        iVar5 = (iVar5 * *(short *)(iVar3 + 4)) / 100;
      }
      param_1[6] = (param_1[6] * iVar5) / 100;
    }
    iVar3 = FUN_088bf4cc(uVar4,0x24);
    if (iVar3 != 0) {
      param_1[6] = (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0x25);
    if (iVar3 != 0) {
      param_1[7] = (int)*(short *)(iVar3 + 4);
    }
    iVar3 = FUN_088bf4cc(uVar4,0x27);
    if (iVar3 != 0) {
      param_1[10] = (int)*(short *)(iVar3 + 4);
    }
  }
  iVar10 = param_1[6];
  iVar3 = param_1[7];
  iVar5 = param_1[8];
  iVar7 = param_1[9];
  iVar8 = param_1[10];
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  param_1[6] = iVar10;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_1[7] = iVar3;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  param_1[8] = iVar5;
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  param_1[9] = iVar7;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  param_1[10] = iVar8;
  return;
}

