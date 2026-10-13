/* Entry 0x0890F668 | file offset 0x0010C640 | FUN_0890f668 | bytes 3028 */

/* WARNING: Removing unreachable block (ram,0x0890f6f8) */

void FUN_0890f668(int *param_1)

{
  bool bVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined4 uVar10;
  int *piVar11;
  code *pcVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_130 [32];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float local_a0 [3];
  undefined4 local_94;
  float local_90 [3];
  undefined4 local_84;
  undefined1 auStack_80 [64];
  undefined4 local_40;
  uint local_38;
  
  if (*DAT_089d8388 != 0) {
    iVar7 = FUN_0891705c(0xffffffff);
    iVar6 = DAT_089d83d8;
    bVar3 = false;
    if (*(int *)(DAT_089d83d8 + 0x68) != 3) {
      uVar14 = 0xffffffff;
      *param_1 = -1;
      iVar15 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      do {
        if ((*(int *)(iVar6 + iVar15 * 4 + 0x704) != 0) &&
           (iVar16 = FUN_08837990(*(undefined4 *)(iVar6 + iVar15 * 4 + 0x704)), iVar16 == 0)) {
          FUN_089a38e0(&local_b0,*(int *)(iVar6 + iVar15 * 4 + 0x704) + 0x80,
                       *(int *)(iVar6 + 0x6d0) + 0x80);
          auVar5._4_4_ = uStack_ac;
          auVar5._0_4_ = local_b0;
          auVar5._8_4_ = uStack_a8;
          auVar4._4_4_ = uStack_ac;
          auVar4._0_4_ = local_b0;
          auVar4._8_4_ = uStack_a8;
          auVar2._4_4_ = uStack_ac;
          auVar2._0_4_ = local_b0;
          auVar2._8_4_ = uStack_a8;
          uVar10 = vdot_t(auVar2,auVar4);
          uVar20 = vzero_s();
          uVar21 = vcmp_s(8,uVar10,local_b0);
          local_40 = vsqrt_s(uVar10);
          vrcp_s(local_40);
          uVar10 = vcmovt_s(uVar20,(byte)uVar21 & 1);
          vpfxd(4,4,4,5);
          auVar2 = vscl_t(auVar5,uVar10);
          local_b0 = auVar2._0_4_;
          uStack_ac = auVar2._4_4_;
          uStack_a8 = auVar2._8_4_;
          iVar16 = FUN_08916c34(iVar6);
          if (iVar16 != 0) {
            fVar19 = (float)FUN_08867fec(*(int *)(iVar6 + 0x6d0) + 0x90,&local_b0);
            if ((fVar19 < 1.5707964) &&
               (fVar19 = (float)FUN_08837ac4(*(undefined4 *)(iVar6 + 0x6d0),
                                             *(undefined4 *)(iVar6 + iVar15 * 4 + 0x704)),
               fVar19 < 3.0)) {
              iVar16 = iVar6 + iVar15 * 4;
              FUN_0883739c(*(undefined4 *)(iVar16 + 0x704));
              FUN_0891166c(0x3fc00000,DAT_089d83a8,*(undefined4 *)(iVar16 + 0x704),1);
              iVar16 = FUN_088729a0(0);
              pcVar12 = *(code **)(*(int *)(iVar16 + 0x34) + 0x14);
              iVar16 = (*pcVar12)(iVar16 + *(short *)(*(int *)(iVar16 + 0x34) + 0x10),pcVar12,4,0);
              if (iVar16 != 0) {
                uVar14 = (uint)**(byte **)(*(int *)(iVar6 + iVar15 * 4 + 0x704) + 0x5a4);
                *(undefined1 *)((int)param_1 + 0xd) = 1;
                FUN_088d4bf4(1);
                break;
              }
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 4);
      iVar15 = 0;
      iVar16 = 0;
      do {
        local_130[iVar15] = 0;
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x20);
      iVar15 = 0;
      while (iVar15 = FUN_0890f544(param_1,iVar15,1), iVar15 != 0) {
        uVar18 = 0;
        if (((*(ushort *)(iVar15 + 0xe) & 1) != 0) || (*(byte *)(iVar15 + 2) == uVar14)) {
          switch(*(undefined1 *)(iVar15 + 4)) {
          case 1:
            if ((char)param_1[3] != '\0') {
              iVar17 = 0;
              do {
                if (*(int *)(iVar6 + iVar17 * 4 + 0x704) != 0) {
                  iVar8 = FUN_08837990(*(undefined4 *)(iVar6 + iVar17 * 4 + 0x704));
                  if ((iVar8 == 0) &&
                     (*(char *)(iVar15 + 2) ==
                      **(char **)(*(int *)(iVar6 + iVar17 * 4 + 0x704) + 0x5a4))) {
                    *param_1 = iVar17;
                    break;
                  }
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < 4);
              if (-1 < *param_1) {
                bVar3 = true;
                uVar18 = 1;
              }
            }
            break;
          case 2:
          case 3:
            iVar17 = 0;
            do {
              if (*(int *)(iVar6 + iVar17 * 4 + 0x704) != 0) {
                iVar8 = FUN_08837990(*(undefined4 *)(iVar6 + iVar17 * 4 + 0x704));
                if ((iVar8 == 0) &&
                   (*(ushort *)(iVar15 + 0x10) ==
                    (ushort)**(byte **)(*(int *)(iVar6 + iVar17 * 4 + 0x704) + 0x5a4))) {
                  if (*(char *)(iVar15 + 4) == '\x02') {
                    fVar19 = (float)FUN_08837ac4(*(undefined4 *)(iVar6 + 0x6d0),
                                                 *(undefined4 *)(iVar6 + iVar17 * 4 + 0x704));
                    if (fVar19 < (float)(int)*(short *)(iVar15 + 0x12)) {
                      bVar3 = true;
                      uVar18 = 1;
                      break;
                    }
                  }
                  else {
                    fVar19 = (float)FUN_08837ac4(*(undefined4 *)(iVar6 + 0x6d0),
                                                 *(undefined4 *)(iVar6 + iVar17 * 4 + 0x704));
                    if ((float)(int)*(short *)(iVar15 + 0x12) < fVar19) {
                      bVar3 = true;
                      uVar18 = 1;
                      break;
                    }
                  }
                }
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < 4);
            break;
          case 4:
          case 5:
            iVar17 = func_0x08b4571c(*(undefined4 *)(iVar6 + 0x8c),(int)*(short *)(iVar15 + 0x10));
            if (iVar17 != 0) {
              iVar8 = *(int *)(iVar6 + 0x6d0);
              local_94 = *(undefined4 *)(iVar8 + 0x8c);
              local_a0[0] = *(float *)(iVar8 + 0x80) - *(float *)(*(int *)(iVar17 + 4) + 0x10);
              local_a0[1] = 0.0;
              local_a0[2] = *(float *)(iVar8 + 0x88) - *(float *)(*(int *)(iVar17 + 4) + 0x14);
              fVar19 = (float)FUN_089a3bf8(local_a0);
              if (fVar19 < (float)(int)*(short *)(iVar15 + 0x12)) {
                if (*(char *)(iVar15 + 4) == '\x05') {
                  iVar17 = (**(code **)(*(int *)(iVar17 + 0x14) + 0x1c))
                                     (iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 0x18));
                  if (iVar17 != 0) {
                    bVar3 = true;
                  }
                  uVar18 = (uint)(iVar17 != 0);
                }
                else {
                  bVar3 = true;
                  uVar18 = 1;
                }
              }
            }
            break;
          case 6:
            iVar17 = func_0x08b4571c(*(undefined4 *)(iVar6 + 0x8c),(int)*(short *)(iVar15 + 0x10));
            if (iVar17 != 0) {
              local_38 = 0;
              (**(code **)(*(int *)(iVar17 + 0x14) + 0x14))
                        (iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 0x10));
              uVar20 = *(undefined4 *)(iVar6 + 0x6d0);
              uVar10 = (**(code **)(*(int *)(iVar17 + 0x14) + 0x14))
                                 (iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 0x10));
              fVar19 = (float)FUN_08837ac4(uVar20,uVar10);
              uVar18 = local_38;
              if (fVar19 < (float)(int)*(short *)(iVar15 + 0x12)) {
                bVar3 = true;
                uVar18 = 1;
              }
            }
            break;
          case 7:
          case 8:
            if (-1 < *(int *)(iVar6 + 0x768)) {
              iVar17 = FUN_089121d0((int)*(short *)(iVar15 + 0x10));
              bVar1 = *(int *)(iVar17 + 0x1c) == *(int *)(iVar6 + 0x768);
              if (bVar1) {
                bVar3 = true;
              }
              uVar18 = (uint)bVar1;
            }
            break;
          case 9:
            iVar17 = 0;
            do {
              if (*(int *)(iVar6 + iVar17 * 4 + 0x704) != 0) {
                iVar8 = FUN_08837990(*(undefined4 *)(iVar6 + iVar17 * 4 + 0x704));
                if ((iVar8 == 0) &&
                   (*(ushort *)(iVar15 + 0x10) ==
                    (ushort)**(byte **)(*(int *)(iVar6 + iVar17 * 4 + 0x704) + 0x5a4))) {
                  iVar8 = FUN_08838074(*(undefined4 *)(iVar6 + iVar17 * 4 + 0x704));
                  if ((iVar8 != 0) &&
                     (*(int *)(*(int *)(iVar6 + iVar17 * 4 + 0x704) + 0x304) ==
                      *(int *)(iVar6 + 0x6d0))) {
                    bVar3 = true;
                    uVar18 = 1;
                    break;
                  }
                }
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < 4);
            break;
          case 10:
            iVar17 = *(int *)(iVar6 + 0x6d0);
            local_84 = *(undefined4 *)(iVar17 + 0x8c);
            local_90[0] = *(float *)(iVar17 + 0x80) - (float)(int)*(short *)(iVar15 + 0x10);
            local_90[1] = 0.0;
            local_90[2] = *(float *)(iVar17 + 0x88) - (float)(int)*(short *)(iVar15 + 0x12);
            fVar19 = (float)FUN_089a3bf8(local_90);
            if (fVar19 < (float)(int)*(short *)(iVar15 + 0x14)) {
              bVar3 = true;
              uVar18 = 1;
            }
          }
          if ((uVar18 != 0) && (iVar16 < 0x20)) {
            piVar11 = local_130 + iVar16;
            iVar16 = iVar16 + 1;
            *piVar11 = iVar15;
          }
        }
      }
      if ((-1 < (int)uVar14) && (!bVar3)) {
        iVar15 = 0;
        while (iVar15 = FUN_0890f544(param_1,iVar15,1), iVar15 != 0) {
          if (((*(byte *)(iVar15 + 2) == uVar14) && (*(char *)(iVar15 + 4) == '\0')) &&
             (bVar3 = true, iVar16 < 0x20)) {
            piVar11 = local_130 + iVar16;
            iVar16 = iVar16 + 1;
            *piVar11 = iVar15;
          }
        }
      }
      psVar9 = (short *)0x0;
      if ((-1 < param_1[2]) && (!bVar3)) {
        do {
          psVar9 = (short *)FUN_0890f544(param_1,psVar9,1);
          if (psVar9 == (short *)0x0) goto LAB_0890ff8c;
        } while (((char)psVar9[2] != '\v') || (param_1[2] != (int)*psVar9));
        param_1[2] = -1;
        if (iVar16 < 0x20) {
          piVar11 = local_130 + iVar16;
          bVar3 = true;
          iVar16 = iVar16 + 1;
          *piVar11 = (int)psVar9;
        }
      }
LAB_0890ff8c:
      if ((char)param_1[3] != '\0') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (bVar3) {
        iVar16 = param_1[1] % iVar16;
        iVar15 = 0;
        param_1[1] = iVar16;
        iVar17 = local_130[iVar16];
        param_1[1] = iVar16 + 1;
        do {
          if (*(int *)(iVar6 + iVar15 * 4 + 0x704) != 0) {
            iVar16 = FUN_08837990(*(undefined4 *)(iVar6 + iVar15 * 4 + 0x704));
            if ((iVar16 == 0) &&
               (*(char *)(iVar17 + 2) == **(char **)(*(int *)(iVar6 + iVar15 * 4 + 0x704) + 0x5a4)))
            {
              *param_1 = iVar15;
              break;
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 4);
        if (*(char *)(iVar17 + 3) != '\0') {
          FUN_089170e0((int)*(char *)(iVar17 + 3),*(undefined1 *)(iVar17 + 10));
        }
        if ((-1 < *param_1) && (-1 < *(short *)(iVar17 + 8))) {
          func_0x08a6419c(*(undefined4 *)(*(int *)(iVar6 + *param_1 * 4 + 0x704) + 0x5c4),
                          (int)*(short *)(iVar17 + 8));
        }
        if ((-1 < *param_1) && ((*(ushort *)(iVar17 + 0xe) & 8) != 0)) {
          FUN_08834d8c(0x41800000,*(undefined4 *)(iVar6 + *param_1 * 4 + 0x704));
        }
        if ((*(ushort *)(iVar17 + 0xe) & 2) == 0) {
          puVar13 = (uint *)(iVar7 + ((uint)(int)*(short *)(iVar17 + 0xc) >> 5) * 4 + 0x130);
          *puVar13 = *puVar13 | 1 << ((int)*(short *)(iVar17 + 0xc) & 0x1fU);
        }
        iVar7 = FUN_089359e8(iVar17 + 0x18);
        if (iVar7 != 0) {
          uVar10 = FUN_0891023c(iVar17);
          FUN_0893476c(auStack_80,"talkevent/%s",uVar10);
          FUN_08915da8(iVar6,auStack_80,(*(ushort *)(iVar17 + 0xe) & 4) != 0);
          iVar15 = 0;
          iVar7 = 0;
          do {
            if (-1 < *(short *)(iVar17 + 0x38 + iVar15 * 2)) {
              iVar7 = iVar7 + 1;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 0x20);
          FUN_08915f20(iVar6,iVar17 + 0x38,iVar7);
          if (-1 < *param_1) {
            FUN_08836da4(*(undefined4 *)(iVar6 + 0x6d0),
                         *(undefined4 *)(iVar6 + *param_1 * 4 + 0x704));
            iVar7 = *(int *)(*(int *)(iVar6 + 0x6d0) + 0x544);
            (**(code **)(iVar7 + 300))
                      (*(int *)(iVar6 + 0x6d0) + (int)*(short *)(iVar7 + 0x128),
                       *(undefined4 *)(iVar6 + *param_1 * 4 + 0x704));
            func_0x08b2f17c(*(undefined4 *)(iVar6 + 0x6d0));
          }
        }
      }
    }
  }
  return;
}

