/* Entry 0x08938380 | file offset 0x00135358 | FUN_08938380 | bytes 5352 */

int FUN_08938380(undefined4 param_1,int *param_2,char *param_3,uint *param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  uint *puVar13;
  ushort uVar14;
  int iVar15;
  int *piVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  undefined8 uVar26;
  char local_b0 [2];
  short local_ae;
  uint local_ac;
  char local_a8 [38];
  char local_82 [6];
  undefined4 local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  uint local_68;
  uint *local_64;
  char *local_60;
  char *local_5c;
  uint local_58;
  char *local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  
  local_7c = 0;
  local_48 = 0;
  local_5c = "                00000000000000000123456789abcdef";
  local_60 = "00000000000000000123456789abcdef";
  local_70 = "(null)";
  local_6c = "0123456789abcdef";
  local_74 = "0123456789ABCDEF";
  local_78 = "bug in vfprintf: bad base";
  local_64 = param_4;
LAB_0893840c:
  pcVar19 = param_3;
  do {
    iVar10 = FUN_0893f0ac(PTR_DAT_089d88e4,&local_ae,pcVar19,DAT_089d8dc0,&local_7c);
    if (iVar10 < 1) {
      iVar20 = (int)pcVar19 - (int)param_3;
      goto LAB_08938460;
    }
    pcVar19 = pcVar19 + iVar10;
  } while (local_ae != 0x25);
  pcVar19 = pcVar19 + -1;
  iVar20 = (int)pcVar19 - (int)param_3;
LAB_08938460:
  if (iVar20 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      iVar15 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar15 == 0) && (*(ushort *)(param_2 + 3) == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar15 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_08938224(iVar15,param_3,iVar20,0);
    }
    else if (iVar20 < param_2[2]) {
      FUN_08935524(*param_2,param_3,iVar20);
      *param_2 = *param_2 + iVar20;
      param_2[2] = param_2[2] - iVar20;
    }
    else {
      FUN_08935524(*param_2,param_3,param_2[2]);
      iVar15 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar15;
    }
    local_48 = iVar20 + local_48;
  }
  pcVar24 = local_78;
  if (iVar10 < 1) {
    uVar12 = *(ushort *)(param_2 + 3);
    goto LAB_08939814;
  }
  if ((param_2[2] < 1) && ((*(ushort *)(param_2 + 3) & 0x200) != 0)) {
    uVar12 = *(ushort *)(param_2 + 3);
LAB_08939814:
    if ((uVar12 & 0x200) == 0) {
      FUN_08938224((int)*(short *)((int)param_2 + 0xe),0,0,1);
    }
    return local_48;
  }
  local_4c = 0;
  uVar22 = 0;
  bVar8 = false;
  bVar5 = false;
  bVar4 = false;
  bVar7 = false;
  bVar2 = false;
  bVar6 = false;
  uVar25 = 0;
  uVar23 = 0xffffffff;
  local_b0[0] = '\0';
  pcVar17 = pcVar19 + 2;
  pcVar19 = pcVar19 + 1;
LAB_08938560:
  iVar10 = (int)*pcVar19;
  uVar18 = iVar10 - 0x20;
  bVar3 = uVar18 < 0x59;
  param_3 = pcVar17;
