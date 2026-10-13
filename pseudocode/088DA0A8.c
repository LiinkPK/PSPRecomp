/* Entry 0x088DA0A8 | file offset 0x000D7080 | FUN_088da0a8 | bytes 1144 */

void FUN_088da0a8(float *param_1,int param_2,float *param_3,byte *param_4)

{
  ushort uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar3 = param_1[9];
  if (((*(byte *)((int)fVar3 + 0x14) & 1) == 0) || (((uint)param_1[8] & 0x8000) == 0)) {
    if (param_4 != (byte *)0x0) {
      param_4[3] = 0;
    }
  }
  else {
    if ((int)*(short *)(param_1 + 3) < *(int *)(*(int *)((int)fVar3 + 0xc) + 0x2c)) {
      pbVar6 = (byte *)(*(int *)(*(int *)((int)fVar3 + 0xc) + 0xc) + *(short *)(param_1 + 3) * 0x1c)
      ;
    }
    else {
      pbVar6 = (byte *)0x0;
    }
    iVar4 = ((uint)*pbVar6 - param_2) + -1;
    if (iVar4 < 0) {
      if (param_4 != (byte *)0x0) {
        param_4[3] = 0;
      }
    }
    else {
      iVar7 = *(int *)(pbVar6 + 0xc) + iVar4 * 8;
      uVar5 = (uint)*(byte *)(iVar7 + 1);
      iVar4 = 0;
      if (uVar5 != 0) {
        psVar8 = *(short **)(iVar7 + 4);
        fVar11 = *param_1;
        psVar9 = psVar8;
        do {
          psVar10 = (short *)((int)psVar8 + (int)*psVar9);
          fVar12 = (float)(int)*psVar10;
          if (fVar11 < fVar12) break;
          if (fVar11 <= (float)(int)psVar10[1]) {
            uVar1 = psVar10[3];
            if ((uVar1 & 0x40) == 0) {
              iVar4 = (int)psVar10[1] - (int)*psVar10;
              if (iVar4 == 0) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (fVar11 - fVar12) / (float)iVar4;
              }
              if ((uVar1 & 0x80) == 0) {
                fVar12 = 1.0 - fVar11;
                fVar14 = fVar11 * fVar11 * fVar11;
                fVar13 = fVar11 * 3.0 * fVar12 * fVar12;
                fVar11 = fVar12 * 3.0 * fVar11 * fVar11;
                if ((uVar1 & 0x400) == 0) {
                  fVar11 = fVar13 * *(float *)(psVar10 + 0x1c) + fVar11 * *(float *)(psVar10 + 0x1e)
                           + fVar14;
                }
                else {
                  fVar11 = fVar13 * 0.3 + fVar11 * 0.7 + fVar14;
                }
              }
              if (((uVar1 & 0x10) == 0) || (*(float *)(psVar10 + 4) != fVar11)) {
                FUN_088db650(fVar11,fVar3,param_3,psVar10);
              }
              else {
                *param_3 = *(float *)(psVar10 + 8);
                param_3[5] = *(float *)(psVar10 + 10);
                param_3[0xc] = (float)(int)psVar10[6];
                param_3[0xd] = (float)(int)psVar10[7];
              }
              if (param_4 != (byte *)0x0) {
                iVar4 = 0;
                do {
                  iVar7 = iVar4 + 0x24;
                  bVar2 = *(byte *)((int)psVar10 + iVar4 + 0x1c);
                  pbVar6 = param_4 + iVar4;
                  iVar4 = iVar4 + 1;
                  *pbVar6 = (char)(int)((float)(int)((uint)*(byte *)((int)psVar10 + iVar7) -
                                                    (uint)bVar2) * fVar11) + bVar2;
                } while (iVar4 < 4);
              }
            }
            else {
              *param_3 = *(float *)(psVar10 + 8);
              param_3[5] = *(float *)(psVar10 + 10);
              param_3[0xc] = (float)(int)psVar10[6];
              param_3[0xd] = (float)(int)psVar10[7];
              if (param_4 != (byte *)0x0) {
                if (*(char *)((int)psVar10 + 5) == '\x06') {
                  *param_4 = 0x80;
                  param_4[1] = 0x80;
                  param_4[2] = 0x80;
                  param_4[3] = 0xff;
                }
                else {
                  *param_4 = *(byte *)(psVar10 + 0xc);
                  param_4[1] = *(byte *)((int)psVar10 + 0x19);
                  param_4[2] = *(byte *)(psVar10 + 0xd);
                  param_4[3] = *(byte *)((int)psVar10 + 0x1b);
                }
              }
            }
            param_3[0xc] = param_3[0xc] + param_1[4];
            param_3[0xd] = param_3[0xd] + param_1[5];
            *param_3 = *param_3 * param_1[6];
            param_3[5] = param_3[5] * param_1[7];
            if (param_4 == (byte *)0x0) {
              return;
            }
            iVar4 = (uint)param_4[3] * (uint)*(byte *)((int)param_1 + 0x2b);
            bVar2 = (byte)((uint)iVar4 >> 8);
            if (0xff < (uint)(iVar4 >> 8)) {
              bVar2 = 0xff;
            }
            param_4[3] = bVar2;
            if (param_4[3] == 0) {
              return;
            }
            uVar5 = (int)((uint)*param_4 * (uint)*(byte *)(param_1 + 10)) >> 7;
            if (0xff < uVar5) {
              uVar5 = 0xff;
            }
            *param_4 = (byte)uVar5;
            uVar5 = (int)((uint)param_4[1] * (uint)*(byte *)((int)param_1 + 0x29)) >> 7;
            if (uVar5 < 0x100) {
              param_4[1] = (byte)uVar5;
            }
            else {
              param_4[1] = 0xff;
            }
            uVar5 = (int)((uint)param_4[2] * (uint)*(byte *)((int)param_1 + 0x2a)) >> 7;
            if (0xff < uVar5) {
              uVar5 = 0xff;
            }
            param_4[2] = (byte)uVar5;
            return;
          }
          iVar4 = iVar4 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar4 < (int)uVar5);
      }
      if (param_4 != (byte *)0x0) {
        param_4[3] = 0;
      }
    }
  }
  return;
}

