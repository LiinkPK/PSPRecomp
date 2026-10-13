/* Entry 0x0893BBC4 | file offset 0x00138B9C | FUN_0893bbc4 | bytes 4756 */

/* WARNING: Removing unreachable block (ram,0x0893c38c) */

int FUN_0893bbc4(undefined4 param_1,int *param_2,ushort *param_3,uint *param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  wchar_t *pwVar9;
  ushort uVar10;
  uint *puVar11;
  ushort uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  short *psVar21;
  uint uVar22;
  wchar_t *pwVar23;
  uint uVar24;
  uint uVar25;
  short local_c0 [2];
  uint local_bc;
  wchar_t local_b8 [38];
  wchar_t local_6c [2];
  wchar_t local_68 [2];
  wchar_t *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  uint *local_50;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t *local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  
  local_34 = 0;
  local_64 = L"                00000000000000000123456789abcdef";
  local_4c = L"00000000000000000123456789abcdef";
  local_58 = L"(null)";
  local_54 = L"0123456789abcdef";
  local_5c = L"0123456789ABCDEF";
  local_60 = L"bug in vfprintf: bad base";
  local_50 = param_4;
LAB_0893bc50:
  iVar18 = 0;
  iVar20 = 0;
  uVar10 = *param_3;
  puVar14 = param_3;
  while ((uVar10 != 0 && (puVar14 = puVar14 + 1, uVar10 != 0x25))) {
    iVar18 = iVar18 + 1;
    iVar20 = iVar20 + 2;
    uVar10 = *puVar14;
  }
  psVar21 = (short *)((int)param_3 + iVar20);
  if (*psVar21 == 0) {
    iVar18 = 0;
  }
  else {
    iVar20 = (int)psVar21 - (int)param_3;
    if ((*psVar21 != 0x25) || (iVar20 = (int)psVar21 - (int)param_3, iVar18 != 0))
    goto LAB_0893bcbc;
    iVar18 = 1;
  }
  iVar20 = (int)psVar21 - (int)param_3;
LAB_0893bcbc:
  iVar20 = iVar20 / 2;
  if (iVar20 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      iVar13 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar13 == 0) && (*(ushort *)(param_2 + 3) == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar13 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar13,param_3,iVar20);
    }
    else if ((uint)(iVar20 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,param_3,iVar20);
      *param_2 = *param_2 + iVar20 * 2;
      param_2[2] = param_2[2] - iVar20;
    }
    else {
      FUN_0893f7e4(*param_2,param_3,param_2[2]);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
    }
    local_34 = iVar20 + local_34;
  }
  pwVar9 = local_60;
  if (iVar18 < 1) {
    uVar10 = *(ushort *)(param_2 + 3);
  }
  else {
    if ((0 < param_2[2]) || ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
      local_38 = 0;
      uVar22 = 0;
      bVar8 = false;
      bVar4 = false;
      bVar7 = false;
      bVar6 = false;
      bVar2 = false;
      bVar5 = false;
      uVar24 = 0;
      uVar19 = 0xffffffff;
      local_c0[0] = 0;
      puVar14 = (ushort *)(psVar21 + 2);
      param_3 = (ushort *)(psVar21 + 1);
LAB_0893bdbc:
      uVar17 = (uint)*param_3;
LAB_0893bdc0:
      uVar15 = uVar17 - 0x20;
      bVar3 = uVar15 < 0x59;
      param_3 = puVar14;
LAB_0893bdcc:
      if (!bVar3) {
switchD_0893bde4_caseD_893c500:
        if (uVar17 == 0) {
          uVar10 = *(ushort *)(param_2 + 3);
          goto LAB_0893ce08;
        }
        local_b8[0] = (wchar_t)uVar17;
        uVar10 = *(ushort *)(param_2 + 3);
        local_c0[0] = 0;
        local_bc = 1;
        local_3c = uVar22 & 4;
        uVar12 = uVar10 & 0x200;
        bVar2 = false;
        pwVar9 = local_b8;
        local_48 = uVar22;
        goto LAB_0893c538;
      }
      switch((&switchD_0893bde4::switchdataD_089cff60)[uVar15]) {
      case (undefined *)0x893bdec:
        puVar14 = param_3 + 1;
        if (local_c0[0] == 0) {
          local_c0[0] = 0x20;
        }
        goto LAB_0893bdbc;
      case (undefined *)0x893be04:
        bVar7 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893bdbc;
      case (undefined *)0x893be10:
        bVar4 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893bdbc;
      case (undefined *)0x893be1c:
        goto switchD_0893bde4_caseD_893be1c;
      case (undefined *)0x893be40:
        goto LAB_0893be48;
      case (undefined *)0x893be50:
        local_c0[0] = 0x2b;
        puVar14 = param_3 + 1;
        goto LAB_0893bdbc;
      case (undefined *)0x893be60:
        uVar17 = (uint)*param_3;
        if (uVar17 == 0x2a) {
          puVar14 = param_3 + 2;
          uVar19 = *local_50;
          if ((int)uVar19 < 0) {
            uVar19 = 0xffffffff;
          }
          uVar17 = (uint)param_3[1];
          local_50 = local_50 + 1;
          goto LAB_0893bdc0;
        }
        uVar19 = 0;
        param_3 = param_3 + 1;
        while (uVar17 - 0x30 < 10) {
          uVar10 = *param_3;
          param_3 = param_3 + 1;
          uVar19 = (uVar19 * 10 + uVar17) - 0x30;
          uVar17 = (uint)uVar10;
        }
        uVar15 = uVar17 - 0x20;
        bVar3 = uVar15 < 0x59;
        if ((int)uVar19 < 0) {
          uVar19 = 0xffffffff;
        }
        goto LAB_0893bdcc;
      case (undefined *)0x893bee8:
        uVar22 = uVar22 | 0x80;
        puVar14 = param_3 + 1;
        goto LAB_0893bdbc;
      case (undefined *)0x893bef4:
        goto switchD_0893bde4_caseD_893bef4;
      case (undefined *)0x893bf34:
        bVar6 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893bdbc;
      case (undefined *)0x893bf40:
        if (*param_3 == 0x6c) {
          bVar5 = true;
          puVar14 = param_3 + 2;
          param_3 = param_3 + 1;
        }
        else {
          bVar2 = true;
          puVar14 = param_3 + 1;
        }
        goto LAB_0893bdbc;
      case (undefined *)0x893bf68:
        bVar5 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893bdbc;
      case (undefined *)0x893bf74:
        pwVar9 = local_b8;
        local_b8[0] = (wchar_t)*local_50;
        uVar10 = *(ushort *)(param_2 + 3);
        local_c0[0] = 0;
        local_bc = 1;
        local_3c = uVar22 & 4;
        uVar12 = uVar10 & 0x200;
        bVar2 = false;
        local_50 = local_50 + 1;
        local_48 = uVar22;
        goto LAB_0893c538;
      case (undefined *)0x893bfbc:
        bVar2 = true;
        break;
      case (undefined *)0x893bfd0:
        break;
      case (undefined *)0x893c050:
        puVar11 = local_50 + 1;
        if (bVar5) {
          *(int *)*local_50 = local_34;
          local_50 = puVar11;
        }
        else if (bVar2) {
          *(int *)*local_50 = local_34;
          local_50 = puVar11;
        }
        else if (bVar6) {
          *(short *)*local_50 = (short)local_34;
          local_50 = puVar11;
        }
        else {
          *(int *)*local_50 = local_34;
          local_50 = puVar11;
        }
        goto LAB_0893bc50;
      case (undefined *)0x893c0b4:
        bVar2 = true;
        goto LAB_0893c0d4;
      case (undefined *)0x893c0c8:
LAB_0893c0d4:
        if (bVar5) {
          uVar15 = *local_50;
        }
        else if (bVar2) {
          uVar15 = *local_50;
        }
        else if (bVar6) {
          uVar15 = *local_50 & 0xffff;
        }
        else {
          uVar15 = *local_50;
        }
        uVar25 = 0;
        uVar16 = uVar15 | uVar19;
LAB_0893c34c:
        local_c0[0] = 0;
        goto LAB_0893c350;
      case (undefined *)0x893c130:
        uVar15 = *local_50;
        uVar25 = 2;
        bVar8 = true;
        local_40 = local_54;
        uVar17 = 0x78;
        uVar16 = uVar15 | uVar19;
        goto LAB_0893c34c;
      case (undefined *)0x893c15c:
        local_3c = uVar22 & 4;
        pwVar9 = (wchar_t *)*local_50;
        if ((wchar_t *)*local_50 == (wchar_t *)0x0) {
          pwVar9 = local_58;
        }
        if ((int)uVar19 < 0) {
          local_50 = local_50 + 1;
          local_48 = uVar22;
          local_bc = FUN_08935e90(pwVar9);
          uVar10 = *(ushort *)(param_2 + 3);
          uVar12 = uVar10 & 0x200;
          bVar2 = (int)local_bc < 0;
        }
        else {
          local_50 = local_50 + 1;
          local_48 = uVar22;
          iVar18 = FUN_0893f6f4(pwVar9,0,uVar19);
          uVar10 = *(ushort *)(param_2 + 3);
          uVar12 = uVar10 & 0x200;
          if (iVar18 == 0) {
            bVar2 = (int)uVar19 < 0;
            local_bc = uVar19;
          }
          else {
            uVar22 = (iVar18 - (int)pwVar9) / 2;
            if ((int)uVar22 <= (int)uVar19) {
              uVar19 = uVar22;
            }
            bVar2 = (int)uVar19 < 0;
            local_bc = uVar19;
          }
        }
        local_c0[0] = 0;
        goto LAB_0893c538;
      case (undefined *)0x893c220:
        bVar2 = true;
        goto LAB_0893c248;
      case (undefined *)0x893c238:
LAB_0893c248:
        if (bVar5) {
          uVar15 = *local_50;
        }
        else if (bVar2) {
          uVar15 = *local_50;
        }
        else if (bVar6) {
          uVar15 = *local_50 & 0xffff;
        }
        else {
          uVar15 = *local_50;
        }
        uVar25 = 1;
        uVar16 = uVar15 | uVar19;
        goto LAB_0893c34c;
      case (undefined *)0x893c2a8:
        local_40 = local_5c;
        goto LAB_0893c2d4;
      case (undefined *)0x893c2c0:
        local_40 = local_54;
LAB_0893c2d4:
        if (bVar5) {
          uVar15 = *local_50;
        }
        else if (bVar2) {
          uVar15 = *local_50;
        }
        else if (bVar6) {
          uVar15 = *local_50 & 0xffff;
        }
        else {
          uVar15 = *local_50;
        }
        uVar25 = 2;
        uVar16 = uVar15 | uVar19;
        if ((bVar7) && (uVar15 != 0)) {
          bVar8 = true;
        }
        goto LAB_0893c34c;
      case (undefined *)0x893c500:
        goto switchD_0893bde4_caseD_893c500;
      }
      if (bVar5) {
        uVar15 = *local_50;
      }
      else if (bVar2) {
        uVar15 = *local_50;
      }
      else if (bVar6) {
        uVar15 = (uint)(short)*local_50;
      }
      else {
        uVar15 = *local_50;
      }
      uVar25 = 1;
      if ((int)uVar15 < 0) {
        uVar15 = -uVar15;
        local_c0[0] = 0x2d;
      }
      uVar16 = uVar15 | uVar19;
LAB_0893c350:
      local_50 = local_50 + 1;
      if (-1 < (int)uVar19) {
        uVar22 = uVar22 & 0xffffff7f;
      }
      local_3c = uVar22 & 4;
      pwVar23 = local_68;
      local_48 = uVar22;
      local_38 = uVar19;
      if (uVar16 == 0) goto LAB_0893c488;
      if (uVar25 == 0) goto LAB_0893c3d8;
      if (uVar25 < 2) goto joined_r0x0893c41c;
      if (uVar25 < 3) goto LAB_0893c46c;
      local_bc = FUN_08935e90(local_60);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar12 = uVar10 & 0x200;
      bVar2 = (int)local_bc < (int)uVar19;
      goto LAB_0893c538;
    }
    uVar10 = *(ushort *)(param_2 + 3);
  }