LAB_08938570:
  if (!bVar3) {
switchD_08938588_caseD_8938f34:
    if (iVar10 != 0) {
      local_a8[0] = (char)iVar10;
      uVar12 = *(ushort *)(param_2 + 3);
      local_b0[0] = '\0';
      local_ac = 1;
      local_50 = uVar22 & 4;
      uVar14 = uVar12 & 0x200;
      bVar2 = false;
      pcVar19 = local_a8;
      local_58 = uVar22;
      goto LAB_08938f6c;
    }
    uVar12 = *(ushort *)(param_2 + 3);
    goto LAB_08939814;
  }
  pcVar19 = param_3;
  switch((&switchD_08938588::switchdataD_089cfa08)[uVar18]) {
  case (undefined *)0x8938590:
    goto switchD_08938588_caseD_8938590;
  case (undefined *)0x89385a8:
    bVar4 = true;
    pcVar17 = param_3 + 1;
    goto LAB_08938560;
  case (undefined *)0x89385b4:
    bVar5 = true;
    pcVar17 = param_3 + 1;
    goto LAB_08938560;
  case (undefined *)0x89385c0:
    pcVar17 = param_3 + 1;
    puVar13 = local_64 + 1;
    uVar25 = *local_64;
    local_64 = puVar13;
    if (-1 < (int)uVar25) goto LAB_08938560;
    uVar25 = -uVar25;
    break;
  case (undefined *)0x89385e4:
    break;
  case (undefined *)0x89385f4:
    local_b0[0] = '+';
    pcVar17 = param_3 + 1;
    goto LAB_08938560;
  case (undefined *)0x8938604:
    iVar10 = (int)*param_3;
    pcVar19 = param_3 + 1;
    if (iVar10 == 0x2a) {
      pcVar17 = param_3 + 2;
      puVar13 = local_64 + 1;
      uVar23 = *local_64;
      local_64 = puVar13;
      if ((int)uVar23 < 0) {
        uVar23 = 0xffffffff;
      }
      goto LAB_08938560;
    }
    uVar23 = 0;
    param_3 = pcVar19;
    while (iVar10 - 0x30U < 10) {
      cVar9 = *param_3;
      param_3 = param_3 + 1;
      uVar23 = (uVar23 * 10 + iVar10) - 0x30;
      iVar10 = (int)cVar9;
    }
    uVar18 = iVar10 - 0x20;
    bVar3 = uVar18 < 0x59;
    if ((int)uVar23 < 0) {
      uVar23 = 0xffffffff;
    }
    goto LAB_08938570;
  case (undefined *)0x8938690:
    uVar22 = uVar22 | 0x80;
    pcVar17 = param_3 + 1;
    goto LAB_08938560;
  case (undefined *)0x893869c:
    goto switchD_08938588_caseD_893869c;
  case (undefined *)0x89386dc:
    bVar7 = true;
    pcVar17 = param_3 + 1;
    goto LAB_08938560;
  case (undefined *)0x89386e8:
    if (*param_3 == 'l') {
      bVar6 = true;
      pcVar17 = param_3 + 2;
      pcVar19 = param_3 + 1;
    }
    else {
      bVar2 = true;
      pcVar17 = param_3 + 1;
    }
    goto LAB_08938560;
  case (undefined *)0x8938710:
    goto switchD_08938588_caseD_8938710;
  case (undefined *)0x893871c:
    pcVar19 = local_a8;
    local_a8[0] = (char)*local_64;
    uVar12 = *(ushort *)(param_2 + 3);
    local_b0[0] = '\0';
    local_ac = 1;
    local_50 = uVar22 & 4;
    uVar14 = uVar12 & 0x200;
    bVar2 = false;
    local_64 = local_64 + 1;
    local_58 = uVar22;
    goto LAB_08938f6c;
  case (undefined *)0x8938764:
    bVar2 = true;
    goto LAB_0893878c;
  case (undefined *)0x893877c:
LAB_0893878c:
    if (bVar6) {
      puVar13 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar13 + 2;
      uVar11 = puVar13[1];
      uVar18 = *puVar13;
    }
    else {
      if (bVar2) {
        uVar18 = *local_64;
      }
      else if (bVar7) {
        uVar18 = (uint)(short)*local_64;
      }
      else {
        uVar18 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = (int)uVar18 >> 0x1f;
    }
    bVar2 = uVar18 != 0;
    if ((int)uVar11 < 0) {
      uVar18 = -uVar18;
      uVar11 = -(uint)bVar2 - uVar11;
      local_b0[0] = '-';
    }
    local_68 = 1;
LAB_08938c54:
    uVar26 = CONCAT44(uVar11,uVar18);
    if (-1 < (int)uVar23) {
      uVar22 = uVar22 & 0xffffff7f;
    }
    local_50 = uVar22 & 4;
    pcVar19 = local_82 + 2;
    local_58 = uVar22;
    local_4c = uVar23;
    if (((uVar18 == 0) && (uVar11 == 0)) && (uVar23 == 0)) goto LAB_08938ecc;
    if (local_68 == 0) {
      uVar22 = uVar18 & 7;
      do {
        do {
          pcVar24 = pcVar19;
          pcVar19 = pcVar24 + -1;
          *pcVar19 = (char)uVar22 + '0';
          uVar22 = uVar11 << 0x1d;
          uVar21 = uVar18 >> 3;
          uVar11 = uVar11 >> 3;
          uVar18 = uVar22 | uVar21;
          uVar22 = uVar21 & 7;
        } while (uVar18 != 0);
        uVar22 = uVar21 & 7;
      } while (uVar11 != 0);
      if ((bVar4) && (*pcVar19 != '0')) {
        pcVar19 = pcVar24 + -2;
        *pcVar19 = '0';
      }
    }
    else if (local_68 < 2) {
      if (uVar11 != 0 || 9 < uVar18) {
        do {
          local_40._4_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
          local_34 = 0;
          local_38 = 10;
          cVar9 = FUN_089997c0((int)uVar26,local_40._4_4_,10,0);
          local_40 = uVar26;
          pcVar19 = pcVar19 + -1;
          *pcVar19 = cVar9 + '0';
          uVar26 = FUN_0899924c((undefined4)local_40,local_40._4_4_,10,0);
          uVar22 = (uint)((ulonglong)uVar26 >> 0x20);
          uVar18 = (uint)uVar26;
        } while ((uVar22 != local_34 || local_38 <= uVar18) && local_34 <= uVar22);
      }
      pcVar19 = pcVar19 + -1;
      *pcVar19 = (char)uVar18 + '0';
    }
    else {
      if (2 < local_68) {
        local_ac = FUN_089359e8(local_78);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar14 = uVar12 & 0x200;
        bVar2 = (int)local_ac < (int)uVar23;
        pcVar19 = pcVar24;
        goto LAB_08938f6c;
      }
      uVar22 = uVar18 & 0xf;
      do {
        do {
          pcVar19 = pcVar19 + -1;
          *pcVar19 = local_54[uVar22];
          uVar22 = uVar11 << 0x1c;
          uVar21 = uVar18 >> 4;
          uVar11 = uVar11 >> 4;
          uVar18 = uVar22 | uVar21;
          uVar22 = uVar21 & 0xf;
        } while (uVar18 != 0);
        uVar22 = uVar21 & 0xf;
      } while (uVar11 != 0);
    }
LAB_08938ecc:
    if ((local_68 == 1) && (bVar5)) {
      pcVar19 = (char *)FUN_08938058(local_a8,pcVar19,local_82 + 2,&local_ac);
      uVar12 = *(ushort *)(param_2 + 3);
      uVar14 = uVar12 & 0x200;
      bVar2 = (int)local_ac < (int)uVar23;
    }
    else {
      local_ac = (int)(local_82 + 2) - (int)pcVar19;
      uVar12 = *(ushort *)(param_2 + 3);
      uVar14 = uVar12 & 0x200;
      bVar2 = (int)local_ac < (int)uVar23;
    }
LAB_08938f6c:
    pcVar24 = local_60;
    uVar23 = local_4c;
    if (!bVar2) {
      uVar23 = local_ac;
    }
    if (local_b0[0] == '\0') {
      if (bVar8) {
        uVar23 = uVar23 + 2;
      }
    }
    else {
      uVar23 = uVar23 + 1;
    }
    if ((local_58 == 0) && (iVar20 = uVar25 - uVar23, 0 < iVar20)) {
      for (; 0x10 < iVar20; iVar20 = iVar20 + -0x10) {
        if (uVar14 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          else {
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          FUN_08938224((int)sVar1,local_5c,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar14 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,local_5c,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar14 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,local_5c,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar14 = uVar12 & 0x200;
        }
      }
      if (uVar14 == 0) {
        iVar15 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar15 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar15 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08938224(iVar15,local_5c,iVar20,0);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar14 = uVar12 & 0x200;
      }
      else if (iVar20 < param_2[2]) {
        FUN_08935524(*param_2,local_5c,iVar20);
        *param_2 = *param_2 + iVar20;
        uVar12 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] - iVar20;
        uVar14 = uVar12 & 0x200;
      }
      else {
        FUN_08935524(*param_2,local_5c);
        uVar12 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2];
        param_2[2] = 0;
        uVar14 = uVar12 & 0x200;
      }
    }
    if (local_b0[0] == '\0') {
      if (bVar8) {
        local_82[2] = 0x30;
        local_82[3] = (char)iVar10;
        if (uVar14 == 0) {
          iVar10 = (int)*(short *)((int)param_2 + 0xe);
          if ((iVar10 == 0) && (uVar12 == 0)) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
            iVar10 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08938224(iVar10,local_82 + 2,2,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar14 = uVar12 & 0x200;
        }
        else if (param_2[2] < 3) {
          FUN_08935524(*param_2,local_82 + 2);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar14 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,local_82 + 2,2);
          *param_2 = *param_2 + 2;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -2;
          uVar14 = uVar12 & 0x200;
        }
      }
    }
    else if (uVar14 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar12 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_08938224(iVar10,local_b0,1,0);
      uVar12 = *(ushort *)(param_2 + 3);
      uVar14 = uVar12 & 0x200;
    }
    else if (param_2[2] < 2) {
      FUN_08935524(*param_2,local_b0);
      uVar12 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2];
      param_2[2] = 0;
      uVar14 = uVar12 & 0x200;
    }
    else {
      FUN_08935524(*param_2,local_b0,1);
      *param_2 = *param_2 + 1;
      uVar12 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] + -1;
      uVar14 = uVar12 & 0x200;
    }
    iVar10 = uVar25 - uVar23;
    if ((local_58 == 0x80) && (0 < iVar10)) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar14 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar20 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar20 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar20 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08938224(iVar20,pcVar24,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar14 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,pcVar24,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar14 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,pcVar24,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar14 = uVar12 & 0x200;
        }
      }
      if (uVar14 == 0) {
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar20 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar20 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08938224(iVar20,pcVar24,iVar10,0);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar14 = uVar12 & 0x200;
      }
      else if (iVar10 < param_2[2]) {
        FUN_08935524(*param_2,pcVar24,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar12 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] - iVar10;
        uVar14 = uVar12 & 0x200;
      }
      else {
        FUN_08935524(*param_2,pcVar24);
        uVar12 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2];
        param_2[2] = 0;
        uVar14 = uVar12 & 0x200;
      }
    }
    iVar10 = local_4c - local_ac;
    if (0 < iVar10) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar14 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar20 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar20 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar20 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08938224(iVar20,pcVar24,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar14 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,pcVar24,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar14 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,pcVar24,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar14 = uVar12 & 0x200;
        }
      }
      if (uVar14 == 0) {
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar20 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar20 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08938224(iVar20,pcVar24,iVar10,0);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar14 = uVar12 & 0x200;
      }
      else if (iVar10 < param_2[2]) {
        FUN_08935524(*param_2,pcVar24,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar12 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] - iVar10;
        uVar14 = uVar12 & 0x200;
      }
      else {
        FUN_08935524(*param_2,pcVar24);
        uVar12 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2];
        param_2[2] = 0;
        uVar14 = uVar12 & 0x200;
      }
    }
    if (uVar14 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar12 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_08938224(iVar10,pcVar19,local_ac,0);
    }
    else if ((int)local_ac < param_2[2]) {
      FUN_08935524(*param_2,pcVar19,local_ac);
      *param_2 = *param_2 + local_ac;
      param_2[2] = param_2[2] - local_ac;
    }
    else {
      FUN_08935524(*param_2,pcVar19,param_2[2]);
      iVar10 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar10;
    }
    pcVar19 = local_5c;
    if ((local_50 != 0) && (iVar10 = uVar25 - uVar23, 0 < iVar10)) {
      uVar12 = *(ushort *)(param_2 + 3);
      uVar14 = uVar12 & 0x200;
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar14 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar20 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar20 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar20 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08938224(iVar20,pcVar19,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar14 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,pcVar19,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar14 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,pcVar19,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar14 = uVar12 & 0x200;
        }
      }
      if (uVar14 == 0) {
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar20 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar20 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08938224(iVar20,pcVar19,iVar10,0);
      }
      else if (iVar10 < param_2[2]) {
        FUN_08935524(*param_2,pcVar19,iVar10);
        *param_2 = *param_2 + iVar10;
        param_2[2] = param_2[2] - iVar10;
      }
      else {
        FUN_08935524(*param_2,pcVar19,param_2[2]);
        iVar10 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar10;
      }
    }
    if ((int)uVar23 < (int)uVar25) {
      uVar23 = uVar25;
    }
    local_48 = local_48 + uVar23;
    goto LAB_0893840c;
  case (undefined *)0x8938864:
    goto switchD_08938588_caseD_8938864;
  case (undefined *)0x89388ec:
    bVar2 = true;
    goto LAB_08938914;
  case (undefined *)0x8938904:
