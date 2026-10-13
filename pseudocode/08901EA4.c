/* Entry 0x08901EA4 | file offset 0x000FEE7C | FUN_08901ea4 | bytes 2192 */

void FUN_08901ea4(int param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  ushort uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  short *psVar20;
  undefined8 uVar21;
  int local_3e0;
  uint *local_3dc;
  undefined4 auStack_3d0 [32];
  int local_350;
  uint local_34c;
  char *local_348 [32];
  uint local_2c8 [37];
  uint auStack_234 [32];
  undefined2 local_1b4 [2];
  uint local_1b0;
  undefined1 auStack_1a0 [340];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  short *local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  
  piVar13 = &local_3e0;
  iVar4 = FUN_08900d68();
  psVar5 = (short *)FUN_088b36fc(*(undefined4 *)(param_1 + 4));
  local_34 = DAT_089d8508;
  if (psVar5 != (short *)0x0) {
    local_38 = iVar4;
    if ((*(ushort *)(iVar4 + 0xe) & 0x200) == 0) {
      if (*(int *)(param_1 + 8) < 0) {
        FUN_0891a8a0(param_1 + 0x68,0,*(undefined4 *)(param_1 + 0xc));
      }
      else {
        iVar4 = FUN_088b3524(*(int *)(param_1 + 8));
        if (iVar4 != 0) {
          iVar6 = FUN_088b3360(iVar4,*(undefined4 *)(param_1 + 0xc));
          if (iVar6 == 0) {
            return;
          }
          FUN_0891a91c(param_1 + 0x68,0,(int)*(short *)(iVar6 + 2),
                       (int)*(char *)(param_1 + 0x44 + *(int *)(param_1 + 0xc)),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x40),
                       (int)*(char *)(iVar4 + 2));
        }
      }
    }
    else if ((param_2 == '\x01') &&
            (iVar4 = FUN_08901400(auStack_3d0,0x20,*(undefined4 *)(param_1 + 8),param_1 + 0x28),
            0 < iVar4)) {
      iVar6 = sceKernelGetSystemTimeLow();
      local_350 = iVar6 * 0x343fd + 0x269ec3;
      psVar20 = (short *)auStack_3d0[(int)(local_350 >> 0x10 & 0x7fffU) % iVar4];
      FUN_0891a91c(param_1 + 0x68,0,(int)psVar20[1],(int)*(char *)(param_1 + 0x44 + (int)*psVar20),
                   *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x40),0xffffffff);
      uVar11 = *(uint *)(param_1 + 0x2c);
      uVar19 = *(uint *)(param_1 + 0x28);
      uVar21 = FUN_089985b0(1,0,(int)*psVar20);
      *(uint *)(param_1 + 0x2c) = uVar11 | (uint)((ulonglong)uVar21 >> 0x20);
      *(uint *)(param_1 + 0x28) = uVar19 | (uint)uVar21;
      *(int *)(param_1 + 0xc) = (int)*psVar20;
    }
    iVar4 = param_1 + 0x68;
    if (((param_2 == '\x01') && (iVar6 = *(int *)(param_1 + 0x10), -1 < iVar6)) && (iVar6 < *psVar5)
       ) {
      psVar20 = (short *)(*(int *)(psVar5 + 8) + iVar6 * 0x14);
      local_40 = psVar5;
      local_34c = sceKernelGetSystemTimeLow();
      local_34c = local_34c & 0x7fffffff;
      uVar19 = 0xffffffff;
      local_3c = local_34c;
      if (*psVar20 == -1) {
        iVar6 = FUN_08901614(local_348,0x20,*(undefined4 *)(param_1 + 4),(int)psVar20[1],
                             param_1 + 0x30);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          iVar6 = FUN_08901614(local_348,0x20,*(undefined4 *)(param_1 + 4),(int)psVar20[1],
                               param_1 + 0x30);
        }
        if (((DAT_089d5f20 == '\x01') &&
            (*(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd,
            *(int *)(param_1 + 4) == 0x12)) &&
           ((0x13 < *(int *)(param_1 + 0x10) &&
            ((local_34c = local_34c * 0x343fd + 0x269ec3,
             ((int)local_34c >> 0x10 & 0x7fffU) % 100 < 5 &&
             (iVar7 = FUN_088b36fc(0x12), iVar7 != 0)))))) {
          iVar12 = 0;
          if (0 < *(short *)(iVar7 + 2)) {
            pcVar10 = *(char **)(iVar7 + 0x14);
            do {
              if (*pcVar10 == '\x1a') {
                local_348[0] = pcVar10;
                iVar6 = 1;
                *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
                break;
              }
              iVar12 = iVar12 + 1;
              pcVar10 = pcVar10 + 0xc;
            } while (iVar12 < *(short *)(iVar7 + 2));
          }
        }
        if (iVar6 != 0) {
          local_34c = local_34c * 0x343fd + 0x269ec3;
          local_2c8[0] = 0;
          local_2c8[1] = 0;
          iVar16 = 1;
          iVar7 = 0;
          iVar12 = 0;
          pcVar10 = local_348[(int)((int)local_34c >> 0x10 & 0x7fffU) % iVar6];
          do {
            iVar6 = iVar12 + 1;
            iVar12 = iVar12 + 1;
            iVar7 = iVar7 + pcVar10[iVar6];
          } while (iVar12 < 3);
          if (0 < iVar7) {
            iVar6 = 0;
            do {
              local_34c = local_34c * 0x343fd + 0x269ec3;
              if ((int)((int)local_34c >> 0x10 & 0x7fffU) % iVar7 < (int)pcVar10[iVar6 + 1]) {
                iVar16 = iVar6 + 1;
                break;
              }
              iVar7 = iVar7 - pcVar10[iVar6 + 1];
              iVar6 = iVar6 + 1;
            } while (iVar6 < 3);
          }
          iVar6 = FUN_089017d0(local_2c8 + 2,0x23,*(undefined4 *)(param_1 + 4),param_1 + 0x38);
          iVar7 = 0;
          if (0 < iVar6) {
            do {
              uVar11 = **(uint **)((int)piVar13 + 0x120);
              iVar12 = (int)(uVar11 + ((uint)((int)uVar11 >> 5) >> 0x1b)) >> 5;
              if ((int)uVar11 < 0) {
                uVar11 = -(-uVar11 & 0x1f);
              }
              else {
                uVar11 = uVar11 & 0x1f;
              }
              local_2c8[iVar12] = local_2c8[iVar12] | 1 << (uVar11 & 0x1f);
              iVar7 = iVar7 + 1;
              piVar13 = (int *)((int)piVar13 + 4);
            } while (iVar7 < iVar6);
          }
          local_3e0 = (int)*(short *)(pcVar10 + 8);
          local_3dc = local_2c8;
          FUN_0891aa50(iVar4,1,(int)*pcVar10,iVar16,(int)psVar20[2],(int)psVar20[3],(int)psVar20[4],
                       (int)*(short *)(pcVar10 + 6));
          uVar15 = *(uint *)(param_1 + 0x34);
          uVar11 = *(uint *)(param_1 + 0x30);
          uVar21 = FUN_089985b0(1,0,(int)*pcVar10);
          *(uint *)(param_1 + 0x34) = uVar15 | (uint)((ulonglong)uVar21 >> 0x20);
          *(uint *)(param_1 + 0x30) = uVar11 | (uint)uVar21;
        }
        sVar8 = psVar20[5];
        psVar5 = local_40;
      }
      else {
        FUN_0891a8dc(iVar4,1,(int)*psVar20,0xffffffff,0xffffffff);
        iVar6 = FUN_088bbd8c((int)*psVar20);
        sVar8 = psVar20[5];
        if (iVar6 != 0) {
          uVar19 = (uint)*(byte *)(iVar6 + 4);
        }
      }
      if ((int)sVar8 != 0xffffffff) {
        local_3c = (int)sVar8;
      }
      uVar11 = uVar19;
      if ((uVar19 == 0xffffffff) && (uVar11 = (uint)psVar20[8], uVar11 == 0xffffffff)) {
        iVar6 = FUN_089018ec(auStack_234,0x20,*(undefined4 *)(param_1 + 4),
                             *(undefined4 *)(param_1 + 0x20));
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          iVar6 = FUN_089018ec(auStack_234,0x20,*(undefined4 *)(param_1 + 4),0);
        }
        uVar11 = uVar19;
        if (iVar6 != 0) {
          local_34c = local_34c * 0x343fd + 0x269ec3;
          uVar19 = 0;
          uVar11 = auStack_234[(int)((int)local_34c >> 0x10 & 0x7fffU) % iVar6];
          if (0 < psVar5[3]) {
            psVar20 = *(short **)(psVar5 + 0xe);
            do {
              if (uVar11 == (int)*psVar20) {
                *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1 << (uVar19 & 0x1f);
                break;
              }
              uVar19 = uVar19 + 1;
              psVar20 = psVar20 + 2;
            } while ((int)uVar19 < (int)psVar5[3]);
          }
        }
      }
      uVar3 = DAT_089d76f0;
      local_40 = psVar5;
      FUN_0891a15c(local_1b4);
      local_1b4[0] = (undefined2)uVar11;
      local_1b0 = local_3c;
      FUN_08929afc(auStack_1a0,uVar3,0,0);
      FUN_0891ab94(iVar4,local_1b4);
      local_48 = 0;
      bVar1 = false;
      bVar2 = false;
      sVar8 = 0;
      if (local_38 != 0) {
        bVar1 = (*(ushort *)(local_38 + 0xe) & 0x40) != 0;
        sVar8 = *psVar5;
        bVar2 = (*(ushort *)(local_38 + 0xe) & 0x80) != 0;
        local_40 = psVar5;
      }
      local_44 = CONCAT22(sVar8,(short)*(undefined4 *)(param_1 + 0x10));
      local_4c = 0;
      iVar6 = FUN_08900e60(param_1);
      uVar17 = 0;
      local_4c._0_2_ = (ushort)(iVar6 == 1);
      iVar7 = FUN_08900e9c(param_1);
      if (iVar7 == 1) {
        uVar17 = 2;
      }
      uVar18 = 0;
      if (bVar1) {
        uVar18 = 4;
      }
      uVar9 = 0;
      if (bVar2) {
        uVar9 = 8;
      }
      uVar9 = iVar6 == 1 | uVar17 | uVar18 | uVar9;
      uVar17 = 0;
      local_4c._0_2_ = uVar9;
      iVar6 = FUN_08900f14(param_1);
      if (iVar6 == 1) {
        uVar17 = 0x10;
      }
      uVar18 = 0;
      if ((*(byte *)(*(int *)(local_40 + 6) + 10) & 1) != 0) {
        uVar18 = 0x20;
      }
      uVar14 = 0;
      if ((*(uint *)(param_1 + 0x1c) & 1) != 0) {
        uVar14 = 0x40;
      }
      local_4c = CONCAT22(local_4c._2_2_,uVar9 | uVar17 | uVar18 | uVar14);
      DAT_09afe024 = local_4c;
      DAT_09afe028 = local_48;
      DAT_09afe02c = local_44;
    }
    uVar3 = local_34;
    FUN_0891b8c0(local_34,iVar4);
    FUN_0891b96c(uVar3,0,0);
  }
  return;
}

