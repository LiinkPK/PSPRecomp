/* Entry 0x0898D824 | file offset 0x0018A7FC | FUN_0898d824 | bytes 1264 */

void FUN_0898d824(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_80;
  float local_7c;
  float local_78;
  
  if ((param_1[0x1a] != -NAN) && (*(char *)(param_1 + 0x16) != '\0')) {
    if ((*(char *)((int)param_1 + 0x59) == '\0') &&
       (fVar1 = param_1[0x14], param_1[0x14] = (float)((int)fVar1 + -1),
       (float)((int)fVar1 + -1) == 0.0)) {
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
    else {
      FUN_0898e78c(param_1,param_2);
      local_78 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2] +
                 param_2[3] * param_2[3];
      if (local_78 == 0.0) {
        local_80 = 0.0;
        local_7c = 0.0;
        local_78 = 0.0;
      }
      else {
        local_78 = SQRT(local_78);
        local_80 = *param_2 / local_78;
        local_7c = param_2[1] / local_78;
        local_78 = param_2[2] / local_78;
      }
      fVar1 = param_1[0xc];
      param_1[8] = param_1[8] + local_80 * fVar1;
      param_1[9] = param_1[9] + -(local_7c * fVar1);
      param_1[10] = param_1[10] + -(local_78 * fVar1);
      param_1[0xb] = 1.0;
      param_1[0xc] = param_1[0xc] + param_2[0x1e];
      param_1[0xd] = param_1[0xd] + param_1[0xf];
      param_1[0xe] = param_1[0xe] + param_1[0x10];
      param_1[0xf] = param_1[0xf] + param_2[0x10];
      param_1[0x10] = param_1[0x10] + param_2[0x11];
      *param_1 = *param_1 + param_1[4];
      param_1[1] = param_1[1] + param_1[5];
      param_1[2] = param_1[2] + param_1[6];
      param_1[3] = param_1[3] + param_1[7];
      fVar4 = param_2[9];
      fVar3 = param_2[10];
      fVar1 = param_2[0xb];
      param_1[4] = param_1[4] + param_2[8];
      param_1[5] = param_1[5] + fVar4;
      param_1[6] = param_1[6] + fVar3;
      param_1[7] = param_1[7] + fVar1;
      fVar3 = param_1[8] - -*(float *)(DAT_089da27c + 0x30);
      fVar1 = param_1[9] - -*(float *)(DAT_089da27c + 0x34);
      fVar4 = param_1[10] - -*(float *)(DAT_089da27c + 0x38);
      fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4;
      if (fVar1 == 0.0) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      fVar5 = param_2[0x16];
      fVar3 = param_2[0x17];
      fVar2 = param_2[0x18];
      fVar4 = param_2[0x19];
      if ((fVar2 <= fVar1) || (fVar1 <= fVar3 + fVar5)) {
        if ((fVar1 < fVar2) || (fVar4 + fVar2 < fVar1)) {
          if (fVar5 <= fVar1) {
            if (fVar1 <= fVar3 + fVar5) {
              if (fVar3 == 0.0) {
                fVar3 = 1.0;
              }
              else {
                fVar3 = (fVar1 - fVar5) / fVar3;
              }
              if (1.0 < fVar3) {
                fVar3 = 1.0;
              }
            }
            else {
              fVar3 = 0.0;
            }
          }
          else {
            fVar3 = 0.0;
          }
        }
        else {
          if (fVar4 == 0.0) {
            fVar3 = 1.0;
          }
          else {
            fVar3 = 1.0 - (fVar1 - fVar2) / fVar4;
          }
          if (fVar3 < 0.0) {
            fVar3 = 0.0;
          }
        }
      }
      else {
        fVar3 = 1.0;
      }
      fVar1 = fVar3;
      if (param_1[0x15] != 0.0) {
        fVar1 = 1.0 - (float)(int)param_1[0x15] / (float)*(ushort *)((int)param_2 + 0x8a);
        if (fVar3 <= fVar1) {
          fVar1 = fVar3;
        }
        param_1[0x15] = (float)((int)param_1[0x15] + -1);
      }
      fVar3 = fVar1;
      if ((((*(char *)((int)param_1 + 0x59) == '\0') && (*(short *)(param_2 + 0x23) != 0)) &&
          ((int)param_1[0x14] <= (int)(uint)*(ushort *)(param_2 + 0x23))) &&
         (fVar3 = (float)(int)param_1[0x14] / (float)*(ushort *)(param_2 + 0x23), fVar1 <= fVar3)) {
        fVar3 = fVar1;
      }
      param_1[0x18] = fVar3;
    }
  }
  return;
}

