/* Entry 0x088E150C | file offset 0x000DE4E4 | FUN_088e150c | bytes 3352 */

/* WARNING: Removing unreachable block (ram,0x088e2a10) */
/* WARNING: Removing unreachable block (ram,0x088e2a24) */

undefined4 FUN_088e150c(int param_1,ushort *param_2,float *param_3)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  *(undefined2 *)(param_3 + 5) = 0;
  if ((param_2 == (ushort *)0x0) || ((int)(uint)*param_2 <= (int)*(short *)(param_3 + 4))) {
    return 0;
  }
  if (0.0 < *param_3) {
    fVar10 = (float)FUN_088e04c4(param_1);
    *param_3 = *param_3 - fVar10;
    fVar10 = (float)FUN_088e04c4(param_1);
    param_3[3] = param_3[3] + fVar10;
    return 1;
  }
  if (0.0 < param_3[1]) {
    if (*(float *)(param_1 + 0x13a4) < param_3[1]) {
      fVar10 = (float)FUN_088e04c4(param_1);
      param_3[3] = param_3[3] + fVar10;
      return 1;
    }
    param_3[1] = 0.0;
  }
  if (*(char *)((int)param_3 + 0x1e) != '\0') {
    if (*(short *)(param_1 + (uint)*(byte *)(param_3 + 7) * 0x2c + 0x24) <
        *(short *)((int)param_3 + 0x12)) {
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x1e) = 0;
  }
  if (*(char *)((int)param_3 + 0x21) != '\0') {
    iVar3 = FUN_088e3428(param_1 + 0x5bc);
    if (iVar3 == 0) {
      iVar3 = FUN_08872088(0);
      pcVar8 = *(code **)(*(int *)(iVar3 + 0x34) + 0x14);
      iVar3 = (*pcVar8)(iVar3 + *(short *)(*(int *)(iVar3 + 0x34) + 0x10),pcVar8,0,1);
      if (iVar3 != 0) {
        FUN_088e347c(param_1 + 0x5bc);
      }
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x21) = 0;
  }
  if (*(char *)(param_3 + 8) != '\0') {
    iVar3 = FUN_08872088(0);
    pcVar8 = *(code **)(*(int *)(iVar3 + 0x34) + 0x14);
    iVar3 = (*pcVar8)(iVar3 + *(short *)(*(int *)(iVar3 + 0x34) + 0x10),pcVar8,0,1);
    if (iVar3 == 0) {
      return 1;
    }
    FUN_088a24d4(0,0x2711,1,0);
    *(undefined1 *)(param_3 + 8) = 0;
  }
  if (param_3[6] != 0.0) {
    if ((*(uint *)((int)param_3[6] + 0x188) & 1) == 0) {
      return 1;
    }
    param_3[6] = 0.0;
  }
  if (*(char *)((int)param_3 + 0x22) != '\0') {
    iVar3 = 0;
    bVar6 = false;
    do {
      if (-1 < *(int *)(param_1 + iVar3 * 4 + 0x1638)) {
        bVar6 = true;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    if ((bVar6) || (*(char *)(DAT_089d4960 + 0x60) != '\0')) {
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x22) = 0;
  }
  if (*(char *)((int)param_3 + 0x23) != '\0') {
    if (-1 < *(int *)(param_1 + 0x1678)) {
      return 1;
    }
    bVar6 = false;
    if ((*(int *)(DAT_089d6ac8 + 0x724) != 0) &&
       (bVar6 = false, *(int *)(DAT_089d6ac8 + 0x724) != 10)) {
      bVar6 = true;
    }
    if (bVar6) {
      return 1;
    }
    iVar3 = FUN_08899300();
    bVar6 = false;
    if (*(int *)(iVar3 + 0x100) != 0) {
      iVar3 = FUN_08899300();
      bVar6 = false;
      if (*(int *)(iVar3 + 0x100) != 5) {
        bVar6 = true;
      }
    }
    if (bVar6) {
      return 1;
    }
    bVar6 = false;
    if ((*(int *)(param_1 + 0x1288) != 0) && (bVar6 = false, *(int *)(param_1 + 0x1288) != 5)) {
      bVar6 = true;
    }
    if (bVar6) {
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x23) = 0;
  }
  if (*(char *)(param_3 + 9) != '\0') {
    if (*(int *)(param_1 + 0x12c4) != 0) {
      return 1;
    }
    *(undefined1 *)(param_3 + 9) = 0;
  }
  if (*(char *)((int)param_3 + 0x25) != '\0') {
    if (*(int *)(param_1 + 0x12f8) != 0) {
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x25) = 0;
  }
  if (*(char *)((int)param_3 + 0x26) != '\0') {
    if (*(int *)(param_1 + 0x135c) != 0) {
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x26) = 0;
  }
  if (*(char *)((int)param_3 + 0x27) != '\0') {
    iVar3 = FUN_088ea530(param_1 + 0x135c);
    if (iVar3 == 0) {
      return 1;
    }
    *(undefined1 *)((int)param_3 + 0x27) = 0;
  }
  if (*(char *)(param_3 + 10) != '\0') {
    iVar3 = FUN_08872088(0);
    pcVar8 = *(code **)(*(int *)(iVar3 + 0x34) + 0x14);
    iVar4 = (*pcVar8)(iVar3 + *(short *)(*(int *)(iVar3 + 0x34) + 0x10),pcVar8,0,1);
    if (iVar4 == 0) {
      pcVar8 = *(code **)(*(int *)(iVar3 + 0x34) + 0x14);
      iVar4 = (*pcVar8)(iVar3 + *(short *)(*(int *)(iVar3 + 0x34) + 0x10),pcVar8,0x40,0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar3 + 0x34);
      }
      else {
        FUN_088e3564(param_1 + 0x5bc);
        FUN_088d4bf4(0);
        iVar4 = *(int *)(iVar3 + 0x34);
      }
      iVar3 = (**(code **)(iVar4 + 0x14))
                        (iVar3 + *(short *)(iVar4 + 0x10),*(code **)(iVar4 + 0x14),0x10,0);
      if (iVar3 != 0) {
        FUN_088e35fc(param_1 + 0x5bc);
        FUN_088d4bf4(0);
      }
      return 1;
    }
    FUN_088e36c4(param_1 + 0x5bc);
    *(undefined1 *)(param_3 + 10) = 0;
    FUN_088d4bf4(1);
  }
  if (*(char *)((int)param_3 + 0x1f) != '\0') {
    iVar3 = 0;
    iVar4 = *(int *)(param_1 + 8);
    while( true ) {
      if ((**(short **)(iVar4 + iVar3 * 4 + 0x408) != 0) &&
         (*(char *)(param_1 + iVar3 * 0x2c + 0x33) == '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      if (0x1d < iVar3) break;
      iVar4 = *(int *)(param_1 + 8);
    }
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + iVar3 * 4 + 0x408) != 0) {
        *(undefined1 *)(param_1 + iVar3 * 0x2c + 0x33) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
  }
  bVar6 = false;
  do {
    if ((int)(uint)*param_2 <= (int)*(short *)(param_3 + 4)) {
      return 0;
    }
    sVar2 = *(short *)(param_3 + 4);
    puVar9 = param_2 + sVar2 * 0x10 + 2;
    uVar7 = (uint)*puVar9;
    if (uVar7 < 0x25a) {
      if (uVar7 < 0x12d) {
        if (uVar7 < 0x49) {
          switch(uVar7) {
          case 2:
            iVar3 = FUN_08873f10();
            if (iVar3 != 0) {
              uVar5 = switchD_088e1c8c::default();
              return uVar5;
            }
            if (*(int *)(param_2 + sVar2 * 0x10 + 6) == 0) {
              FUN_08873d34((float)*(int *)(param_2 + sVar2 * 0x10 + 8),0,0,0,1,2);
              FUN_08873dec(0,2);
            }
            else {
              FUN_08873d34((float)*(int *)(param_2 + sVar2 * 0x10 + 8),2,0,0,1,2);
              FUN_08873dec(2,2);
            }
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 3:
            iVar3 = FUN_08873f10();
            if (iVar3 != 0) {
              uVar5 = switchD_088e1c8c::default();
              return uVar5;
            }
            if (*(int *)(param_2 + sVar2 * 0x10 + 6) == 0) {
              FUN_08873d34((float)*(int *)(param_2 + sVar2 * 0x10 + 8),1,0,0,1,2);
              FUN_08873dec(1,2);
            }
            else {
              FUN_08873d34((float)*(int *)(param_2 + sVar2 * 0x10 + 8),3,0,0,1,2);
              FUN_08873dec(3,2);
            }
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 4:
            iVar3 = FUN_08873f10();
            if (iVar3 != 0) {
              uVar5 = switchD_088e1c8c::default();
              return uVar5;
            }
            uVar5 = FUN_08873ce0(0,1,2);
            fVar10 = 0.0;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            fVar11 = 4.0;
            local_34 = 0x437f0000;
            fVar12 = 24.0;
            if (*(int *)(param_2 + sVar2 * 0x10 + 6) != 0) {
              FUN_089a383c(0x437f0000,0x437f0000,0x437f0000,0x437f0000,&local_40);
            }
            if (0 < *(int *)(param_2 + sVar2 * 0x10 + 8)) {
              fVar10 = (float)*(int *)(param_2 + sVar2 * 0x10 + 8);
            }
            if (0 < *(int *)(param_2 + sVar2 * 0x10 + 10)) {
              fVar11 = (float)*(int *)(param_2 + sVar2 * 0x10 + 10);
            }
            if (0 < *(int *)(param_2 + sVar2 * 0x10 + 0xc)) {
              fVar12 = (float)*(int *)(param_2 + sVar2 * 0x10 + 0xc);
            }
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            FUN_08873b64(0,uVar5,&local_50,0,0);
            if (0.0 < fVar10) {
              FUN_08873b64(fVar10,uVar5,&local_40,0,0);
            }
            if (0.0 < fVar11 + fVar10) {
              FUN_08873b64(fVar11 + fVar10,uVar5,&local_40,0,0);
            }
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            FUN_08873b64(fVar11 + fVar10 + fVar12,uVar5,&local_50,0,0);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          default:
            goto code_r0x088e2980;
          case 9:
            *(undefined1 *)(param_3 + 8) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 10:
            *(undefined1 *)((int)param_3 + 0x1e) = 1;
            *(char *)(param_3 + 7) = (char)*(undefined4 *)(param_2 + sVar2 * 0x10 + 6);
            *(short *)((int)param_3 + 0x12) = (short)*(undefined4 *)(param_2 + sVar2 * 0x10 + 8);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0xb:
            *(undefined1 *)((int)param_3 + 0x1f) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0xc:
            if (*(int *)(param_2 + sVar2 * 0x10 + 6) == 0) {
              FUN_08873958((float)*(int *)(param_2 + sVar2 * 0x10 + 8),param_1 + 0x13c0,0,0,0,1);
              FUN_08873b34(param_1 + 0x13c0,0);
            }
            else {
              FUN_08873958((float)*(int *)(param_2 + sVar2 * 0x10 + 8),param_1 + 0x13c0,2,0,0,1);
              FUN_08873b34(param_1 + 0x13c0,2);
            }
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0xd:
            if (*(int *)(param_2 + sVar2 * 0x10 + 6) == 0) {
              FUN_08873958((float)*(int *)(param_2 + sVar2 * 0x10 + 8),param_1 + 0x13c0,1,0,0,1);
              FUN_08873b34(param_1 + 0x13c0,1);
            }
            else {
              FUN_08873958((float)*(int *)(param_2 + sVar2 * 0x10 + 8),param_1 + 0x13c0,3,0,0,1);
              FUN_08873b34(param_1 + 0x13c0,3);
            }
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0xe:
            FUN_088749a0(*(float *)(param_2 + sVar2 * 0x10 + 8) * 0.01,
                         *(float *)(param_2 + sVar2 * 0x10 + 10) * 0.01,
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 6),0);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0xf:
            *(undefined1 *)(param_1 + 0x17b6) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x10:
            *(undefined1 *)(param_1 + 0x17b5) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x11:
            iVar3 = *(int *)(param_2 + sVar2 * 0x10 + 6);
            param_3[1] = (float)iVar3;
            param_3[2] = (float)iVar3;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x12:
            iVar3 = *(int *)(param_2 + sVar2 * 0x10 + 6);
            param_3[1] = param_3[2] + (float)iVar3;
            param_3[2] = param_3[2] + (float)iVar3;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x13:
            param_3[6] = *(float *)(param_1 + *(int *)(param_2 + sVar2 * 0x10 + 6) * 4 + 0xd7c);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x14:
            FUN_08873594(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),0x447a0000,DAT_089d5ec0 + 0x7e0
                        );
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x15:
            FUN_08873594(0x3f800000,*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),DAT_089d5ec0 + 0x7e0
                        );
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x16:
            FUN_088759fc(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 8),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 10),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 0xc),DAT_089d6040,0);
            FUN_08875980(DAT_089d6040);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x17:
            FUN_08875a84(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),DAT_089d6040);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x18:
            FUN_08875ae4(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),DAT_089d6040);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x19:
            FUN_088e09ac(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 8),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 10),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 0xc),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 0xe),param_1 + 0x1600);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x1e:
            iVar3 = FUN_088678dc();
            if (iVar3 == 0) {
              uVar5 = switchD_088e1c8c::default();
              return uVar5;
            }
            iVar3 = *(int *)(param_2 + sVar2 * 0x10 + 6);
            break;
          case 0x1f:
            iVar3 = FUN_08867900();
            if (iVar3 == 0) {
              uVar5 = switchD_088e1c8c::default();
              return uVar5;
            }
          case 1:
            iVar3 = *(int *)(param_2 + sVar2 * 0x10 + 6);
            break;
          case 0x28:
            FUN_08861058(DAT_089d5e88);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x29:
            FUN_08861098(DAT_089d5e88);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x2a:
            FUN_088610d4(*(undefined4 *)(param_2 + sVar2 * 0x10 + 8),DAT_089d5e88,
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 6),0);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x2b:
            FUN_08861148(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 8),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 10),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 0xc),DAT_089d5e88,0);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x2c:
            FUN_088610d4(*(undefined4 *)(param_2 + sVar2 * 0x10 + 8),DAT_089d5e88,
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 6),1);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x2d:
            FUN_08861148(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 8),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 10),
                         *(undefined4 *)(param_2 + sVar2 * 0x10 + 0xc),DAT_089d5e88,1);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x2e:
            FUN_088611d8(*(undefined4 *)(param_2 + sVar2 * 0x10 + 6),DAT_089d5e88);
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x3c:
            FUN_088e052c(param_1,*(undefined4 *)(param_2 + sVar2 * 0x10 + 6));
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          case 0x48:
            *(undefined1 *)(param_3 + 10) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          *param_3 = (float)iVar3;
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        if (uVar7 < 0xd0) {
          if (0xce < uVar7) {
            *(undefined1 *)((int)param_3 + 0x21) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
        }
        else if (299 < uVar7) {
          iVar3 = 0;
          bVar6 = false;
          goto LAB_088e217c;
        }
      }
      else if (uVar7 < 0x1fd) {
        if (uVar7 < 0x12e) {
          *(undefined1 *)((int)param_3 + 0x22) = 1;
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        if (499 < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x088e1c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&PTR_FUN_089cc4f0)[uVar7 - 500])();
          return uVar5;
        }
      }
      else if (599 < uVar7) {
        if (uVar7 < 0x259) {
          FUN_088e6bec(param_1 + 0x12b0,*(undefined4 *)(param_2 + sVar2 * 0x10 + 6));
          *(undefined1 *)(param_1 + 0x17af) = 1;
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        *(undefined1 *)(param_3 + 9) = 1;
        uVar5 = switchD_088e1c8c::default();
        return uVar5;
      }
    }
    else {
      if (1099 < uVar7) {
        if (uVar7 == 0x4b2) {
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        if (uVar7 == 0x4b1) {
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        if (uVar7 != 0x4b0) {
          if (uVar7 == 0x44d) {
            FUN_08867888();
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          if (uVar7 != 0x44c) {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          FUN_08867888();
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        if (*(char *)(param_1 + 0x17c0) != '\0') {
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
        iVar4 = 0;
        param_2 = param_2 + sVar2 * 0x10 + 6;
        iVar3 = 0;
        goto LAB_088e2748;
      }
      if (uVar7 < 0x387) {
        if (900 < uVar7) {
          if (uVar7 < 0x386) {
            *(undefined1 *)((int)param_3 + 0x26) = 1;
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          *(undefined1 *)((int)param_3 + 0x27) = 1;
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
      }
      else {
        switch(uVar7) {
        case 0x3e9:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          iVar3 = 0;
          *(undefined1 *)(param_1 + 0x17b7) = 0;
          goto LAB_088e2350;
        case 0x3ea:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          *(undefined1 *)(param_1 + 0x17b7) = 1;
          iVar3 = 0;
          goto LAB_088e23cc;
        case 0x3eb:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          *(undefined1 *)(param_1 + 0x17b7) = 1;
          iVar3 = 0;
          goto LAB_088e246c;
        case 0x3ec:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          iVar3 = 0;
          *(undefined1 *)(param_1 + 0x17b7) = 0;
          goto LAB_088e2504;
        case 0x3ed:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          iVar3 = 0;
          *(undefined1 *)(param_1 + 0x17b7) = 0;
          goto LAB_088e25a0;
        case 0x3ee:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          *(undefined1 *)(param_1 + 0x17b7) = 1;
        case 1000:
          if (*(char *)(param_1 + 0x17b8) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          if (*(char *)(param_1 + 0x17b7) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          FUN_08935828(param_1 + 0x1680,0,0x40);
          iVar3 = 0;
          do {
            FUN_08935524(param_1 + iVar3 * 4 + 0x1680,puVar9 + iVar3 * 2 + 4,4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < 6);
          *(undefined1 *)(param_1 + 0x17b8) = 0;
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        case 0x3ef:
          if (*(char *)(param_1 + 0x17b7) == '\0') {
            uVar5 = switchD_088e1c8c::default();
            return uVar5;
          }
          *(undefined1 *)(param_1 + 0x17b8) = 0;
          uVar5 = switchD_088e1c8c::default();
          return uVar5;
        }
      }
    }
code_r0x088e2980:
    FUN_088e4340(param_1 + 0x5bc,puVar9);
    FUN_088e5be4(param_1 + 0xd7c,puVar9);
    FUN_088e747c(param_1 + 0xe00,puVar9);
    FUN_088e8434(param_1 + 0x1220,puVar9);
    FUN_088ea908(param_1 + 0x128c,puVar9);
    FUN_088e6820(param_1 + 0x12b0,puVar9);
    FUN_088ea3d4(param_1 + 0x135c,puVar9);
    iVar3 = FUN_088eacfc(param_1 + 0x12d8,puVar9);
    if (iVar3 == 0) {
      *(undefined1 *)((int)param_3 + 0x25) = 1;
      bVar6 = true;
    }
    *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 1;
    *(short *)(param_3 + 5) = *(short *)(param_3 + 5) + 1;
    if (bVar6) {
      fVar10 = (float)FUN_088e04c4(param_1);
      param_3[3] = param_3[3] + fVar10;
      return 1;
    }
  } while( true );
LAB_088e25a0:
  if ((-1 < *(int *)(puVar9 + iVar3 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(puVar9 + iVar3 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(puVar9 + iVar3 * 2 + 4) & 0x1f)) == 0)) {
    *(undefined1 *)(param_1 + 0x17b7) = 1;
    goto LAB_088e2610;
  }
  iVar3 = iVar3 + 1;
  if (5 < iVar3) {
LAB_088e2610:
    uVar5 = switchD_088e1c8c::default();
    return uVar5;
  }
  goto LAB_088e25a0;
LAB_088e2504:
  if ((-1 < *(int *)(puVar9 + iVar3 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(puVar9 + iVar3 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(puVar9 + iVar3 * 2 + 4) & 0x1f)) != 0)) {
    *(undefined1 *)(param_1 + 0x17b7) = 1;
    goto LAB_088e2574;
  }
  iVar3 = iVar3 + 1;
  if (5 < iVar3) {
LAB_088e2574:
    uVar5 = switchD_088e1c8c::default();
    return uVar5;
  }
  goto LAB_088e2504;
LAB_088e246c:
  if ((-1 < *(int *)(puVar9 + iVar3 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(puVar9 + iVar3 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(puVar9 + iVar3 * 2 + 4) & 0x1f)) != 0)) {
    *(undefined1 *)(param_1 + 0x17b7) = 0;
    goto LAB_088e24d8;
  }
  iVar3 = iVar3 + 1;
  if (5 < iVar3) {
LAB_088e24d8:
    uVar5 = switchD_088e1c8c::default();
    return uVar5;
  }
  goto LAB_088e246c;
LAB_088e23cc:
  if ((-1 < *(int *)(puVar9 + iVar3 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(puVar9 + iVar3 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(puVar9 + iVar3 * 2 + 4) & 0x1f)) == 0)) {
    *(undefined1 *)(param_1 + 0x17b7) = 0;
    goto LAB_088e2438;
  }
  iVar3 = iVar3 + 1;
  if (5 < iVar3) {
LAB_088e2438:
    uVar5 = switchD_088e1c8c::default();
    return uVar5;
  }
  goto LAB_088e23cc;
LAB_088e2350:
  if ((*(int *)(puVar9 + iVar3 * 2 + 4) != 0) &&
     ((int)*(char *)(param_1 + 0x17c0) == *(int *)(puVar9 + iVar3 * 2 + 4))) {
    *(undefined1 *)(param_1 + 0x17b7) = 1;
    goto LAB_088e2398;
  }
  iVar3 = iVar3 + 1;
  if (5 < iVar3) {
LAB_088e2398:
    uVar5 = switchD_088e1c8c::default();
    return uVar5;
  }
  goto LAB_088e2350;
  while (iVar3 = iVar3 + 1, iVar3 < 0x10) {
LAB_088e217c:
    if ((-1 < *(int *)(param_1 + iVar3 * 4 + 0x1638)) &&
       (*(int *)(param_1 + iVar3 * 4 + 0x1638) == *(int *)(param_2 + sVar2 * 0x10 + 6))) {
      bVar6 = true;
      break;
    }
  }
  if (bVar6) {
    uVar5 = switchD_088e1c8c::default();
    return uVar5;
  }
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4 + 0x1638) < 0) {
      *(undefined4 *)(param_1 + iVar3 * 4 + 0x1638) = *(undefined4 *)(param_2 + sVar2 * 0x10 + 6);
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  *(undefined1 *)(param_1 + 0x17af) = 1;
  uVar5 = switchD_088e1c8c::default();
  return uVar5;
  while( true ) {
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
    if (0x17 < iVar4) break;
LAB_088e2748:
    if (*(char *)((int)param_2 + iVar4) == '\0') break;
  }
  if (iVar3 < 2) {
    uVar1 = (undefined1)*param_2;
  }
  else {
    DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
    uVar1 = *(undefined1 *)((int)param_2 + (int)(DAT_09af84d0 >> 0x10 & 0x7fffU) % iVar3);
  }
  *(undefined1 *)(param_1 + 0x17c0) = uVar1;
  uVar5 = switchD_088e1c8c::default();
  return uVar5;
}

