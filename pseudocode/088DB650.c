/* Entry 0x088DB650 | file offset 0x000D8628 | FUN_088db650 | bytes 2068 */

void FUN_088db650(float param_1,undefined4 param_2,float *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  
  FUN_089a3ebc(param_3);
  sVar1 = *(short *)(param_4 + 0x18);
  sVar2 = *(short *)(param_4 + 0x1a);
  if ((*(ushort *)(param_4 + 6) & 0x200) == 0) {
    uVar4 = *(ushort *)(param_4 + 6);
    *(short *)(param_4 + 0xc) =
         (short)(int)((float)(int)sVar1 +
                     (float)((int)*(short *)(param_4 + 0x20) - (int)sVar1) * param_1);
    *(short *)(param_4 + 0xe) =
         (short)(int)((float)(int)sVar2 +
                     (float)((int)*(short *)(param_4 + 0x22) - (int)sVar2) * param_1);
  }
  else {
    uVar4 = *(ushort *)(param_4 + 6);
    *(short *)(param_4 + 0xc) = sVar1;
    *(short *)(param_4 + 0xe) = sVar2;
  }
  if ((uVar4 & 0x20) == 0) {
    *param_3 = *(float *)(param_4 + 0x28) +
               (*(float *)(param_4 + 0x30) - *(float *)(param_4 + 0x28)) * param_1;
    param_3[5] = *(float *)(param_4 + 0x2c) +
                 (*(float *)(param_4 + 0x34) - *(float *)(param_4 + 0x2c)) * param_1;
  }
  if ((*(char *)(param_4 + 5) == '\x02') || (*(char *)(param_4 + 5) == '\x03')) {
    if (*(short *)(param_4 + 0x40) != 0) {
      sVar1 = *(short *)(param_4 + 0x48);
      sVar2 = *(short *)(param_4 + 0x4c);
      sVar3 = *(short *)(param_4 + 0xc);
      fVar5 = (float)FUN_089a2c70((float)(*(short *)(param_4 + 0x40) * 2) * param_1 * 3.1415927 +
                                  (float)(int)*(short *)(param_4 + 0x44) * 3.1415927 * 0.5);
      *(short *)(param_4 + 0xc) =
           (short)(int)((float)(int)sVar3 +
                       ((float)(int)sVar1 + (float)((int)sVar2 - (int)sVar1) * param_1) * fVar5);
    }
    if (*(short *)(param_4 + 0x42) != 0) {
      sVar1 = *(short *)(param_4 + 0x4a);
      sVar2 = *(short *)(param_4 + 0x4e);
      sVar3 = *(short *)(param_4 + 0xe);
      fVar5 = (float)FUN_089a2c70((float)(*(short *)(param_4 + 0x42) * 2) * param_1 * 3.1415927 +
                                  (float)(int)*(short *)(param_4 + 0x46) * 3.1415927 * 0.5);
      *(short *)(param_4 + 0xe) =
           (short)(int)((float)(int)sVar3 +
                       ((float)(int)sVar1 + (float)((int)sVar2 - (int)sVar1) * param_1) * fVar5);
    }
  }
  if ((*(ushort *)(param_4 + 6) & 0x10) == 0) {
    if (*(char *)(param_4 + 5) == '\x01') {
      param_3[0xc] = (float)(int)*(short *)(param_4 + 0x52) +
                     (float)((int)*(short *)(param_4 + 0x56) - (int)*(short *)(param_4 + 0x52)) *
                     param_1;
      param_3[0xd] = (float)(int)*(short *)(param_4 + 0x54) +
                     (float)((int)*(short *)(param_4 + 0x58) - (int)*(short *)(param_4 + 0x54)) *
                     param_1;
      fVar5 = ((param_1 * (float)((*(short *)(param_4 + 0x44) * 0x168 +
                                  (int)*(short *)(param_4 + 0x50)) - (int)*(short *)(param_4 + 0x4a)
                                 ) + (float)(int)*(short *)(param_4 + 0x4a)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0x40);
      }
      else {
        FUN_089a40c8(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0x40);
      }
      fVar5 = ((param_1 * (float)((sVar1 * 0x168 + (int)*(short *)(param_4 + 0x4c)) -
                                 (int)*(short *)(param_4 + 0x46)) +
               (float)(int)*(short *)(param_4 + 0x46)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0x42);
      }
      else {
        FUN_089a4180(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0x42);
      }
      fVar5 = ((param_1 * (float)((sVar1 * 0x168 + (int)*(short *)(param_4 + 0x4e)) -
                                 (int)*(short *)(param_4 + 0x48)) +
               (float)(int)*(short *)(param_4 + 0x48)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0xc);
      }
      else {
        FUN_089a4124(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0xc);
      }
      fVar6 = param_3[0xd];
      fVar5 = param_3[0xc] + (float)(int)sVar1;
    }
    else if (*(char *)(param_4 + 5) == '\b') {
      param_3[0xc] = (float)(int)*(short *)(param_4 + 0x4a) +
                     (float)((int)*(short *)(param_4 + 0x4e) - (int)*(short *)(param_4 + 0x4a)) *
                     param_1;
      param_3[0xd] = (float)(int)*(short *)(param_4 + 0x4c) +
                     (float)((int)*(short *)(param_4 + 0x50) - (int)*(short *)(param_4 + 0x4c)) *
                     param_1;
      fVar5 = ((param_1 * (float)((*(short *)(param_4 + 0x3c) * 0x168 +
                                  (int)*(short *)(param_4 + 0x48)) - (int)*(short *)(param_4 + 0x42)
                                 ) + (float)(int)*(short *)(param_4 + 0x42)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0x38);
      }
      else {
        FUN_089a40c8(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0x38);
      }
      fVar5 = ((param_1 * (float)((sVar1 * 0x168 + (int)*(short *)(param_4 + 0x44)) -
                                 (int)*(short *)(param_4 + 0x3e)) +
               (float)(int)*(short *)(param_4 + 0x3e)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0x3a);
      }
      else {
        FUN_089a4180(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0x3a);
      }
      fVar5 = ((param_1 * (float)((sVar1 * 0x168 + (int)*(short *)(param_4 + 0x46)) -
                                 (int)*(short *)(param_4 + 0x40)) +
               (float)(int)*(short *)(param_4 + 0x40)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0xc);
      }
      else {
        FUN_089a4124(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0xc);
      }
      fVar6 = param_3[0xd];
      fVar5 = param_3[0xc] + (float)(int)sVar1;
    }
    else {
      param_3[0xc] = (float)(int)*(short *)(param_4 + 0x62) +
                     (float)((int)*(short *)(param_4 + 0x66) - (int)*(short *)(param_4 + 0x62)) *
                     param_1;
      param_3[0xd] = (float)(int)*(short *)(param_4 + 100) +
                     (float)((int)*(short *)(param_4 + 0x68) - (int)*(short *)(param_4 + 100)) *
                     param_1;
      fVar5 = ((param_1 * (float)((*(short *)(param_4 + 0x54) * 0x168 +
                                  (int)*(short *)(param_4 + 0x60)) - (int)*(short *)(param_4 + 0x5a)
                                 ) + (float)(int)*(short *)(param_4 + 0x5a)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0x50);
      }
      else {
        FUN_089a40c8(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0x50);
      }
      fVar5 = ((param_1 * (float)((sVar1 * 0x168 + (int)*(short *)(param_4 + 0x5c)) -
                                 (int)*(short *)(param_4 + 0x56)) +
               (float)(int)*(short *)(param_4 + 0x56)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0x52);
      }
      else {
        FUN_089a4180(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0x52);
      }
      fVar5 = ((param_1 * (float)((sVar1 * 0x168 + (int)*(short *)(param_4 + 0x5e)) -
                                 (int)*(short *)(param_4 + 0x58)) +
               (float)(int)*(short *)(param_4 + 0x58)) * 3.1415927) / 180.0;
      if (fVar5 == 0.0) {
        sVar1 = *(short *)(param_4 + 0xc);
      }
      else {
        FUN_089a4124(fVar5,param_3,param_3);
        sVar1 = *(short *)(param_4 + 0xc);
      }
      fVar6 = param_3[0xd];
      fVar5 = param_3[0xc] + (float)(int)sVar1;
    }
    param_3[0xc] = fVar5;
    param_3[0xd] = fVar6 + (float)(int)*(short *)(param_4 + 0xe);
  }
  else {
    param_3[0xc] = (float)(int)*(short *)(param_4 + 0xc);
    param_3[0xd] = (float)(int)*(short *)(param_4 + 0xe);
    *(float *)(param_4 + 8) = param_1;
    *(float *)(param_4 + 0x10) = *param_3;
    *(float *)(param_4 + 0x14) = param_3[5];
  }
  return;
}

