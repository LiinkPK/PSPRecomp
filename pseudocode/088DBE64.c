/* Entry 0x088DBE64 | file offset 0x000D8E3C | FUN_088dbe64 | bytes 2372 */

int FUN_088dbe64(float param_1,int param_2,byte *param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  undefined4 local_b0 [5];
  undefined4 local_9c;
  float local_80;
  float local_7c;
  undefined4 local_70 [5];
  undefined4 local_5c;
  float local_40;
  float local_3c;
  
  uVar9 = (uint)*param_3;
  iVar8 = 0;
joined_r0x088dbeb0:
  do {
    do {
      do {
        uVar9 = uVar9 - 1;
        if ((int)uVar9 < 0) {
          return iVar8;
        }
        pbVar2 = (byte *)(*(int *)(param_3 + 0xc) + uVar9 * 8);
      } while ((*pbVar2 == 0xff) ||
              ((*(ushort *)((int)*(short **)(pbVar2 + 4) + **(short **)(pbVar2 + 4) + 6) & 1) != 0))
      ;
      if ((short)(ushort)*pbVar2 < *(short *)(param_2 + 0x18)) {
        iVar4 = 0;
      }
      else {
        iVar4 = (uint)*pbVar2 - (int)*(short *)(param_2 + 0x18);
        if (iVar4 < *(int *)(*(int *)(param_2 + 0xc) + 0x2c)) {
          iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 0xc) + iVar4 * 0x1c;
        }
        else {
          iVar4 = 0;
        }
      }
      iVar5 = 0;
    } while (pbVar2[1] == 0);
    iVar10 = *(int *)(pbVar2 + 4);
    while (psVar11 = (short *)(iVar10 + *(short *)(iVar10 + iVar5 * 2)), (psVar11[3] & 8U) == 0) {
      if (param_1 < (float)(int)*psVar11) goto joined_r0x088dbeb0;
      if (param_1 <= (float)(int)psVar11[1]) {
        if ((psVar11[3] & 0x40U) == 0) {
          if (psVar11[1] == *psVar11) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = (param_1 - (float)(int)*psVar11) / (float)((int)psVar11[1] - (int)*psVar11);
          }
          if (((psVar11[3] & 0x80U) == 0) && ((psVar11[3] & 0x40U) == 0)) {
            fVar13 = 1.0 - fVar14;
            if ((psVar11[3] & 0x400U) == 0) {
              fVar14 = fVar14 * 3.0 * fVar13 * fVar13 * *(float *)(psVar11 + 0x1c) +
                       fVar13 * 3.0 * fVar14 * fVar14 * *(float *)(psVar11 + 0x1e) +
                       fVar14 * fVar14 * fVar14;
            }
            else {
              fVar14 = fVar14 * 3.0 * fVar13 * fVar13 * 0.3 + fVar13 * 3.0 * fVar14 * fVar14 * 0.7 +
                       fVar14 * fVar14 * fVar14;
            }
          }
        }
        else {
          fVar14 = 0.0;
        }
        if (iVar4 == 0) {
          if (*(int *)(DAT_089d7830 + 0x14) < 0xaa) {
            puVar12 = (undefined4 *)
                      (*(int *)(DAT_089d7830 + 0x10) + *(int *)(DAT_089d7830 + 0x14) * 0x50);
            *(int *)(DAT_089d7830 + 0x14) = *(int *)(DAT_089d7830 + 0x14) + 1;
          }
          else {
            puVar12 = (undefined4 *)0x0;
          }
          if (puVar12 == (undefined4 *)0x0) {
            return 0;
          }
          *puVar12 = pbVar2;
          puVar12[1] = psVar11;
          puVar12[3] = fVar14;
          puVar12[2] = param_5;
          piVar3 = *(int **)(param_2 + 0xc);
          if ((int)(uint)*pbVar2 < piVar3[9]) {
            piVar6 = (int *)(piVar3[1] + (uint)*pbVar2 * 8);
          }
          else {
            piVar6 = (int *)0x0;
          }
          iVar4 = 0;
          if (0 < *piVar6) {
            do {
              uVar7 = (uint)*(byte *)(piVar6[1] + iVar4 * 10 + 1);
              if ((int)uVar7 < piVar3[8]) {
                if (*(short *)(*piVar3 + uVar7 * 4) == 1) {
                  iVar5 = *piVar3 + (int)*(short *)(*piVar3 + uVar7 * 4 + 2);
                }
                else {
                  iVar5 = 0;
                }
              }
              else {
                iVar5 = 0;
              }
              iVar10 = iVar8;
              if (iVar5 != 0) {
                if (*(float *)(iVar5 + 0x18) != 0.0) {
                  iVar8 = iVar8 + 4;
                }
                iVar10 = iVar8;
                if ((*(float *)(iVar5 + 0x1c) != 0.0) &&
                   (iVar10 = iVar8 + 4, *(float *)(iVar5 + 0x18) != 0.0)) {
                  iVar10 = iVar8 + 8;
                }
              }
              iVar4 = iVar4 + 1;
              iVar8 = iVar10 + 4;
            } while (iVar4 < *piVar6);
          }
          if (((psVar11[3] & 0x40U) == 0) &&
             (((psVar11[3] & 0x10U) == 0 || (*(float *)(psVar11 + 4) != fVar14)))) {
            FUN_088db650(fVar14,param_2,puVar12 + 4,psVar11);
          }
          else {
            FUN_089a3ebc(puVar12 + 4);
            puVar12[4] = *(undefined4 *)(psVar11 + 8);
            puVar12[9] = *(undefined4 *)(psVar11 + 10);
            puVar12[0x10] = (float)(int)psVar11[6];
            puVar12[0x11] = (float)(int)psVar11[7];
          }
          if (param_4 != 0) {
            puVar12 = puVar12 + 4;
            FUN_089a3fb8(puVar12,puVar12,param_4);
            FUN_089a44ac(puVar12,puVar12);
          }
        }
        else {
          if (((psVar11[3] & 0x40U) == 0) &&
             (((psVar11[3] & 0x10U) == 0 || (*(float *)(psVar11 + 4) != fVar14)))) {
            FUN_088db650(fVar14,param_2,local_70,psVar11);
          }
          else {
            FUN_089a3ebc(local_70);
            local_70[0] = *(undefined4 *)(psVar11 + 8);
            local_5c = *(undefined4 *)(psVar11 + 10);
            local_40 = (float)(int)psVar11[6];
            local_3c = (float)(int)psVar11[7];
          }
          if (param_4 == 0) {
            sVar1 = *(short *)(iVar4 + 2);
          }
          else {
            FUN_089a3fb8(local_70,local_70,param_4);
            sVar1 = *(short *)(iVar4 + 2);
          }
          iVar4 = FUN_088dbe64((float)(int)sVar1 * fVar14,param_2,iVar4,local_70,param_5);
          iVar8 = iVar8 + iVar4;
        }
        goto joined_r0x088dbeb0;
      }
      iVar5 = iVar5 + 1;
      if ((int)(uint)pbVar2[1] <= iVar5) goto joined_r0x088dbeb0;
      iVar10 = *(int *)(pbVar2 + 4);
    }
    if ((psVar11[3] & 0x40U) == 0) {
      fVar14 = ((param_1 - (float)(int)param_1) + (float)((int)param_1 % (int)psVar11[1])) /
               (float)(int)psVar11[1];
      if (((psVar11[3] & 0x80U) == 0) && ((psVar11[3] & 0x40U) == 0)) {
        fVar13 = 1.0 - fVar14;
        if ((psVar11[3] & 0x400U) == 0) {
          fVar14 = fVar14 * 3.0 * fVar13 * fVar13 * *(float *)(psVar11 + 0x1c) +
                   fVar13 * 3.0 * fVar14 * fVar14 * *(float *)(psVar11 + 0x1e) +
                   fVar14 * fVar14 * fVar14;
        }
        else {
          fVar14 = fVar14 * 3.0 * fVar13 * fVar13 * 0.3 + fVar13 * 3.0 * fVar14 * fVar14 * 0.7 +
                   fVar14 * fVar14 * fVar14;
        }
      }
    }
    else {
      fVar14 = 0.0;
    }
    if (iVar4 == 0) {
      if (*(int *)(DAT_089d7830 + 0x14) < 0xaa) {
        puVar12 = (undefined4 *)
                  (*(int *)(DAT_089d7830 + 0x10) + *(int *)(DAT_089d7830 + 0x14) * 0x50);
        *(int *)(DAT_089d7830 + 0x14) = *(int *)(DAT_089d7830 + 0x14) + 1;
      }
      else {
        puVar12 = (undefined4 *)0x0;
      }
      if (puVar12 == (undefined4 *)0x0) {
        return 0;
      }
      *puVar12 = pbVar2;
      puVar12[1] = psVar11;
      puVar12[3] = fVar14;
      puVar12[2] = param_5;
      if (((psVar11[3] & 0x40U) == 0) &&
         (((psVar11[3] & 0x10U) == 0 || (*(float *)(psVar11 + 4) != fVar14)))) {
        FUN_088db650(fVar14,param_2,puVar12 + 4,psVar11);
      }
      else {
        FUN_089a3ebc(puVar12 + 4);
        puVar12[4] = *(undefined4 *)(psVar11 + 8);
        puVar12[9] = *(undefined4 *)(psVar11 + 10);
        puVar12[0x10] = (float)(int)psVar11[6];
        puVar12[0x11] = (float)(int)psVar11[7];
      }
      if (param_4 != 0) {
        FUN_089a3fb8(puVar12 + 4,puVar12 + 4,param_4);
      }
    }
    else {
      if (((psVar11[3] & 0x40U) == 0) &&
         (((psVar11[3] & 0x10U) == 0 || (*(float *)(psVar11 + 4) != fVar14)))) {
        FUN_088db650(fVar14,param_2,local_b0,psVar11);
      }
      else {
        FUN_089a3ebc(local_b0);
        local_b0[0] = *(undefined4 *)(psVar11 + 8);
        local_9c = *(undefined4 *)(psVar11 + 10);
        local_80 = (float)(int)psVar11[6];
        local_7c = (float)(int)psVar11[7];
      }
      if (param_4 == 0) {
        sVar1 = *(short *)(iVar4 + 2);
      }
      else {
        FUN_089a3fb8(local_b0,local_b0,param_4);
        sVar1 = *(short *)(iVar4 + 2);
      }
      iVar4 = FUN_088dbe64((float)(int)sVar1 * fVar14,param_2,iVar4,local_b0,param_5);
      iVar8 = iVar8 + iVar4;
    }
  } while( true );
}

