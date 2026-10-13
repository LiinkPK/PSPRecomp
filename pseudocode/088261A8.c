/* Entry 0x088261A8 | file offset 0x00023180 | FUN_088261a8 | bytes 1392 */

void FUN_088261a8(float param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined1 auStack_80 [16];
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  char local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  
  local_54 = 0.01;
  local_50 = param_1;
  local_4c = param_3;
  local_58 = (float)FUN_08823a64(param_2);
  local_5c = (float)FUN_08823a74(param_2);
  local_60 = FUN_08822d30(param_2);
  uVar3 = FUN_0881baa8();
  local_64 = FUN_0881c48c(uVar3);
  local_68 = *(int *)(param_2 + 0x28);
  iVar12 = ((*(uint *)(param_2 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  iVar9 = 0;
  if (0 < iVar12) {
    iVar8 = 0;
    do {
      iVar8 = local_68 + iVar9 * 0x110 + iVar8 * 0x10;
      uVar10 = (int)*(char *)(iVar8 + 0x12a) & 0x3f;
      uVar11 = (int)*(char *)(iVar8 + 0x129) & 0x7f;
      if ((*(byte *)(iVar8 + 299) & 2) == 0) {
        local_70 = *(float *)(iVar8 + 0x120);
        fVar17 = *(float *)(iVar8 + 0xa4);
        if (local_70 != 3.4028235e+38) {
          fVar16 = 0.0;
          if (local_70 < 0.0) {
            fVar16 = 0.0 - local_70;
            local_70 = 0.0;
          }
          iVar4 = 0;
          bVar1 = true;
          if (uVar10 != 0) {
            do {
              if ((*(byte *)(*(int *)(param_2 + 0x2c) + (uVar11 + iVar4) * 0x80 + 0x7f) & 0x10) == 0
                 ) {
                bVar1 = false;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar10);
          }
          if (local_60 == '\x01') {
            fVar18 = -local_58;
            fVar15 = local_50;
            if (local_50 != 0.0) {
              while( true ) {
                fVar14 = fVar15 * fVar17 + fVar18 * fVar15 * fVar15 * 0.5;
                if (-local_70 < fVar14) {
                  fVar16 = fVar14 + fVar16;
                  fVar17 = fVar17 + fVar18 * fVar15;
                  goto LAB_08826628;
                }
                fVar14 = fVar18 * 0.5;
                *(byte *)(iVar8 + 299) = *(byte *)(iVar8 + 299) | 4;
                if ((fVar14 == 0.0) || (fVar17 * fVar17 - fVar14 * 4.0 * local_70 < 0.0))
                goto LAB_08826628;
                fVar13 = (float)FUN_089a47cc();
                fVar2 = local_70;
                local_6c = (-fVar17 - fVar13) / (fVar14 * 2.0);
                iVar4 = *(int *)(param_2 + 0x2c) + uVar11 * 0x80;
                local_70 = 0.0;
                fVar15 = fVar15 - local_6c;
                fVar16 = fVar16 + -fVar2;
                fVar17 = fVar17 + fVar18 * local_6c;
                FUN_089a3868(&local_90,iVar4);
                local_8c = local_8c + (fVar16 - *(float *)(*(int *)(iVar4 + 0x70) + 0x18));
                FUN_08823aa4(*(undefined4 *)(iVar8 + 0xa4),param_2,*(undefined1 *)(iVar8 + 0x128),
                             &local_90);
                if ((local_64 == 0) &&
                   ((((fVar18 != 0.0 && (!bVar1)) && (1.0 <= (-(fVar17 * fVar17) / fVar18) * 0.25))
                    && (iVar7 = FUN_0881e67c(DAT_089d4910,
                                             *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x568),
                                             *(undefined1 *)(iVar8 + 0x128)), iVar7 != 0)))) {
                  if (-1 < *(int *)(iVar7 + 0x18)) {
                    FUN_088a24d4(0,*(undefined4 *)(iVar7 + 0x18),1,0);
                  }
                  if (-1 < *(int *)(iVar7 + 0x1c)) {
                    iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x390) + 0x5c);
                    iVar6 = *(int *)(param_2 + 0x24) + 0x4c8;
                    if (((iVar5 != 0) && (iVar6 != 0)) &&
                       (iVar7 = FUN_088a9de8(iVar5,*(undefined4 *)(iVar7 + 0x1c),iVar6,0,0),
                       iVar7 != 0)) {
                      FUN_089a38c4(auStack_80,iVar8 + 0x90,iVar4);
                      FUN_088a7284(local_90,local_8c,local_88,iVar7);
                    }
                  }
                }
                if (bVar1) {
                  fVar17 = 0.0;
                }
                else {
                  fVar17 = -(local_5c * fVar17);
                }
                if (fVar17 < local_54) break;
                if ((local_6c <= 0.0) || (fVar15 == 0.0)) goto LAB_08826628;
              }
              fVar17 = 0.0;
            }
          }
          else {
            fVar16 = fVar16 + *(float *)(iVar8 + 0xb4);
          }
LAB_08826628:
          local_a0 = 0;
          local_98 = 0;
          local_94 = 0x3f800000;
          local_9c = fVar16;
          FUN_089a3f68(&local_a0,local_4c,&local_a0);
          FUN_089a38c4(iVar8 + 0x90,iVar8 + 0x90,&local_a0);
          iVar4 = 0;
          if (uVar10 == 0) {
            fVar15 = *(float *)(param_2 + 4);
          }
          else {
            do {
              iVar7 = *(int *)(param_2 + 0x2c) + (uVar11 + iVar4) * 0x80;
              iVar4 = iVar4 + 1;
              *(float *)(iVar7 + 4) = *(float *)(iVar7 + 4) + fVar16;
            } while (iVar4 < (int)uVar10);
            fVar15 = *(float *)(param_2 + 4);
          }
          *(float *)(param_2 + 4) = fVar15 + fVar16;
          *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + fVar16;
          *(float *)(iVar8 + 0x120) = local_70;
          *(float *)(iVar8 + 0xa4) = fVar17;
        }
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar9 * 2;
    } while (iVar9 < iVar12);
  }
  return;
}

