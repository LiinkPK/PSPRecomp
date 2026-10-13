/* Entry 0x089369E0 | file offset 0x001339B8 | FUN_089369e0 | bytes 5752 */

int FUN_089369e0(undefined4 param_1,int *param_2,char *param_3,uint *param_4)

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
  undefined4 *puVar13;
  uint *puVar14;
  ushort uVar15;
  int iVar16;
  int *piVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  undefined8 uVar27;
  char local_1f0 [2];
  short local_1ee;
  uint local_1ec;
  char local_1e8 [346];
  char local_8e [6];
  undefined4 local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  undefined8 local_70;
  uint local_68;
  uint *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  char *local_54;
  uint local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  
  local_64 = param_4;
  FUN_0893dddc();
  local_88 = 0;
  local_40 = 0;
  local_54 = "                00000000000000000123456789abcdef";
  local_58 = "00000000000000000123456789abcdef";
  local_7c = "(null)";
  local_78 = "0123456789abcdef";
  local_80 = "0123456789ABCDEF";
  local_84 = "bug in vfprintf: bad base";
LAB_08936a70:
  pcVar20 = param_3;
  do {
    iVar10 = FUN_0893f0ac(PTR_DAT_089d88e4,&local_1ee,pcVar20,DAT_089d8dc0,&local_88);
    if (iVar10 < 1) {
      iVar21 = (int)pcVar20 - (int)param_3;
      goto LAB_08936ac4;
    }
    pcVar20 = pcVar20 + iVar10;
  } while (local_1ee != 0x25);
  pcVar20 = pcVar20 + -1;
  iVar21 = (int)pcVar20 - (int)param_3;
LAB_08936ac4:
  if (iVar21 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      iVar16 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar16 == 0) && (*(ushort *)(param_2 + 3) == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar16 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_08936794(iVar16,param_3,iVar21,0);
    }
    else if (iVar21 < param_2[2]) {
      FUN_08935524(*param_2,param_3,iVar21);
      *param_2 = *param_2 + iVar21;
      param_2[2] = param_2[2] - iVar21;
    }
    else {
      FUN_08935524(*param_2,param_3,param_2[2]);
      iVar16 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar16;
    }
    local_40 = iVar21 + local_40;
  }
  pcVar25 = local_84;
  if (iVar10 < 1) {
    uVar12 = *(ushort *)(param_2 + 3);
    goto LAB_08938004;
  }
  if ((param_2[2] < 1) && ((*(ushort *)(param_2 + 3) & 0x200) != 0)) {
    uVar12 = *(ushort *)(param_2 + 3);
LAB_08938004:
    if ((uVar12 & 0x200) == 0) {
      FUN_08936794((int)*(short *)((int)param_2 + 0xe),0,0,1);
    }
    return local_40;
  }
  local_44 = 0;
  uVar23 = 0;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  uVar24 = 0xffffffff;
  uVar26 = 0;
  local_1f0[0] = '\0';
  pcVar18 = pcVar20 + 2;
  pcVar20 = pcVar20 + 1;
LAB_08936bc4:
  iVar10 = (int)*pcVar20;
  uVar19 = iVar10 - 0x20;
  bVar2 = uVar19 < 0x59;
  param_3 = pcVar18;
