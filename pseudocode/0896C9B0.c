/* Entry 0x0896C9B0 | file offset 0x00169988 | FUN_0896c9b0 | bytes 880 */

void FUN_0896c9b0(int *param_1,uint *param_2,int param_3)

{
  undefined1 auVar1 [12];
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  *(bool *)(param_1 + 6) = *(char *)(param_3 + 0xe) != '\0';
  if ((char)param_1[0x13] == '\0') {
    if ((*param_2 & 1) == 0) {
      iVar3 = *param_1 + -1;
      if (0 < iVar3) {
        iVar2 = iVar3 * 0x10;
        do {
          puVar6 = (undefined4 *)(param_1[1] + iVar2);
          auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar2 + -0x10),
                          *(undefined1 (*) [12])(param_1[9] + iVar2 + -0x10));
          uVar8 = vone_s();
          *puVar6 = auVar1._0_4_;
          puVar6[1] = auVar1._4_4_;
          puVar6[2] = auVar1._8_4_;
          puVar6[3] = uVar8;
          puVar6 = (undefined4 *)(param_1[9] + iVar2);
          iVar5 = param_1[9] + iVar2;
          uVar8 = *(undefined4 *)(iVar5 + -0xc);
          uVar7 = *(undefined4 *)(iVar5 + -8);
          *puVar6 = *(undefined4 *)(iVar5 + -0x10);
          puVar6[1] = uVar8;
          puVar6[2] = uVar7;
          puVar6[3] = *(undefined4 *)(iVar5 + -4);
          iVar3 = iVar3 + -1;
          iVar2 = iVar2 + -0x10;
        } while (0 < iVar3);
      }
      FUN_0896c488(param_1,param_2,param_1[1],&DAT_089da0b0);
      iVar3 = param_1[0x12];
      param_1[0x12] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        param_1[0x12] = (uint)*(byte *)(param_3 + 0xf);
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        param_1[0xe] = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                             *(float *)(param_3 + 0x40) - *(float *)(param_3 + 0x40));
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        param_1[0xf] = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                             *(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x44));
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        param_1[0x10] =
             (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                   *(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x48));
      }
      param_1[10] = (int)((float)param_1[10] +
                         ((float)param_1[0xe] - (float)param_1[10]) * *(float *)(param_3 + 0x30));
      param_1[0xb] = (int)((float)param_1[0xb] +
                          ((float)param_1[0xf] - (float)param_1[0xb]) * *(float *)(param_3 + 0x34));
      param_1[0xc] = (int)((float)param_1[0xc] +
                          ((float)param_1[0x10] - (float)param_1[0xc]) * *(float *)(param_3 + 0x38))
      ;
      FUN_0896c488(param_1,param_2,&local_50,param_1 + 10);
      FUN_0896c488(param_1,param_2,&local_40,&DAT_089da0b0);
      local_30 = local_50 - local_40;
      local_2c = local_4c - local_3c;
      local_28 = local_48 - local_38;
      local_50 = local_30 + *(float *)(param_3 + 0x20);
      local_24 = 0;
      local_44 = 0;
      local_4c = local_2c - *(float *)(param_3 + 0x24);
      local_48 = local_28 - *(float *)(param_3 + 0x28);
      pfVar4 = (float *)param_1[9];
      *pfVar4 = local_50;
      pfVar4[1] = local_4c;
      pfVar4[2] = local_48;
      pfVar4[3] = 0.0;
      FUN_0896c708(param_1,param_2,param_3);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_0896c5bc(param_1,param_2,param_3);
    FUN_0896c708(param_1,param_2,param_3);
  }
  return;
}

