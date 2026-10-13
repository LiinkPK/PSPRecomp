/* Entry 0x0896808C | file offset 0x00165064 | FUN_0896808c | bytes 1240 */

void FUN_0896808c(int *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 auVar2 [12];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  fVar8 = (float)param_1[0xe] + *(float *)(*(int *)(param_2 + 0x88) + 0x160);
  bVar1 = (float)param_1[0xf] + 1.0 <= fVar8;
  param_1[0xe] = (int)fVar8;
  if (bVar1) {
    param_1[0xf] = param_1[0xe];
  }
  if ((char)param_1[2] == '\0') {
    if (bVar1) {
      iVar3 = *(short *)(param_3 + 3) + -1;
      iVar5 = iVar3 * 0x20;
      for (iVar4 = iVar3; 0 < iVar4; iVar4 = iVar4 + -1) {
        puVar7 = (undefined4 *)(*param_1 + iVar5);
        iVar6 = *param_1 + iVar5;
        auVar2 = vadd_t(*(undefined1 (*) [12])(iVar6 + -0x20),*(undefined1 (*) [12])(iVar6 + -0x10))
        ;
        uVar11 = vone_s();
        *puVar7 = auVar2._0_4_;
        puVar7[1] = auVar2._4_4_;
        puVar7[2] = auVar2._8_4_;
        puVar7[3] = uVar11;
        iVar6 = *param_1 + iVar5;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + -0x10);
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + -0xc);
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + -8);
        *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + -4);
        iVar5 = iVar5 + -0x20;
      }
      iVar4 = iVar3 * 0x20;
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        puVar7 = (undefined4 *)(param_1[1] + iVar4);
        iVar5 = param_1[1] + iVar4;
        auVar2 = vadd_t(*(undefined1 (*) [12])(iVar5 + -0x20),*(undefined1 (*) [12])(iVar5 + -0x10))
        ;
        uVar11 = vone_s();
        *puVar7 = auVar2._0_4_;
        puVar7[1] = auVar2._4_4_;
        puVar7[2] = auVar2._8_4_;
        puVar7[3] = uVar11;
        iVar5 = param_1[1] + iVar4;
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + -0x10);
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + -0xc);
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + -8);
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + -4);
        iVar4 = iVar4 + -0x20;
      }
    }
    local_64 = 0x3f800000;
    local_70 = *param_3;
    local_6c = -(float)param_3[1];
    local_68 = -(float)param_3[2];
    FUN_08967b64(param_1,param_2,*param_1,&local_70);
    local_70 = param_3[4];
    local_6c = -(float)param_3[5];
    local_68 = -(float)param_3[6];
    FUN_08967b64(param_1,param_2,param_1[1],&local_70);
    if (bVar1) {
      iVar4 = param_1[0xb];
      param_1[0xb] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        param_1[0xb] = (uint)*(byte *)((int)param_3 + 0xe);
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        param_1[7] = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                           (float)param_3[0x10] - (float)param_3[0x10]);
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        param_1[8] = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                           (float)param_3[0x11] - (float)param_3[0x11]);
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        param_1[9] = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                           (float)param_3[0x12] - (float)param_3[0x12]);
      }
      param_1[3] = (int)((float)param_1[3] +
                        ((float)param_1[7] - (float)param_1[3]) * (float)param_3[0xc]);
      param_1[4] = (int)((float)param_1[4] +
                        ((float)param_1[8] - (float)param_1[4]) * (float)param_3[0xd]);
      param_1[5] = (int)((float)param_1[5] +
                        ((float)param_1[9] - (float)param_1[5]) * (float)param_3[0xe]);
      FUN_08967b64(param_1,param_2,&local_60,param_1 + 3);
      FUN_08967b64(param_1,param_2,&local_50,&DAT_089da0a0);
      fVar8 = (local_60 - local_50) + (float)param_3[8];
      fVar9 = (local_5c - local_4c) - (float)param_3[9];
      fVar10 = (local_58 - local_48) - (float)param_3[10];
      iVar4 = *param_1;
      *(float *)(iVar4 + 0x10) = fVar8;
      *(float *)(iVar4 + 0x14) = fVar9;
      *(float *)(iVar4 + 0x18) = fVar10;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      iVar4 = param_1[1];
      *(float *)(iVar4 + 0x10) = fVar8;
      *(float *)(iVar4 + 0x14) = fVar9;
      *(float *)(iVar4 + 0x18) = fVar10;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_08967c98(param_1,param_2,param_3);
  }
  return;
}