LAB_08936bd4:
  if (!bVar2) {
switchD_08936bec_caseD_8937714:
    if (iVar10 != 0) {
      local_1e8[0] = (char)iVar10;
      local_1ec = 1;
      local_1f0[0] = '\0';
      local_48 = uVar23 & 4;
      pcVar20 = local_1e8;
      local_50 = uVar23;
      goto LAB_0893773c;
    }
    uVar12 = *(ushort *)(param_2 + 3);
    goto LAB_08938004;
  }
  pcVar20 = param_3;
  switch((&switchD_08936bec::switchdataD_089cf808)[uVar19]) {
  case (undefined *)0x8936bf4:
    goto switchD_08936bec_caseD_8936bf4;
  case (undefined *)0x8936c0c:
    bVar6 = true;
    pcVar18 = param_3 + 1;
    goto LAB_08936bc4;
  case (undefined *)0x8936c18:
    bVar7 = true;
    pcVar18 = param_3 + 1;
    goto LAB_08936bc4;
  case (undefined *)0x8936c24:
    pcVar18 = param_3 + 1;
    puVar14 = local_64 + 1;
    uVar26 = *local_64;
    local_64 = puVar14;
    if (-1 < (int)uVar26) goto LAB_08936bc4;
    uVar26 = -uVar26;
    break;
  case (undefined *)0x8936c48:
    break;
  case (undefined *)0x8936c58:
    local_1f0[0] = '+';
    pcVar18 = param_3 + 1;
    goto LAB_08936bc4;
  case (undefined *)0x8936c68:
    iVar10 = (int)*param_3;
    pcVar20 = param_3 + 1;
    if (iVar10 == 0x2a) {
      pcVar18 = param_3 + 2;
      puVar14 = local_64 + 1;
      uVar24 = *local_64;
      local_64 = puVar14;
      if ((int)uVar24 < 0) {
        uVar24 = 0xffffffff;
      }
      goto LAB_08936bc4;
    }
    uVar24 = 0;
    param_3 = pcVar20;
    while (iVar10 - 0x30U < 10) {
      cVar9 = *param_3;
      param_3 = param_3 + 1;
      uVar24 = (uVar24 * 10 + iVar10) - 0x30;
      iVar10 = (int)cVar9;
    }
    uVar19 = iVar10 - 0x20;
    bVar2 = uVar19 < 0x59;
    if ((int)uVar24 < 0) {
      uVar24 = 0xffffffff;
    }
    goto LAB_08936bd4;
  case (undefined *)0x8936cf4:
    uVar23 = uVar23 | 0x80;
    pcVar18 = param_3 + 1;
    goto LAB_08936bc4;
  case (undefined *)0x8936d00:
    goto switchD_08936bec_caseD_8936d00;
  case (undefined *)0x8936d40:
    pcVar18 = param_3 + 1;
    goto LAB_08936bc4;
  case (undefined *)0x8936d4c:
    bVar5 = true;
    pcVar18 = param_3 + 1;
    goto LAB_08936bc4;
  case (undefined *)0x8936d58:
    if (*param_3 == 'l') {
      bVar4 = true;
      pcVar18 = param_3 + 2;
      pcVar20 = param_3 + 1;
    }
    else {
      bVar3 = true;
      pcVar18 = param_3 + 1;
    }
    goto LAB_08936bc4;
  case (undefined *)0x8936d80:
    goto switchD_08936bec_caseD_8936d80;
  case (undefined *)0x8936d8c:
    pcVar20 = local_1e8;
    local_1e8[0] = (char)*local_64;
    local_1ec = 1;
    local_1f0[0] = '\0';
    local_48 = uVar23 & 4;
    local_64 = local_64 + 1;
    local_50 = uVar23;
    goto LAB_0893773c;
  case (undefined *)0x8936dc4:
    bVar3 = true;
    goto LAB_08936dec;
  case (undefined *)0x8936ddc:
LAB_08936dec:
    if (bVar4) {
      puVar14 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar14 + 2;
      uVar11 = puVar14[1];
      uVar19 = *puVar14;
    }
    else {
      if (bVar3) {
        uVar19 = *local_64;
      }
      else if (bVar5) {
        uVar19 = (uint)(short)*local_64;
      }
      else {
        uVar19 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = (int)uVar19 >> 0x1f;
    }
    bVar3 = uVar19 != 0;
    if ((int)uVar11 < 0) {
      uVar19 = -uVar19;
      uVar11 = -(uint)bVar3 - uVar11;
      local_1f0[0] = '-';
    }
    local_68 = 1;
LAB_08937464:
    uVar27 = CONCAT44(uVar11,uVar19);
    if (-1 < (int)uVar24) {
      uVar23 = uVar23 & 0xffffff7f;
    }
    local_48 = uVar23 & 4;
    pcVar20 = local_8e + 2;
    local_50 = uVar23;
    local_44 = uVar24;
    if (((uVar19 == 0) && (uVar11 == 0)) && (uVar24 == 0)) goto LAB_089376cc;
    if (local_68 == 0) {
      uVar24 = uVar19 & 7;
      do {
        do {
          pcVar25 = pcVar20;
          pcVar20 = pcVar25 + -1;
          *pcVar20 = (char)uVar24 + '0';
          uVar24 = uVar11 << 0x1d;
          uVar23 = uVar19 >> 3;
          uVar11 = uVar11 >> 3;
          uVar19 = uVar24 | uVar23;
          uVar24 = uVar23 & 7;
        } while (uVar19 != 0);
        uVar24 = uVar23 & 7;
      } while (uVar11 != 0);
      if ((bVar6) && (*pcVar20 != '0')) {
        pcVar20 = pcVar25 + -2;
        *pcVar20 = '0';
      }
    }
    else if (local_68 < 2) {
      if (uVar11 != 0 || 9 < uVar19) {
        do {
          local_38._4_4_ = (undefined4)((ulonglong)uVar27 >> 0x20);
          local_2c = 0;
          local_30 = 10;
          cVar9 = FUN_089997c0((int)uVar27,local_38._4_4_,10,0);
          local_38 = uVar27;
          pcVar20 = pcVar20 + -1;
          *pcVar20 = cVar9 + '0';
          uVar27 = FUN_0899924c((undefined4)local_38,local_38._4_4_,10,0);
          uVar24 = (uint)((ulonglong)uVar27 >> 0x20);
          uVar19 = (uint)uVar27;
        } while ((uVar24 != local_2c || local_30 <= uVar19) && local_2c <= uVar24);
      }
      pcVar20 = pcVar20 + -1;
      *pcVar20 = (char)uVar19 + '0';
    }
    else {
      if (2 < local_68) {
        local_1ec = FUN_089359e8(local_84);
        pcVar20 = pcVar25;
        goto LAB_0893773c;
      }
      uVar24 = uVar19 & 0xf;
      do {
        do {
          pcVar20 = pcVar20 + -1;
          *pcVar20 = local_4c[uVar24];
          uVar24 = uVar11 << 0x1c;
          uVar23 = uVar19 >> 4;
          uVar11 = uVar11 >> 4;
          uVar19 = uVar24 | uVar23;
          uVar24 = uVar23 & 0xf;
        } while (uVar19 != 0);
        uVar24 = uVar23 & 0xf;
      } while (uVar11 != 0);
    }
LAB_089376cc:
    if ((local_68 == 1) && (bVar7)) {
      pcVar20 = (char *)FUN_08938058(local_1e8,pcVar20,local_8e + 2,&local_1ec);
    }
    else {
      local_1ec = (int)(local_8e + 2) - (int)pcVar20;
    }
LAB_0893773c:
    pcVar25 = local_58;
    uVar12 = *(ushort *)(param_2 + 3);
    uVar15 = uVar12 & 0x200;
    uVar24 = local_44;
    if ((int)local_44 <= (int)local_1ec) {
      uVar24 = local_1ec;
    }
    if (local_1f0[0] == '\0') {
      if (bVar8) {
        uVar24 = uVar24 + 2;
      }
    }
    else {
      uVar24 = uVar24 + 1;
    }
    if ((local_50 == 0) && (iVar21 = uVar26 - uVar24, 0 < iVar21)) {
      for (; 0x10 < iVar21; iVar21 = iVar21 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          else {
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          FUN_08936794((int)sVar1,local_54,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar15 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,local_54,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar15 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,local_54,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar12 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar16 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar16 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar16 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08936794(iVar16,local_54,iVar21,0);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar15 = uVar12 & 0x200;
      }
      else if (iVar21 < param_2[2]) {
        FUN_08935524(*param_2,local_54,iVar21);
        *param_2 = *param_2 + iVar21;
        uVar12 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] - iVar21;
        uVar15 = uVar12 & 0x200;
      }
      else {
        FUN_08935524(*param_2,local_54,param_2[2]);
        uVar12 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2];
        param_2[2] = 0;
        uVar15 = uVar12 & 0x200;
      }
    }
    if (local_1f0[0] == '\0') {
      if (bVar8) {
        local_8e[2] = 0x30;
        local_8e[3] = (char)iVar10;
        if (uVar15 == 0) {
          iVar10 = (int)*(short *)((int)param_2 + 0xe);
          if ((iVar10 == 0) && (uVar12 == 0)) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
            iVar10 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08936794(iVar10,local_8e + 2,2,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar15 = uVar12 & 0x200;
        }
        else if (param_2[2] < 3) {
          FUN_08935524(*param_2,local_8e + 2,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar15 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,local_8e + 2,2);
          *param_2 = *param_2 + 2;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -2;
          uVar15 = uVar12 & 0x200;
        }
      }
    }
    else if (uVar15 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar12 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_08936794(iVar10,local_1f0,1,0);
      uVar12 = *(ushort *)(param_2 + 3);
      uVar15 = uVar12 & 0x200;
    }
    else if (param_2[2] < 2) {
      FUN_08935524(*param_2,local_1f0,param_2[2]);
      uVar12 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2];
      param_2[2] = 0;
      uVar15 = uVar12 & 0x200;
    }
    else {
      FUN_08935524(*param_2,local_1f0,1);
      *param_2 = *param_2 + 1;
      uVar12 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] + -1;
      uVar15 = uVar12 & 0x200;
    }
    iVar10 = uVar26 - uVar24;
    if ((local_50 == 0x80) && (0 < iVar10)) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar21 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08936794(iVar21,pcVar25,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar15 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,pcVar25,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar15 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,pcVar25,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar12 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar21 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar21 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08936794(iVar21,pcVar25,iVar10,0);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar15 = uVar12 & 0x200;
      }
      else if (iVar10 < param_2[2]) {
        FUN_08935524(*param_2,pcVar25,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar12 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] - iVar10;
        uVar15 = uVar12 & 0x200;
      }
      else {
        FUN_08935524(*param_2,pcVar25,param_2[2]);
        uVar12 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2];
        param_2[2] = 0;
        uVar15 = uVar12 & 0x200;
      }
    }
    iVar10 = local_44 - local_1ec;
    if (0 < iVar10) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar21 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08936794(iVar21,pcVar25,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar15 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,pcVar25,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar15 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,pcVar25,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar12 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar21 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar21 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08936794(iVar21,pcVar25,iVar10,0);
        uVar12 = *(ushort *)(param_2 + 3);
        uVar15 = uVar12 & 0x200;
      }
      else if (iVar10 < param_2[2]) {
        FUN_08935524(*param_2,pcVar25,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar12 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] - iVar10;
        uVar15 = uVar12 & 0x200;
      }
      else {
        FUN_08935524(*param_2,pcVar25,param_2[2]);
        uVar12 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2];
        param_2[2] = 0;
        uVar15 = uVar12 & 0x200;
      }
    }
    if (uVar15 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar12 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_08936794(iVar10,pcVar20,local_1ec,0);
    }
    else if ((int)local_1ec < param_2[2]) {
      FUN_08935524(*param_2,pcVar20,local_1ec);
      *param_2 = *param_2 + local_1ec;
      param_2[2] = param_2[2] - local_1ec;
    }
    else {
      FUN_08935524(*param_2,pcVar20,param_2[2]);
      iVar10 = param_2[2];
      param_2[2] = 0;
      *param_2 = *param_2 + iVar10;
    }
    pcVar20 = local_54;
    if ((local_48 != 0) && (iVar10 = uVar26 - uVar24, 0 < iVar10)) {
      uVar12 = *(ushort *)(param_2 + 3);
      uVar15 = uVar12 & 0x200;
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar12 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar21 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_08936794(iVar21,pcVar20,0x10,0);
          uVar12 = *(ushort *)(param_2 + 3);
          uVar15 = uVar12 & 0x200;
        }
        else if (param_2[2] < 0x11) {
          FUN_08935524(*param_2,pcVar20,param_2[2]);
          uVar12 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + param_2[2];
          param_2[2] = 0;
          uVar15 = uVar12 & 0x200;
        }
        else {
          FUN_08935524(*param_2,pcVar20,0x10);
          *param_2 = *param_2 + 0x10;
          uVar12 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar12 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar21 == 0) && (uVar12 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar21 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_08936794(iVar21,pcVar20,iVar10,0);
      }
      else if (iVar10 < param_2[2]) {
        FUN_08935524(*param_2,pcVar20,iVar10);
        *param_2 = *param_2 + iVar10;
        param_2[2] = param_2[2] - iVar10;
      }
      else {
        FUN_08935524(*param_2,pcVar20,param_2[2]);
        iVar10 = param_2[2];
        param_2[2] = 0;
        *param_2 = *param_2 + iVar10;
      }
    }
    if ((int)uVar24 < (int)uVar26) {
      uVar24 = uVar26;
    }
    local_40 = local_40 + uVar24;
    goto LAB_08936a70;
  case (undefined *)0x8936ec4:
    local_48 = uVar23 & 4;
    uVar22 = 0;
    if (uVar24 == 0xffffffff) {
      uVar24 = 6;
    }
    puVar13 = (undefined4 *)((int)local_64 + ((uint)local_64 & 7));
    local_64 = puVar13 + 2;
    local_5c = puVar13[1];
    local_60 = *puVar13;
    if ((iVar10 == 0x67) || (local_50 = uVar23, iVar10 == 0x47)) {
      local_50 = uVar23;
      iVar21 = FUN_0899a790(local_60,local_5c,0,0);
      uVar27 = CONCAT44(local_5c,local_60);
      if (iVar21 == 0) {
        uVar27 = 0x3ff0000000000000;
      }
      else {
        iVar21 = FUN_0899a790(local_60,local_5c,0,0);
        if (iVar21 < 0) {
          uVar27 = FUN_0899a99c(local_60,local_5c);
        }
        uVar27 = FUN_0893edf4((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
      }
      local_70 = uVar27;
      iVar21 = FUN_0899a790((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0xc0100000);
      if (iVar21 < 0) {
LAB_08937008:
        iVar21 = 0x45;
        if (iVar10 == 0x67) {
          iVar21 = 0x65;
        }
      }
      else {
        uVar27 = FUN_0899a7ec(uVar24);
        iVar21 = FUN_0899a790((undefined4)local_70,local_70._4_4_,(int)uVar27,
                              (int)((ulonglong)uVar27 >> 0x20));
        if (-1 < iVar21) goto LAB_08937008;
        iVar21 = 0x66;
      }
      uVar22 = 1;
      iVar10 = iVar21;
    }
    if (bVar6) {
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar22 = 0;
    }
    pcVar20 = (char *)FUN_08936034(local_60,local_5c,uVar24,(int)(char)iVar10,uVar22,local_1f0);
    local_1ec = FUN_089359e8(pcVar20);
    if (bVar7) {
      pcVar20 = (char *)FUN_08938058(pcVar20,pcVar20,pcVar20 + local_1ec,&local_1ec);
    }
    goto LAB_0893773c;
  case (undefined *)0x8937090:
    goto switchD_08936bec_caseD_8937090;
  case (undefined *)0x8937118:
    bVar3 = true;
    goto LAB_08937140;
  case (undefined *)0x8937130:
LAB_08937140:
    if (bVar4) {
      puVar14 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar14 + 2;
      uVar11 = puVar14[1];
      uVar19 = *puVar14;
    }
    else {
      if (bVar3) {
        uVar19 = *local_64;
      }
      else if (bVar5) {
        uVar19 = *local_64 & 0xffff;
      }
      else {
        uVar19 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = 0;
    }
    local_68 = 0;
LAB_08937460:
    local_1f0[0] = '\0';
    goto LAB_08937464;
  case (undefined *)0x89371d4:
    uVar19 = *local_64;
    local_4c = local_78;
    uVar11 = 0;
    local_68 = 2;
    bVar8 = true;
    iVar10 = 0x78;
    local_64 = local_64 + 1;
    goto LAB_08937460;
  case (undefined *)0x893720c:
    local_48 = uVar23 & 4;
    pcVar20 = (char *)*local_64;
    if ((char *)*local_64 == (char *)0x0) {
      pcVar20 = local_7c;
    }
    if ((int)uVar24 < 0) {
      local_64 = local_64 + 1;
      local_50 = uVar23;
      local_1ec = FUN_089359e8(pcVar20);
    }
    else {
      local_64 = local_64 + 1;
      local_50 = uVar23;
      iVar21 = FUN_0893f6b0(pcVar20,0,uVar24);
      local_1ec = uVar24;
      if ((iVar21 != 0) && (iVar21 - (int)pcVar20 <= (int)uVar24)) {
        local_1ec = iVar21 - (int)pcVar20;
      }
    }
    local_1f0[0] = '\0';
    goto LAB_0893773c;
  case (undefined *)0x89372a4:
    bVar3 = true;
    goto LAB_089372d4;
  case (undefined *)0x89372c0:
LAB_089372d4:
    if (bVar4) {
      puVar14 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar14 + 2;
      uVar11 = puVar14[1];
      uVar19 = *puVar14;
    }
    else {
      if (bVar3) {
        uVar19 = *local_64;
      }
      else if (bVar5) {
        uVar19 = *local_64 & 0xffff;
      }
      else {
        uVar19 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = 0;
    }
    local_68 = 1;
    goto LAB_08937460;
  case (undefined *)0x893736c:
    local_4c = local_80;
    goto LAB_089373a0;
  case (undefined *)0x8937388:
    local_4c = local_78;
LAB_089373a0:
    if (bVar4) {
      puVar14 = (uint *)((int)local_64 + ((uint)local_64 & 7));
      local_64 = puVar14 + 2;
      uVar11 = puVar14[1];
      uVar19 = *puVar14;
    }
    else {
      if (bVar3) {
        uVar19 = *local_64;
      }
      else if (bVar5) {
        uVar19 = *local_64 & 0xffff;
      }
      else {
        uVar19 = *local_64;
      }
      local_64 = local_64 + 1;
      uVar11 = 0;
    }
    local_68 = 2;
    if ((bVar6) && ((uVar19 != 0 || (uVar11 != 0)))) {
      bVar8 = true;
    }
    goto LAB_08937460;
  case (undefined *)0x8937714:
    goto switchD_08936bec_caseD_8937714;
  }
  pcVar18 = param_3 + 1;
  uVar23 = uVar23 | 4;
  goto LAB_08936bc4;
switchD_08936bec_caseD_8936d80:
  bVar4 = true;
  pcVar18 = param_3 + 1;
  goto LAB_08936bc4;
switchD_08936bec_caseD_8937090:
  if (bVar4) {
    piVar17 = (int *)*local_64;
    piVar17[1] = local_40 >> 0x1f;
    *piVar17 = local_40;
    local_64 = local_64 + 1;
  }
  else if (bVar3) {
    *(int *)*local_64 = local_40;
    local_64 = local_64 + 1;
  }
  else if (bVar5) {
    *(short *)*local_64 = (short)local_40;
    local_64 = local_64 + 1;
  }
  else {
    *(int *)*local_64 = local_40;
    local_64 = local_64 + 1;
  }
  goto LAB_08936a70;
switchD_08936bec_caseD_8936d00:
  uVar26 = 0;
  do {
    iVar21 = uVar26 * 10 + iVar10;
    iVar10 = (int)*param_3;
    param_3 = param_3 + 1;
    uVar26 = iVar21 - 0x30;
  } while (iVar10 - 0x30U < 10);
  uVar19 = iVar10 - 0x20;
  bVar2 = uVar19 < 0x59;
  goto LAB_08936bd4;
switchD_08936bec_caseD_8936bf4:
  pcVar18 = param_3 + 1;
  if (local_1f0[0] == '\0') {
    local_1f0[0] = ' ';
  }
  goto LAB_08936bc4;
}