LAB_08938914:
    if (bVar6) {
      puVar13 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar13 + 2;
      uVar11 = puVar13[1];
      uVar18 = *puVar13;
    }
    else {
      if (bVar2) {
        uVar18 = *local_64;
      }
      else if (bVar7) {
        uVar18 = *local_64 & 0xffff;
      }
      else {
        uVar18 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = 0;
    }
    local_68 = 0;
LAB_08938c50:
    local_b0[0] = '\0';
    goto LAB_08938c54;
  case (undefined *)0x89389a8:
    uVar18 = *local_64;
    local_54 = local_6c;
    uVar11 = 0;
    local_68 = 2;
    bVar8 = true;
    iVar10 = 0x78;
    local_64 = local_64 + 1;
    goto LAB_08938c50;
  case (undefined *)0x89389e0:
    local_50 = uVar22 & 4;
    pcVar19 = (char *)*local_64;
    if ((char *)*local_64 == (char *)0x0) {
      pcVar19 = local_70;
    }
    if ((int)uVar23 < 0) {
      local_64 = local_64 + 1;
      local_58 = uVar22;
      local_ac = FUN_089359e8(pcVar19);
      uVar12 = *(ushort *)(param_2 + 3);
      uVar14 = uVar12 & 0x200;
      bVar2 = (int)local_ac < 0;
    }
    else {
      local_64 = local_64 + 1;
      local_58 = uVar22;
      iVar20 = FUN_0893f6b0(pcVar19,0,uVar23);
      uVar12 = *(ushort *)(param_2 + 3);
      uVar14 = uVar12 & 0x200;
      if (iVar20 == 0) {
        bVar2 = (int)uVar23 < 0;
        local_ac = uVar23;
      }
      else {
        if (iVar20 - (int)pcVar19 <= (int)uVar23) {
          uVar23 = iVar20 - (int)pcVar19;
        }
        bVar2 = (int)uVar23 < 0;
        local_ac = uVar23;
      }
    }
    local_b0[0] = '\0';
    goto LAB_08938f6c;
  case (undefined *)0x8938a94:
    bVar2 = true;
    goto LAB_08938ac4;
  case (undefined *)0x8938ab0:
LAB_08938ac4:
    if (bVar6) {
      puVar13 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar13 + 2;
      uVar11 = puVar13[1];
      uVar18 = *puVar13;
    }
    else {
      if (bVar2) {
        uVar18 = *local_64;
      }
      else if (bVar7) {
        uVar18 = *local_64 & 0xffff;
      }
      else {
        uVar18 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = 0;
    }
    local_68 = 1;
    goto LAB_08938c50;
  case (undefined *)0x8938b5c:
    local_54 = local_74;
    goto LAB_08938b90;
  case (undefined *)0x8938b78:
    local_54 = local_6c;
LAB_08938b90:
    if (bVar6) {
      puVar13 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar13 + 2;
      uVar11 = puVar13[1];
      uVar18 = *puVar13;
    }
    else {
      if (bVar2) {
        uVar18 = *local_64;
      }
      else if (bVar7) {
        uVar18 = *local_64 & 0xffff;
      }
      else {
        uVar18 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = 0;
    }
    local_68 = 2;
    if ((bVar4) && ((uVar18 != 0 || (uVar11 != 0)))) {
      bVar8 = true;
    }
    goto LAB_08938c50;
  case (undefined *)0x8938f34:
    goto switchD_08938588_caseD_8938f34;
  }
  pcVar17 = param_3 + 1;
  uVar22 = uVar22 | 4;
  goto LAB_08938560;
switchD_08938588_caseD_8938710:
  bVar6 = true;
  pcVar17 = param_3 + 1;
  goto LAB_08938560;
switchD_08938588_caseD_8938864:
  if (bVar6) {
    piVar16 = (int *)*local_64;
    piVar16[1] = local_48 >> 0x1f;
    *piVar16 = local_48;
    local_64 = local_64 + 1;
  }
  else if (bVar2) {
    *(int *)*local_64 = local_48;
    local_64 = local_64 + 1;
  }
  else if (bVar7) {
    *(short *)*local_64 = (short)local_48;
    local_64 = local_64 + 1;
  }
  else {
    *(int *)*local_64 = local_48;
    local_64 = local_64 + 1;
  }
  goto LAB_0893840c;
switchD_08938588_caseD_893869c:
  uVar25 = 0;
  do {
    iVar20 = uVar25 * 10 + iVar10;
    iVar10 = (int)*param_3;
    param_3 = param_3 + 1;
    uVar25 = iVar20 - 0x30;
  } while (iVar10 - 0x30U < 10);
  uVar18 = iVar10 - 0x20;
  bVar3 = uVar18 < 0x59;
  goto LAB_08938570;
switchD_08938588_caseD_8938590:
  pcVar17 = param_3 + 1;
  if (local_b0[0] == '\0') {
    local_b0[0] = ' ';
  }
  goto LAB_08938560;
}