LAB_0893ce08:
  if ((uVar10 & 0x200) == 0) {
    FUN_0893a324((int)*(short *)((int)param_2 + 0xe),0,0,1);
  }
  return local_34;
joined_r0x0893c41c:
  for (; 9 < uVar15; uVar15 = uVar15 / 10) {
    pwVar23 = pwVar23 + -1;
    *pwVar23 = (short)(uVar15 % 10) + L'0';
  }
  pwVar23 = pwVar23 + -1;
  *pwVar23 = (short)uVar15 + L'0';
  goto LAB_0893c488;
LAB_0893c46c:
  do {
    uVar22 = uVar15 & 0xf;
    pwVar23 = pwVar23 + -1;
    uVar15 = uVar15 >> 4;
    *pwVar23 = local_40[uVar22];
  } while (uVar15 != 0);
  goto LAB_0893c488;
LAB_0893c3d8:
  do {
    pwVar9 = pwVar23;
    uVar10 = (ushort)uVar15;
    pwVar23 = pwVar9 + -1;
    uVar15 = uVar15 >> 3;
    *pwVar23 = (uVar10 & 7) + L'0';
  } while (uVar15 != 0);
  if ((bVar7) && (*pwVar23 != L'0')) {
    pwVar23 = pwVar9 + -2;
    *pwVar23 = L'0';
  }
