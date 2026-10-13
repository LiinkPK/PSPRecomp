/* Entry 0x08817518 | file offset 0x000144F0 | FUN_08817518 | bytes 1836 */

void FUN_08817518(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_40;
  char local_3f;
  char local_3e;
  char local_3d;
  int local_3c;
  undefined4 local_38;
  
  iVar12 = 0;
  while (iVar12 = FUN_08841f84(iVar12), iVar12 != 0) {
    bVar2 = *(short *)(iVar12 + 0x180) != 0x65;
    fVar13 = (float)FUN_08837124(iVar12);
    iVar9 = *(int *)(iVar12 + 0x468);
    bVar3 = false;
    bVar4 = false;
    if (iVar9 != 0) {
      iVar5 = FUN_0881baa8();
      for (iVar5 = *(int *)(iVar5 + 0x120); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
        if (*(int *)(iVar5 + 0x10) == 1) {
          iVar10 = *(int *)(iVar5 + 0x14);
          if ((!bVar2) && (iVar6 = FUN_0883e9e4(*(undefined4 *)(iVar10 + 0x47c),iVar9), iVar6 != 0))
          {
            bVar3 = true;
          }
          iVar10 = FUN_0883e9e4(*(undefined4 *)(iVar10 + 0x468),iVar9);
          if (iVar10 != 0) {
            local_d0 = *(undefined4 *)(iVar10 + 0x10);
            local_cc = *(undefined4 *)(iVar10 + 0x14);
            local_c8 = *(undefined4 *)(iVar10 + 0x18);
            local_54 = 0x3f800000;
            local_a4 = 0x3f800000;
            local_c4 = 0x3f800000;
            local_b0 = local_d0;
            local_ac = local_cc;
            local_a8 = local_c8;
            local_60 = local_d0;
            local_5c = local_cc;
            local_58 = local_c8;
            FUN_089a38fc(auStack_c0,&local_d0,iVar12 + 0x100);
            fVar14 = (float)FUN_089a3bf8(auStack_c0);
            if (fVar14 - *(float *)(iVar10 + 4) < fVar13 * 0.3) {
              bVar4 = true;
            }
          }
        }
      }
    }
    if ((bVar2) || (!bVar3)) {
      *(undefined4 *)(iVar12 + 0x10d4) = 0;
    }
    else {
      *(float *)(iVar12 + 0x10d4) = *(float *)(iVar12 + 0x10d4) + DAT_089d5eac;
    }
    if (bVar4) {
      *(float *)(iVar12 + 0x10d8) = *(float *)(iVar12 + 0x10d8) + DAT_089d5eac;
    }
    else {
      *(undefined4 *)(iVar12 + 0x10d8) = 0;
    }
  }
  iVar12 = FUN_0881baa8();
  iVar12 = *(int *)(iVar12 + 0x120);
  do {
    if (iVar12 == 0) {
      return;
    }
    if (*(int *)(iVar12 + 0x10) == 1) {
      iVar9 = *(int *)(iVar12 + 0x14);
      local_38 = *(undefined4 *)(iVar9 + 0x468);
      uVar11 = *(undefined4 *)(iVar9 + 0x47c);
      local_3c = *(int *)(iVar9 + 0x568);
      local_3d = '\x01';
      local_3e = '\x01';
      local_3f = '\x01';
      local_40 = '\x01';
      iVar5 = 0;
      if (0 < *(int *)(local_3c + 0x60)) {
        do {
          bVar2 = false;
          if (local_3d == '\x01') {
            iVar10 = 0;
            do {
              iVar10 = FUN_08841f84(iVar10);
              if (iVar10 == 0) goto LAB_08817888;
              iVar6 = 0;
              if (*(int *)(iVar10 + 0x478) != 0) {
                iVar6 = FUN_0883e9e4(uVar11,*(int *)(iVar10 + 0x478));
              }
              if (iVar6 == 0) {
                iVar8 = 0;
                do {
                  iVar7 = FUN_0884f6b8(iVar10 + 0xd64,iVar8);
                  if (((iVar7 != 0) && (*(int *)(iVar7 + 0x478) != 0)) &&
                     (iVar6 = FUN_0883e9e4(uVar11,*(int *)(iVar7 + 0x478)), iVar6 != 0)) break;
                  iVar8 = iVar8 + 1;
                } while (iVar8 < 0x10);
              }
            } while (iVar6 == 0);
            FUN_0881591c(iVar9,iVar10,*(undefined4 *)(iVar6 + 0xc),0);
            bVar2 = true;
LAB_08817888:
            if (!bVar2) {
              local_3d = '\0';
            }
          }
          if ((!bVar2) && (local_3e == '\x01')) {
            iVar10 = 0;
LAB_088178b4:
            do {
              do {
                iVar10 = FUN_0880844c(iVar10);
                if (iVar10 == 0) goto LAB_08817a58;
              } while (*(int *)(iVar10 + 0x34) == 0);
              iVar6 = 0;
              if (*(short *)(iVar10 + 0x2c) == 2) {
                cVar1 = *(char *)(*(int *)(iVar10 + 0x34) + 4);
                if ((((cVar1 != '\x03') && (cVar1 != '\a')) && (cVar1 != '\b')) &&
                   ((*(uint *)(iVar10 + 0x10) & 0x100) == 0)) goto LAB_088178b4;
                local_84 = 0;
                local_90 = *(undefined4 *)(iVar10 + 0xb8);
                (**(code **)(*(int *)(iVar10 + 0x70) + 0x14))
                          (&local_70,iVar10 + *(short *)(*(int *)(iVar10 + 0x70) + 0x10));
                local_a0 = local_70;
                local_9c = local_6c;
                local_98 = local_68;
                local_94 = local_64;
                FUN_089a34c0(auStack_80,&local_a0);
                local_8c = *(undefined4 *)(iVar10 + 0xb0);
                local_88 = *(undefined4 *)(iVar10 + 0xb4);
                iVar6 = FUN_0883ea64(uVar11,&local_90);
              }
              else if (*(short *)(iVar10 + 0x2c) == 1) {
                iVar6 = *(int *)(iVar10 + 0x18);
                if (((iVar6 == 0) || (*(char *)(iVar6 + 0x542) != '\x05')) ||
                   (*(int *)(iVar6 + 0x478) == 0)) goto LAB_088178b4;
                iVar6 = FUN_0883e9e4(uVar11);
              }
            } while (iVar6 == 0);
            FUN_0881591c(iVar9,*(undefined4 *)(iVar10 + 0x18),*(undefined4 *)(iVar6 + 0xc),0);
            bVar2 = true;
LAB_08817a58:
            if (!bVar2) {
              local_3e = '\0';
            }
          }
          if ((!bVar2) && (local_3f == '\x01')) {
            iVar10 = 0;
            do {
              iVar10 = FUN_08841f84(iVar10);
              if (iVar10 == 0) goto LAB_08817b08;
            } while (((*(float *)(iVar10 + 0x10d4) < 60.0) || (*(int *)(iVar10 + 0x468) == 0)) ||
                    (iVar6 = FUN_0883e9e4(uVar11,*(int *)(iVar10 + 0x468)), iVar6 == 0));
            FUN_0881591c(iVar9,iVar10,*(undefined4 *)(iVar6 + 0xc),0);
            bVar2 = true;
LAB_08817b08:
            if (!bVar2) {
              local_3f = '\0';
            }
          }
          if ((!bVar2) && (local_40 == '\x01')) {
            iVar10 = 0;
            do {
              iVar10 = FUN_08841f84(iVar10);
              if (iVar10 == 0) goto LAB_08817bb8;
            } while (((*(float *)(iVar10 + 0x10d8) < 15.0) || (*(int *)(iVar10 + 0x468) == 0)) ||
                    (iVar6 = FUN_0883e9e4(local_38,*(int *)(iVar10 + 0x468)), iVar6 == 0));
            FUN_0881591c(iVar9,iVar10,*(undefined4 *)(iVar6 + 0xc),0);
            bVar2 = true;
LAB_08817bb8:
            if (!bVar2) {
              local_40 = '\0';
            }
          }
          if (!bVar2) break;
          FUN_0883e79c(uVar11);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_3c + 0x60));
      }
    }
    iVar12 = *(int *)(iVar12 + 8);
  } while( true );
}

