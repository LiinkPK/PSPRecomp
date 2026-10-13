/* Entry 0x088E2980 | file offset 0x000DF958 | default | bytes 264 */

undefined4 switchD_088e1c8c::default(void)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int unaff_s0;
  ushort *unaff_s1;
  float *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  ushort *unaff_s5;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
code_r0x088e2980:
  do {
    while( true ) {
      FUN_088e4340(unaff_s0 + 0x5bc,unaff_s5);
      FUN_088e5be4(unaff_s0 + 0xd7c,unaff_s5);
      FUN_088e747c(unaff_s0 + 0xe00,unaff_s5);
      FUN_088e8434(unaff_s0 + 0x1220,unaff_s5);
      FUN_088ea908(unaff_s0 + 0x128c,unaff_s5);
      FUN_088e6820(unaff_s0 + 0x12b0,unaff_s5);
      FUN_088ea3d4(unaff_s0 + 0x135c,unaff_s5);
      iVar4 = FUN_088eacfc(unaff_s0 + 0x12d8,unaff_s5);
      if (iVar4 == 0) {
        *(undefined1 *)((int)unaff_s2 + 0x25) = 1;
        unaff_s3 = 1;
      }
      *(short *)(unaff_s2 + 4) = *(short *)(unaff_s2 + 4) + 1;
      *(short *)(unaff_s2 + 5) = *(short *)(unaff_s2 + 5) + 1;
      if ((unaff_s4 != 0) && ((int)*(short *)(unaff_s2 + 4) < (int)(uint)*unaff_s1)) {
        *(short *)(unaff_s2 + 4) = *(short *)(unaff_s2 + 4) + 1;
      }
      if (unaff_s3 != 0) {
        fVar9 = (float)FUN_088e04c4();
        unaff_s2[3] = unaff_s2[3] + fVar9;
        return 1;
      }
      unaff_s4 = 0;
      if ((int)(uint)*unaff_s1 <= (int)*(short *)(unaff_s2 + 4)) {
        return 0;
      }
      sVar2 = *(short *)(unaff_s2 + 4);
      unaff_s5 = unaff_s1 + sVar2 * 0x10 + 2;
      uVar6 = (uint)*unaff_s5;
      if (uVar6 < 0x25a) break;
      if (1099 < uVar6) {
        if (uVar6 == 0x4b2) {
          uVar3 = default();
          return uVar3;
        }
        if (uVar6 == 0x4b1) {
          uVar3 = default();
          return uVar3;
        }
        if (uVar6 != 0x4b0) {
          if (uVar6 == 0x44d) {
            FUN_08867888();
            uVar3 = default();
            return uVar3;
          }
          if (uVar6 != 0x44c) {
            uVar3 = default();
            return uVar3;
          }
          FUN_08867888();
          uVar3 = default();
          return uVar3;
        }
        if (*(char *)(unaff_s0 + 0x17c0) != '\0') {
          uVar3 = default();
          return uVar3;
        }
        iVar8 = 0;
        puVar7 = unaff_s1 + sVar2 * 0x10 + 6;
        iVar4 = 0;
        goto LAB_088e2748;
      }
      if (uVar6 < 0x387) {
        if (900 < uVar6) {
          if (uVar6 < 0x386) {
            *(undefined1 *)((int)unaff_s2 + 0x26) = 1;
            uVar3 = default();
            return uVar3;
          }
          *(undefined1 *)((int)unaff_s2 + 0x27) = 1;
          uVar3 = default();
          return uVar3;
        }
      }
      else {
        switch(uVar6) {
        case 0x3e9:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          iVar4 = 0;
          *(undefined1 *)(unaff_s0 + 0x17b7) = 0;
          goto LAB_088e2350;
        case 0x3ea:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          *(undefined1 *)(unaff_s0 + 0x17b7) = 1;
          iVar4 = 0;
          goto LAB_088e23cc;
        case 0x3eb:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          *(undefined1 *)(unaff_s0 + 0x17b7) = 1;
          iVar4 = 0;
          goto LAB_088e246c;
        case 0x3ec:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          iVar4 = 0;
          *(undefined1 *)(unaff_s0 + 0x17b7) = 0;
          goto LAB_088e2504;
        case 0x3ed:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          iVar4 = 0;
          *(undefined1 *)(unaff_s0 + 0x17b7) = 0;
          goto LAB_088e25a0;
        case 0x3ee:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          *(undefined1 *)(unaff_s0 + 0x17b7) = 1;
        case 1000:
          if (*(char *)(unaff_s0 + 0x17b8) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          if (*(char *)(unaff_s0 + 0x17b7) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          FUN_08935828(unaff_s0 + 0x1680,0,0x40);
          iVar4 = 0;
          do {
            FUN_08935524(unaff_s0 + iVar4 * 4 + 0x1680,unaff_s5 + iVar4 * 2 + 4,4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 6);
          *(undefined1 *)(unaff_s0 + 0x17b8) = 0;
          uVar3 = default();
          return uVar3;
        case 0x3ef:
          if (*(char *)(unaff_s0 + 0x17b7) == '\0') {
            uVar3 = default();
            return uVar3;
          }
          *(undefined1 *)(unaff_s0 + 0x17b8) = 0;
          uVar3 = default();
          return uVar3;
        }
      }
    }
    if (300 < uVar6) {
      if (uVar6 < 0x1fd) {
        if (uVar6 < 0x12e) {
          *(undefined1 *)((int)unaff_s2 + 0x22) = 1;
          uVar3 = default();
          return uVar3;
        }
        if (499 < uVar6) {
                    /* WARNING: Could not recover jumptable at 0x088e1c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)(&PTR_FUN_089cc4f0)[uVar6 - 500])();
          return uVar3;
        }
      }
      else if (599 < uVar6) {
        if (uVar6 < 0x259) {
          FUN_088e6bec(unaff_s0 + 0x12b0,*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6));
          *(undefined1 *)(unaff_s0 + 0x17af) = 1;
          uVar3 = default();
          return uVar3;
        }
        *(undefined1 *)(unaff_s2 + 9) = 1;
        uVar3 = default();
        return uVar3;
      }
      goto code_r0x088e2980;
    }
    if (uVar6 < 0x49) {
      switch(uVar6) {
      case 2:
        iVar4 = FUN_08873f10();
        if (iVar4 != 0) {
          uVar3 = default();
          return uVar3;
        }
        if (*(int *)(unaff_s1 + sVar2 * 0x10 + 6) == 0) {
          FUN_08873d34((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),0,0,0,1,2);
          FUN_08873dec(0,2);
        }
        else {
          FUN_08873d34((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),2,0,0,1,2);
          FUN_08873dec(2,2);
        }
        uVar3 = default();
        return uVar3;
      case 3:
        iVar4 = FUN_08873f10();
        if (iVar4 != 0) {
          uVar3 = default();
          return uVar3;
        }
        if (*(int *)(unaff_s1 + sVar2 * 0x10 + 6) == 0) {
          FUN_08873d34((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),1,0,0,1,2);
          FUN_08873dec(1,2);
        }
        else {
          FUN_08873d34((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),3,0,0,1,2);
          FUN_08873dec(3,2);
        }
        uVar3 = default();
        return uVar3;
      case 4:
        iVar4 = FUN_08873f10();
        if (iVar4 != 0) {
          uVar3 = default();
          return uVar3;
        }
        uVar3 = FUN_08873ce0(0,1,2);
        fVar9 = 0.0;
        in_stack_00000010 = 0;
        in_stack_00000014 = 0;
        in_stack_00000018 = 0;
        fVar10 = 4.0;
        in_stack_0000001c = 0x437f0000;
        fVar11 = 24.0;
        if (*(int *)(unaff_s1 + sVar2 * 0x10 + 6) != 0) {
          FUN_089a383c(0x437f0000,0x437f0000,0x437f0000,0x437f0000,&stack0x00000010);
        }
        if (0 < *(int *)(unaff_s1 + sVar2 * 0x10 + 8)) {
          fVar9 = (float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8);
        }
        if (0 < *(int *)(unaff_s1 + sVar2 * 0x10 + 10)) {
          fVar10 = (float)*(int *)(unaff_s1 + sVar2 * 0x10 + 10);
        }
        if (0 < *(int *)(unaff_s1 + sVar2 * 0x10 + 0xc)) {
          fVar11 = (float)*(int *)(unaff_s1 + sVar2 * 0x10 + 0xc);
        }
        FUN_08873b64(0,uVar3);
        if (0.0 < fVar9) {
          FUN_08873b64(fVar9,uVar3,&stack0x00000010,0,0);
        }
        if (0.0 < fVar10 + fVar9) {
          FUN_08873b64(fVar10 + fVar9,uVar3,&stack0x00000010,0,0);
        }
        FUN_08873b64(fVar10 + fVar9 + fVar11,uVar3);
        uVar3 = default();
        return uVar3;
      default:
        goto code_r0x088e2980;
      case 9:
        *(undefined1 *)(unaff_s2 + 8) = 1;
        uVar3 = default();
        return uVar3;
      case 10:
        *(undefined1 *)((int)unaff_s2 + 0x1e) = 1;
        *(char *)(unaff_s2 + 7) = (char)*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6);
        *(short *)((int)unaff_s2 + 0x12) = (short)*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8);
        uVar3 = default();
        return uVar3;
      case 0xb:
        *(undefined1 *)((int)unaff_s2 + 0x1f) = 1;
        uVar3 = default();
        return uVar3;
      case 0xc:
        if (*(int *)(unaff_s1 + sVar2 * 0x10 + 6) == 0) {
          FUN_08873958((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),unaff_s0 + 0x13c0,0,0,0,1);
          FUN_08873b34(unaff_s0 + 0x13c0,0);
        }
        else {
          FUN_08873958((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),unaff_s0 + 0x13c0,2,0,0,1);
          FUN_08873b34(unaff_s0 + 0x13c0,2);
        }
        uVar3 = default();
        return uVar3;
      case 0xd:
        if (*(int *)(unaff_s1 + sVar2 * 0x10 + 6) == 0) {
          FUN_08873958((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),unaff_s0 + 0x13c0,1,0,0,1);
          FUN_08873b34(unaff_s0 + 0x13c0,1);
        }
        else {
          FUN_08873958((float)*(int *)(unaff_s1 + sVar2 * 0x10 + 8),unaff_s0 + 0x13c0,3,0,0,1);
          FUN_08873b34(unaff_s0 + 0x13c0,3);
        }
        uVar3 = default();
        return uVar3;
      case 0xe:
        FUN_088749a0(*(float *)(unaff_s1 + sVar2 * 0x10 + 8) * 0.01,
                     *(float *)(unaff_s1 + sVar2 * 0x10 + 10) * 0.01,
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),0);
        uVar3 = default();
        return uVar3;
      case 0xf:
        *(undefined1 *)(unaff_s0 + 0x17b6) = 1;
        uVar3 = default();
        return uVar3;
      case 0x10:
        *(undefined1 *)(unaff_s0 + 0x17b5) = 1;
        uVar3 = default();
        return uVar3;
      case 0x11:
        iVar4 = *(int *)(unaff_s1 + sVar2 * 0x10 + 6);
        unaff_s2[1] = (float)iVar4;
        unaff_s2[2] = (float)iVar4;
        uVar3 = default();
        return uVar3;
      case 0x12:
        iVar4 = *(int *)(unaff_s1 + sVar2 * 0x10 + 6);
        unaff_s2[1] = unaff_s2[2] + (float)iVar4;
        unaff_s2[2] = unaff_s2[2] + (float)iVar4;
        uVar3 = default();
        return uVar3;
      case 0x13:
        unaff_s2[6] = *(float *)(unaff_s0 + *(int *)(unaff_s1 + sVar2 * 0x10 + 6) * 4 + 0xd7c);
        uVar3 = default();
        return uVar3;
      case 0x14:
        FUN_08873594(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),0x447a0000,DAT_089d5ec0 + 0x7e0);
        uVar3 = default();
        return uVar3;
      case 0x15:
        FUN_08873594(0x3f800000,*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),DAT_089d5ec0 + 0x7e0);
        uVar3 = default();
        return uVar3;
      case 0x16:
        FUN_088759fc(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 10),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 0xc),DAT_089d6040,0);
        FUN_08875980(DAT_089d6040);
        uVar3 = default();
        return uVar3;
      case 0x17:
        FUN_08875a84(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),DAT_089d6040);
        uVar3 = default();
        return uVar3;
      case 0x18:
        FUN_08875ae4(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),DAT_089d6040);
        uVar3 = default();
        return uVar3;
      case 0x19:
        FUN_088e09ac(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 10),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 0xc),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 0xe),unaff_s0 + 0x1600);
        uVar3 = default();
        return uVar3;
      case 0x1e:
        iVar4 = FUN_088678dc();
        if (iVar4 == 0) {
          uVar3 = default();
          return uVar3;
        }
        iVar4 = *(int *)(unaff_s1 + sVar2 * 0x10 + 6);
        break;
      case 0x1f:
        iVar4 = FUN_08867900();
        if (iVar4 == 0) {
          uVar3 = default();
          return uVar3;
        }
      case 1:
        iVar4 = *(int *)(unaff_s1 + sVar2 * 0x10 + 6);
        break;
      case 0x28:
        FUN_08861058(DAT_089d5e88);
        uVar3 = default();
        return uVar3;
      case 0x29:
        FUN_08861098(DAT_089d5e88);
        uVar3 = default();
        return uVar3;
      case 0x2a:
        FUN_088610d4(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8),DAT_089d5e88,
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),0);
        uVar3 = default();
        return uVar3;
      case 0x2b:
        FUN_08861148(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 10),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 0xc),DAT_089d5e88,0);
        uVar3 = default();
        return uVar3;
      case 0x2c:
        FUN_088610d4(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8),DAT_089d5e88,
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),1);
        uVar3 = default();
        return uVar3;
      case 0x2d:
        FUN_08861148(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 8),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 10),
                     *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 0xc),DAT_089d5e88,1);
        uVar3 = default();
        return uVar3;
      case 0x2e:
        FUN_088611d8(*(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6),DAT_089d5e88);
        uVar3 = default();
        return uVar3;
      case 0x3c:
        FUN_088e052c();
        uVar3 = default();
        return uVar3;
      case 0x48:
        *(undefined1 *)(unaff_s2 + 10) = 1;
        uVar3 = default();
        return uVar3;
      }
      *unaff_s2 = (float)iVar4;
      uVar3 = default();
      return uVar3;
    }
    if (uVar6 < 0xd0) {
      if (0xce < uVar6) {
        *(undefined1 *)((int)unaff_s2 + 0x21) = 1;
        uVar3 = default();
        return uVar3;
      }
    }
    else if (299 < uVar6) {
      iVar4 = 0;
      bVar5 = false;
      goto LAB_088e217c;
    }
  } while( true );
LAB_088e25a0:
  if ((-1 < *(int *)(unaff_s5 + iVar4 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(unaff_s5 + iVar4 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(unaff_s5 + iVar4 * 2 + 4) & 0x1f)) == 0)) {
    *(undefined1 *)(unaff_s0 + 0x17b7) = 1;
    goto LAB_088e2610;
  }
  iVar4 = iVar4 + 1;
  if (5 < iVar4) {
LAB_088e2610:
    uVar3 = default();
    return uVar3;
  }
  goto LAB_088e25a0;
LAB_088e2504:
  if ((-1 < *(int *)(unaff_s5 + iVar4 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(unaff_s5 + iVar4 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(unaff_s5 + iVar4 * 2 + 4) & 0x1f)) != 0)) {
    *(undefined1 *)(unaff_s0 + 0x17b7) = 1;
    goto LAB_088e2574;
  }
  iVar4 = iVar4 + 1;
  if (5 < iVar4) {
LAB_088e2574:
    uVar3 = default();
    return uVar3;
  }
  goto LAB_088e2504;
LAB_088e246c:
  if ((-1 < *(int *)(unaff_s5 + iVar4 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(unaff_s5 + iVar4 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(unaff_s5 + iVar4 * 2 + 4) & 0x1f)) != 0)) {
    *(undefined1 *)(unaff_s0 + 0x17b7) = 0;
    goto LAB_088e24d8;
  }
  iVar4 = iVar4 + 1;
  if (5 < iVar4) {
LAB_088e24d8:
    uVar3 = default();
    return uVar3;
  }
  goto LAB_088e246c;
LAB_088e23cc:
  if ((-1 < *(int *)(unaff_s5 + iVar4 * 2 + 4)) &&
     ((*(uint *)(DAT_089d726c + (*(uint *)(unaff_s5 + iVar4 * 2 + 4) >> 5) * 4) &
      1 << (*(uint *)(unaff_s5 + iVar4 * 2 + 4) & 0x1f)) == 0)) {
    *(undefined1 *)(unaff_s0 + 0x17b7) = 0;
    goto LAB_088e2438;
  }
  iVar4 = iVar4 + 1;
  if (5 < iVar4) {
LAB_088e2438:
    uVar3 = default();
    return uVar3;
  }
  goto LAB_088e23cc;
LAB_088e2350:
  if ((*(int *)(unaff_s5 + iVar4 * 2 + 4) != 0) &&
     ((int)*(char *)(unaff_s0 + 0x17c0) == *(int *)(unaff_s5 + iVar4 * 2 + 4))) {
    *(undefined1 *)(unaff_s0 + 0x17b7) = 1;
    goto LAB_088e2398;
  }
  iVar4 = iVar4 + 1;
  if (5 < iVar4) {
LAB_088e2398:
    uVar3 = default();
    return uVar3;
  }
  goto LAB_088e2350;
  while( true ) {
    iVar8 = iVar8 + 1;
    iVar4 = iVar4 + 1;
    if (0x17 < iVar8) break;
LAB_088e2748:
    if (*(char *)((int)puVar7 + iVar8) == '\0') break;
  }
  if (iVar4 < 2) {
    uVar1 = (undefined1)*puVar7;
  }
  else {
    DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
    uVar1 = *(undefined1 *)((int)puVar7 + (int)(DAT_09af84d0 >> 0x10 & 0x7fffU) % iVar4);
  }
  *(undefined1 *)(unaff_s0 + 0x17c0) = uVar1;
  uVar3 = default();
  return uVar3;
  while (iVar4 = iVar4 + 1, iVar4 < 0x10) {
LAB_088e217c:
    if ((-1 < *(int *)(unaff_s0 + iVar4 * 4 + 0x1638)) &&
       (*(int *)(unaff_s0 + iVar4 * 4 + 0x1638) == *(int *)(unaff_s1 + sVar2 * 0x10 + 6))) {
      bVar5 = true;
      break;
    }
  }
  if (bVar5) {
    uVar3 = default();
    return uVar3;
  }
  iVar4 = 0;
  do {
    if (*(int *)(unaff_s0 + iVar4 * 4 + 0x1638) < 0) {
      *(undefined4 *)(unaff_s0 + iVar4 * 4 + 0x1638) = *(undefined4 *)(unaff_s1 + sVar2 * 0x10 + 6);
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  *(undefined1 *)(unaff_s0 + 0x17af) = 1;
  uVar3 = default();
  return uVar3;
}