LAB_0893c488:
  if ((uVar25 == 1) && (bVar4)) {
    pwVar9 = (wchar_t *)FUN_0893b9e0(local_b8,pwVar23,local_68,&local_bc);
    uVar10 = *(ushort *)(param_2 + 3);
    uVar12 = uVar10 & 0x200;
    bVar2 = (int)local_bc < (int)uVar19;
  }
  else {
    local_bc = ((int)local_68 - (int)pwVar23) / 2;
    uVar10 = *(ushort *)(param_2 + 3);
    uVar12 = uVar10 & 0x200;
    bVar2 = (int)local_bc < (int)uVar19;
    pwVar9 = pwVar23;
  }
LAB_0893c538:
  pwVar23 = local_64;
  local_44 = local_38;
  if (!bVar2) {
    local_44 = local_bc;
  }
  if (local_c0[0] == 0) {
    if (bVar8) {
      local_44 = local_44 + 2;
    }
  }
  else {
    local_44 = local_44 + 1;
  }
  if ((local_48 == 0) && (iVar18 = uVar24 - local_44, 0 < iVar18)) {
    for (; 0x10 < iVar18; iVar18 = iVar18 + -0x10) {
      if (uVar12 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
          }
          sVar1 = *(short *)((int)param_2 + 0xe);
        }
        else {
          sVar1 = *(short *)((int)param_2 + 0xe);
        }
        FUN_0893a480((int)sVar1,pwVar23,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar12 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar23,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar12 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar23,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar12 = uVar10 & 0x200;
      }
    }
    if (uVar12 == 0) {
      iVar20 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar20 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar20,local_64,iVar18);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar12 = uVar10 & 0x200;
    }
    else if ((uint)(iVar18 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,local_64,iVar18);
      *param_2 = *param_2 + iVar18 * 2;
      uVar10 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] - iVar18;
      uVar12 = uVar10 & 0x200;
    }
    else {
      FUN_0893f7e4(*param_2,local_64);
      uVar10 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
      uVar12 = uVar10 & 0x200;
    }
  }
  if (local_c0[0] == 0) {
    if (bVar8) {
      local_68[0] = L'0';
      local_68[1] = (wchar_t)uVar17;
      if (uVar12 == 0) {
        iVar18 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar18 == 0) && (uVar10 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar18 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_0893a480(iVar18,local_68,2);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar12 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 5) {
        FUN_0893f7e4(*param_2,local_68);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar12 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,local_68,2);
        *param_2 = *param_2 + 4;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -2;
        uVar12 = uVar10 & 0x200;
      }
    }
  }
  else if (uVar12 == 0) {
    iVar18 = (int)*(short *)((int)param_2 + 0xe);
    if ((iVar18 == 0) && (uVar10 == 0)) {
      *(undefined2 *)((int)param_2 + 0xe) = 1;
      iVar18 = (int)*(short *)((int)param_2 + 0xe);
    }
    FUN_0893a480(iVar18,local_c0,1);
    uVar10 = *(ushort *)(param_2 + 3);
    uVar12 = uVar10 & 0x200;
  }
  else if ((uint)param_2[2] < 3) {
    FUN_0893f7e4(*param_2,local_c0);
    uVar10 = *(ushort *)(param_2 + 3);
    *param_2 = *param_2 + param_2[2] * 2;
    param_2[2] = 0;
    uVar12 = uVar10 & 0x200;
  }
  else {
    FUN_0893f7e4(*param_2,local_c0,1);
    *param_2 = *param_2 + 2;
    uVar10 = *(ushort *)(param_2 + 3);
    param_2[2] = param_2[2] + -1;
    uVar12 = uVar10 & 0x200;
  }
  pwVar23 = local_4c;
  if ((local_48 == 0x80) && (iVar18 = uVar24 - local_44, 0 < iVar18)) {
    for (; 0x10 < iVar18; iVar18 = iVar18 + -0x10) {
      if (uVar12 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
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
        FUN_0893a480(iVar20,pwVar23,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar12 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar23,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar12 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar23,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar12 = uVar10 & 0x200;
      }
    }
    if (uVar12 == 0) {
      iVar20 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar20 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar20,pwVar23,iVar18);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar12 = uVar10 & 0x200;
    }
    else if ((uint)(iVar18 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,pwVar23,iVar18);
      *param_2 = *param_2 + iVar18 * 2;
      uVar10 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] - iVar18;
      uVar12 = uVar10 & 0x200;
    }
    else {
      FUN_0893f7e4(*param_2,pwVar23);
      uVar10 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
      uVar12 = uVar10 & 0x200;
    }
  }
  pwVar23 = local_4c;
  iVar18 = local_38 - local_bc;
  if (0 < iVar18) {
    for (; 0x10 < iVar18; iVar18 = iVar18 + -0x10) {
      if (uVar12 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
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
        FUN_0893a480(iVar20,pwVar23,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar12 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar23,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar12 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar23,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar12 = uVar10 & 0x200;
      }
    }
    if (uVar12 == 0) {
      iVar20 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar20 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar20,pwVar23,iVar18);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar12 = uVar10 & 0x200;
    }
    else if ((uint)(iVar18 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,pwVar23,iVar18);
      *param_2 = *param_2 + iVar18 * 2;
      uVar10 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] - iVar18;
      uVar12 = uVar10 & 0x200;
    }
    else {
      FUN_0893f7e4(*param_2,pwVar23);
      uVar10 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
      uVar12 = uVar10 & 0x200;
    }
  }
  if (uVar12 == 0) {
    iVar18 = (int)*(short *)((int)param_2 + 0xe);
    if ((iVar18 == 0) && (uVar10 == 0)) {
      *(undefined2 *)((int)param_2 + 0xe) = 1;
      iVar18 = (int)*(short *)((int)param_2 + 0xe);
    }
    FUN_0893a480(iVar18,pwVar9,local_bc);
  }
  else if (local_bc * 2 < (uint)param_2[2]) {
    FUN_0893f7e4(*param_2,pwVar9,local_bc);
    *param_2 = *param_2 + local_bc * 2;
    param_2[2] = param_2[2] - local_bc;
  }
  else {
    FUN_0893f7e4(*param_2,pwVar9,param_2[2]);
    *param_2 = *param_2 + param_2[2] * 2;
    param_2[2] = 0;
  }
  pwVar9 = local_64;
  if ((local_3c != 0) && (iVar18 = uVar24 - local_44, 0 < iVar18)) {
    uVar10 = *(ushort *)(param_2 + 3);
    uVar12 = uVar10 & 0x200;
    for (; 0x10 < iVar18; iVar18 = iVar18 + -0x10) {
      if (uVar12 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
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
        FUN_0893a480(iVar20,pwVar9,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar12 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar9,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar12 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar9,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar12 = uVar10 & 0x200;
      }
    }
    if (uVar12 == 0) {
      iVar20 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar20 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar20 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar20,pwVar9,iVar18);
    }
    else if ((uint)(iVar18 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,pwVar9,iVar18);
      *param_2 = *param_2 + iVar18 * 2;
      param_2[2] = param_2[2] - iVar18;
    }
    else {
      FUN_0893f7e4(*param_2,pwVar9,param_2[2]);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
    }
  }
  uVar19 = local_44;
  if ((int)local_44 < (int)uVar24) {
    uVar19 = uVar24;
  }
  local_34 = local_34 + uVar19;
  goto LAB_0893bc50;
switchD_0893bde4_caseD_893bef4:
  uVar24 = 0;
  do {
    iVar18 = uVar24 * 10 + uVar17;
    uVar17 = (uint)*param_3;
    param_3 = param_3 + 1;
    uVar24 = iVar18 - 0x30;
  } while (uVar17 - 0x30 < 10);
  uVar15 = uVar17 - 0x20;
  bVar3 = uVar15 < 0x59;
  goto LAB_0893bdcc;
switchD_0893bde4_caseD_893be1c:
  puVar14 = param_3 + 1;
  puVar11 = local_50 + 1;
  uVar24 = *local_50;
  local_50 = puVar11;
  if (-1 < (int)uVar24) goto LAB_0893bdbc;
  uVar24 = -uVar24;
LAB_0893be48:
  uVar22 = uVar22 | 4;
  puVar14 = param_3 + 1;
  uVar17 = (uint)*param_3;
  goto LAB_0893bdc0;
}

