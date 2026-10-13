/* Entry 0x0893A590 | file offset 0x00137568 | FUN_0893a590 | bytes 5196 */

/* WARNING: Removing unreachable block (ram,0x0893af48) */

int FUN_0893a590(undefined4 param_1,int *param_2,ushort *param_3,uint *param_4)

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
  undefined4 *puVar12;
  ushort uVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ushort *puVar20;
  int iVar21;
  uint uVar22;
  short *psVar23;
  undefined4 uVar24;
  uint uVar25;
  wchar_t *pwVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  short local_340 [2];
  uint local_33c;
  wchar_t local_338 [346];
  wchar_t local_84 [2];
  wchar_t local_80 [2];
  wchar_t *local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  undefined8 local_68;
  uint *local_60;
  undefined4 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t *local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  
  local_60 = param_4;
  FUN_0893dddc();
  local_34 = 0;
  local_4c = L"                00000000000000000123456789abcdef";
  local_50 = L"00000000000000000123456789abcdef";
  local_74 = L"(null)";
  local_70 = L"0123456789abcdef";
  local_78 = L"0123456789ABCDEF";
  local_7c = L"bug in vfprintf: bad base";
LAB_0893a61c:
  iVar21 = 0;
  iVar16 = 0;
  uVar10 = *param_3;
  puVar14 = param_3;
  while ((uVar10 != 0 && (uVar10 != 0x25))) {
    puVar14 = puVar14 + 1;
    iVar21 = iVar21 + 1;
    iVar16 = iVar16 + 2;
    uVar10 = *puVar14;
  }
  psVar23 = (short *)((int)param_3 + iVar16);
  if (*psVar23 == 0) {
    iVar21 = 0;
  }
  else {
    iVar16 = (int)psVar23 - (int)param_3;
    if ((*psVar23 != 0x25) || (iVar16 = (int)psVar23 - (int)param_3, iVar21 != 0))
    goto LAB_0893a688;
    iVar21 = 1;
  }
  iVar16 = (int)psVar23 - (int)param_3;
LAB_0893a688:
  iVar16 = iVar16 / 2;
  if (iVar16 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      iVar15 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar15 == 0) && (*(ushort *)(param_2 + 3) == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar15 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar15,param_3,iVar16);
    }
    else if ((uint)(iVar16 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,param_3,iVar16);
      *param_2 = *param_2 + iVar16 * 2;
      param_2[2] = param_2[2] - iVar16;
    }
    else {
      FUN_0893f7e4(*param_2,param_3,param_2[2]);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
    }
    local_34 = iVar16 + local_34;
  }
  pwVar26 = local_40;
  pwVar9 = local_7c;
  if (iVar21 < 1) {
    uVar10 = *(ushort *)(param_2 + 3);
  }
  else {
    if ((0 < param_2[2]) || ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
      local_38 = 0;
      uVar25 = 0;
      bVar8 = false;
      bVar3 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      uVar22 = 0xffffffff;
      uVar27 = 0;
      local_340[0] = 0;
      puVar14 = (ushort *)(psVar23 + 2);
      puVar20 = (ushort *)(psVar23 + 1);
LAB_0893a794:
      uVar19 = (uint)*puVar20;
      uVar17 = uVar19 - 0x20;
      bVar2 = uVar17 < 0x59;
      param_3 = puVar14;
LAB_0893a7a4:
      if (!bVar2) {
switchD_0893a7bc_caseD_893b084:
        if (uVar19 == 0) {
          uVar10 = *(ushort *)(param_2 + 3);
          goto LAB_0893b98c;
        }
        local_338[0] = (wchar_t)uVar19;
        local_33c = 1;
        local_340[0] = 0;
        local_3c = uVar25 & 4;
        pwVar9 = local_338;
        local_44 = uVar25;
        local_40 = pwVar26;
        goto LAB_0893b0ac;
      }
      puVar20 = param_3;
      switch((&switchD_0893a7bc::switchdataD_089cfd28)[uVar17]) {
      case (undefined *)0x893a7c4:
        goto switchD_0893a7bc_caseD_893a7c4;
      case (undefined *)0x893a7dc:
        bVar3 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a7e8:
        bVar7 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a7f4:
        puVar14 = param_3 + 1;
        puVar11 = local_60 + 1;
        uVar27 = *local_60;
        local_60 = puVar11;
        if (-1 < (int)uVar27) goto LAB_0893a794;
        uVar27 = -uVar27;
        break;
      case (undefined *)0x893a818:
        break;
      case (undefined *)0x893a828:
        local_340[0] = 0x2b;
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a838:
        uVar19 = (uint)*param_3;
        puVar20 = param_3 + 1;
        if (uVar19 == 0x2a) {
          puVar14 = param_3 + 2;
          puVar11 = local_60 + 1;
          uVar22 = *local_60;
          local_60 = puVar11;
          if ((int)uVar22 < 0) {
            uVar22 = 0xffffffff;
          }
          goto LAB_0893a794;
        }
        uVar22 = 0;
        param_3 = puVar20;
        while (uVar19 - 0x30 < 10) {
          uVar10 = *param_3;
          param_3 = param_3 + 1;
          uVar22 = (uVar22 * 10 + uVar19) - 0x30;
          uVar19 = (uint)uVar10;
        }
        uVar17 = uVar19 - 0x20;
        bVar2 = uVar17 < 0x59;
        if ((int)uVar22 < 0) {
          uVar22 = 0xffffffff;
        }
        goto LAB_0893a7a4;
      case (undefined *)0x893a8c4:
        uVar25 = uVar25 | 0x80;
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a8d0:
        goto switchD_0893a7bc_caseD_893a8d0;
      case (undefined *)0x893a910:
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a91c:
        bVar6 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a928:
        if (*param_3 == 0x6c) {
          bVar4 = true;
          puVar14 = param_3 + 2;
          puVar20 = param_3 + 1;
        }
        else {
          bVar5 = true;
          puVar14 = param_3 + 1;
        }
        goto LAB_0893a794;
      case (undefined *)0x893a950:
        bVar4 = true;
        puVar14 = param_3 + 1;
        goto LAB_0893a794;
      case (undefined *)0x893a95c:
        pwVar9 = local_338;
        local_338[0] = (wchar_t)*local_60;
        local_33c = 1;
        local_340[0] = 0;
        local_3c = uVar25 & 4;
        local_60 = local_60 + 1;
        local_44 = uVar25;
        local_40 = pwVar26;
        goto LAB_0893b0ac;
      case (undefined *)0x893a994:
        bVar5 = true;
        goto LAB_0893a9a4;
      case (undefined *)0x893a9a0:
LAB_0893a9a4:
        if (bVar4) {
          uVar17 = *local_60;
        }
        else if (bVar5) {
          uVar17 = *local_60;
        }
        else if (bVar6) {
          uVar17 = (uint)(short)*local_60;
        }
        else {
          uVar17 = *local_60;
        }
        uVar28 = 1;
        if ((int)uVar17 < 0) {
          uVar17 = -uVar17;
          local_340[0] = 0x2d;
        }
        uVar18 = uVar17 | uVar22;
LAB_0893af0c:
        local_60 = local_60 + 1;
        if (-1 < (int)uVar22) {
          uVar25 = uVar25 & 0xffffff7f;
        }
        local_3c = uVar25 & 4;
        pwVar26 = local_80;
        local_44 = uVar25;
        local_38 = uVar22;
        if (uVar18 == 0) goto LAB_0893b02c;
        if (uVar28 == 0) goto LAB_0893af88;
        if (uVar28 < 2) goto joined_r0x0893afc4;
        if (uVar28 < 3) goto LAB_0893b010;
        local_33c = FUN_08935e90(local_7c);
        goto LAB_0893b0ac;
      case (undefined *)0x893aa30:
        local_48 = (uint)bVar3;
        local_3c = uVar25 & 4;
        uVar24 = 0;
        if (uVar22 == 0xffffffff) {
          uVar22 = 6;
        }
        puVar12 = (undefined4 *)((int)local_60 + ((uint)local_60 & 7));
        local_60 = puVar12 + 2;
        local_54 = puVar12[1];
        local_58 = *puVar12;
        if ((uVar19 == 0x67) || (local_44 = uVar25, uVar19 == 0x47)) {
          local_44 = uVar25;
          iVar16 = FUN_0899a790(local_58,local_54,0,0);
          uVar29 = CONCAT44(local_54,local_58);
          if (iVar16 == 0) {
            uVar29 = 0x3ff0000000000000;
          }
          else {
            iVar16 = FUN_0899a790(local_58,local_54,0,0);
            if (iVar16 < 0) {
              uVar29 = FUN_0899a99c(local_58,local_54);
            }
            uVar29 = FUN_0893edf4((int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
          }
          local_68 = uVar29;
          iVar16 = FUN_0899a790((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0,0xc0100000);
          if (iVar16 < 0) {
LAB_0893ab78:
            uVar25 = 0x45;
            if (uVar19 == 0x67) {
              uVar25 = 0x65;
            }
          }
          else {
            uVar29 = FUN_0899a7ec(uVar22);
            iVar16 = FUN_0899a790((undefined4)local_68,local_68._4_4_,(int)uVar29,
                                  (int)((ulonglong)uVar29 >> 0x20));
            if (-1 < iVar16) goto LAB_0893ab78;
            uVar25 = 0x66;
          }
          uVar24 = 1;
          uVar19 = uVar25;
        }
        if (local_48 != 0) {
          if (uVar22 == 0) {
            uVar22 = 1;
          }
          uVar24 = 0;
        }
        pwVar9 = (wchar_t *)FUN_089399f4(local_58,local_54,uVar22,uVar19,uVar24,local_340);
        local_33c = FUN_08935e90(pwVar9);
        if (bVar7) {
          pwVar9 = (wchar_t *)FUN_0893b9e0(pwVar9,pwVar9,pwVar9 + local_33c,&local_33c);
        }
        goto LAB_0893b0ac;
      case (undefined *)0x893ac04:
        if (bVar4) {
          *(int *)*local_60 = local_34;
          local_60 = local_60 + 1;
        }
        else if (bVar5) {
          *(int *)*local_60 = local_34;
          local_60 = local_60 + 1;
        }
        else if (bVar6) {
          *(short *)*local_60 = (short)local_34;
          local_60 = local_60 + 1;
        }
        else {
          *(int *)*local_60 = local_34;
          local_60 = local_60 + 1;
        }
        goto LAB_0893a61c;
      case (undefined *)0x893ac80:
        bVar5 = true;
        goto LAB_0893ac90;
      case (undefined *)0x893ac8c:
LAB_0893ac90:
        if (bVar4) {
          uVar17 = *local_60;
        }
        else if (bVar5) {
          uVar17 = *local_60;
        }
        else if (bVar6) {
          uVar17 = *local_60 & 0xffff;
        }
        else {
          uVar17 = *local_60;
        }
        uVar28 = 0;
        uVar18 = uVar17 | uVar22;
LAB_0893af08:
        local_340[0] = 0;
        goto LAB_0893af0c;
      case (undefined *)0x893ad00:
        uVar17 = *local_60;
        uVar28 = 2;
        bVar8 = true;
        local_40 = local_70;
        uVar19 = 0x78;
        uVar18 = uVar17 | uVar22;
        goto LAB_0893af08;
      case (undefined *)0x893ad2c:
        local_3c = uVar25 & 4;
        pwVar9 = (wchar_t *)*local_60;
        if ((wchar_t *)*local_60 == (wchar_t *)0x0) {
          pwVar9 = local_74;
        }
        if ((int)uVar22 < 0) {
          local_60 = local_60 + 1;
          local_44 = uVar25;
          local_33c = FUN_08935e90(pwVar9);
        }
        else {
          local_60 = local_60 + 1;
          local_44 = uVar25;
          iVar16 = FUN_0893f6f4(pwVar9,0,uVar22);
          local_33c = uVar22;
          if ((iVar16 != 0) && (uVar25 = (iVar16 - (int)pwVar9) / 2, (int)uVar25 <= (int)uVar22)) {
            local_33c = uVar25;
          }
        }
        local_340[0] = 0;
        local_40 = pwVar26;
        goto LAB_0893b0ac;
      case (undefined *)0x893add0:
        bVar5 = true;
        goto LAB_0893ade8;
      case (undefined *)0x893ade0:
LAB_0893ade8:
        if (bVar4) {
          uVar17 = *local_60;
        }
        else if (bVar5) {
          uVar17 = *local_60;
        }
        else if (bVar6) {
          uVar17 = *local_60 & 0xffff;
        }
        else {
          uVar17 = *local_60;
        }
        uVar28 = 1;
        uVar18 = uVar17 | uVar22;
        goto LAB_0893af08;
      case (undefined *)0x893ae5c:
        local_40 = local_78;
        goto LAB_0893ae78;
      case (undefined *)0x893ae6c:
        local_40 = local_70;
LAB_0893ae78:
        if (bVar4) {
          uVar17 = *local_60;
        }
        else if (bVar5) {
          uVar17 = *local_60;
        }
        else if (bVar6) {
          uVar17 = *local_60 & 0xffff;
        }
        else {
          uVar17 = *local_60;
        }
        uVar28 = 2;
        uVar18 = uVar17 | uVar22;
        if ((bVar3) && (uVar17 != 0)) {
          bVar8 = true;
        }
        goto LAB_0893af08;
      case (undefined *)0x893b084:
        goto switchD_0893a7bc_caseD_893b084;
      }
      puVar14 = param_3 + 1;
      uVar25 = uVar25 | 4;
      goto LAB_0893a794;
    }
    uVar10 = *(ushort *)(param_2 + 3);
  }
LAB_0893b98c:
  if ((uVar10 & 0x200) == 0) {
    FUN_0893a324((int)*(short *)((int)param_2 + 0xe),0,0,1);
  }
  return local_34;
joined_r0x0893afc4:
  for (; 9 < uVar17; uVar17 = uVar17 / 10) {
    pwVar26 = pwVar26 + -1;
    *pwVar26 = (short)(uVar17 % 10) + L'0';
  }
  pwVar26 = pwVar26 + -1;
  *pwVar26 = (short)uVar17 + L'0';
  goto LAB_0893b02c;
LAB_0893b010:
  do {
    uVar22 = uVar17 & 0xf;
    pwVar26 = pwVar26 + -1;
    uVar17 = uVar17 >> 4;
    *pwVar26 = local_40[uVar22];
  } while (uVar17 != 0);
  goto LAB_0893b02c;
LAB_0893af88:
  do {
    pwVar9 = pwVar26;
    uVar10 = (ushort)uVar17;
    pwVar26 = pwVar9 + -1;
    uVar17 = uVar17 >> 3;
    *pwVar26 = (uVar10 & 7) + L'0';
  } while (uVar17 != 0);
  if ((bVar3 != false) && (*pwVar26 != L'0')) {
    pwVar26 = pwVar9 + -2;
    *pwVar26 = L'0';
  }
LAB_0893b02c:
  if ((uVar28 == 1) && (bVar7)) {
    pwVar9 = (wchar_t *)FUN_0893b9e0(local_338,pwVar26,local_80,&local_33c);
  }
  else {
    local_33c = ((int)local_80 - (int)pwVar26) / 2;
    pwVar9 = pwVar26;
  }
LAB_0893b0ac:
  pwVar26 = local_4c;
  uVar10 = *(ushort *)(param_2 + 3);
  uVar13 = uVar10 & 0x200;
  uVar22 = local_38;
  if ((int)local_38 <= (int)local_33c) {
    uVar22 = local_33c;
  }
  if (local_340[0] == 0) {
    if (bVar8) {
      uVar22 = uVar22 + 2;
    }
  }
  else {
    uVar22 = uVar22 + 1;
  }
  iVar16 = uVar27 - uVar22;
  if ((local_44 == 0) && (0 < iVar16)) {
    for (; 0x10 < iVar16; iVar16 = iVar16 + -0x10) {
      if (uVar13 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
          }
          sVar1 = *(short *)((int)param_2 + 0xe);
        }
        else {
          sVar1 = *(short *)((int)param_2 + 0xe);
        }
        FUN_0893a480((int)sVar1,pwVar26,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar13 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar26,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar13 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar26,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar13 = uVar10 & 0x200;
      }
    }
    if (uVar13 == 0) {
      iVar21 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar21 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar21,local_4c,iVar16);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar13 = uVar10 & 0x200;
    }
    else if ((uint)(iVar16 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,local_4c,iVar16);
      *param_2 = *param_2 + iVar16 * 2;
      uVar10 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] - iVar16;
      uVar13 = uVar10 & 0x200;
    }
    else {
      FUN_0893f7e4(*param_2,local_4c,param_2[2]);
      uVar10 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
      uVar13 = uVar10 & 0x200;
    }
  }
  if (local_340[0] == 0) {
    if (bVar8) {
      local_80[0] = L'0';
      local_80[1] = (wchar_t)uVar19;
      if (uVar13 == 0) {
        iVar16 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar16 == 0) && (uVar10 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar16 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_0893a480(iVar16,local_80,2);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar13 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 5) {
        FUN_0893f7e4(*param_2,local_80,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar13 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,local_80,2);
        *param_2 = *param_2 + 4;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -2;
        uVar13 = uVar10 & 0x200;
      }
    }
  }
  else if (uVar13 == 0) {
    iVar16 = (int)*(short *)((int)param_2 + 0xe);
    if ((iVar16 == 0) && (uVar10 == 0)) {
      *(undefined2 *)((int)param_2 + 0xe) = 1;
      iVar16 = (int)*(short *)((int)param_2 + 0xe);
    }
    FUN_0893a480(iVar16,local_340,1);
    uVar10 = *(ushort *)(param_2 + 3);
    uVar13 = uVar10 & 0x200;
  }
  else if ((uint)param_2[2] < 3) {
    FUN_0893f7e4(*param_2,local_340,param_2[2]);
    uVar10 = *(ushort *)(param_2 + 3);
    *param_2 = *param_2 + param_2[2] * 2;
    param_2[2] = 0;
    uVar13 = uVar10 & 0x200;
  }
  else {
    FUN_0893f7e4(*param_2,local_340,1);
    *param_2 = *param_2 + 2;
    uVar10 = *(ushort *)(param_2 + 3);
    param_2[2] = param_2[2] + -1;
    uVar13 = uVar10 & 0x200;
  }
  pwVar26 = local_50;
  if ((local_44 == 0x80) && (iVar16 = uVar27 - uVar22, 0 < iVar16)) {
    for (; 0x10 < iVar16; iVar16 = iVar16 + -0x10) {
      if (uVar13 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
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
        FUN_0893a480(iVar21,pwVar26,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar13 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar26,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar13 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar26,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar13 = uVar10 & 0x200;
      }
    }
    if (uVar13 == 0) {
      iVar21 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar21 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar21,pwVar26,iVar16);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar13 = uVar10 & 0x200;
    }
    else if ((uint)(iVar16 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,pwVar26,iVar16);
      *param_2 = *param_2 + iVar16 * 2;
      uVar10 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] - iVar16;
      uVar13 = uVar10 & 0x200;
    }
    else {
      FUN_0893f7e4(*param_2,pwVar26,param_2[2]);
      uVar10 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
      uVar13 = uVar10 & 0x200;
    }
  }
  pwVar26 = local_50;
  iVar16 = local_38 - local_33c;
  if (0 < iVar16) {
    for (; 0x10 < iVar16; iVar16 = iVar16 + -0x10) {
      if (uVar13 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
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
        FUN_0893a480(iVar21,pwVar26,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar13 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar26,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar13 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar26,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar13 = uVar10 & 0x200;
      }
    }
    if (uVar13 == 0) {
      iVar21 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar21 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar21,pwVar26,iVar16);
      uVar10 = *(ushort *)(param_2 + 3);
      uVar13 = uVar10 & 0x200;
    }
    else if ((uint)(iVar16 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,pwVar26,iVar16);
      *param_2 = *param_2 + iVar16 * 2;
      uVar10 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] - iVar16;
      uVar13 = uVar10 & 0x200;
    }
    else {
      FUN_0893f7e4(*param_2,pwVar26,param_2[2]);
      uVar10 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
      uVar13 = uVar10 & 0x200;
    }
  }
  if (uVar13 == 0) {
    iVar16 = (int)*(short *)((int)param_2 + 0xe);
    if ((iVar16 == 0) && (uVar10 == 0)) {
      *(undefined2 *)((int)param_2 + 0xe) = 1;
      iVar16 = (int)*(short *)((int)param_2 + 0xe);
    }
    FUN_0893a480(iVar16,pwVar9,local_33c);
  }
  else if (local_33c * 2 < (uint)param_2[2]) {
    FUN_0893f7e4(*param_2,pwVar9,local_33c);
    *param_2 = *param_2 + local_33c * 2;
    param_2[2] = param_2[2] - local_33c;
  }
  else {
    FUN_0893f7e4(*param_2,pwVar9,param_2[2]);
    *param_2 = *param_2 + param_2[2] * 2;
    param_2[2] = 0;
  }
  pwVar9 = local_4c;
  if ((local_3c != 0) && (iVar16 = uVar27 - uVar22, 0 < iVar16)) {
    uVar10 = *(ushort *)(param_2 + 3);
    uVar13 = uVar10 & 0x200;
    for (; 0x10 < iVar16; iVar16 = iVar16 + -0x10) {
      if (uVar13 == 0) {
        if (*(short *)((int)param_2 + 0xe) == 0) {
          if (uVar10 == 0) {
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
        FUN_0893a480(iVar21,pwVar9,0x10);
        uVar10 = *(ushort *)(param_2 + 3);
        uVar13 = uVar10 & 0x200;
      }
      else if ((uint)param_2[2] < 0x21) {
        FUN_0893f7e4(*param_2,pwVar9,param_2[2]);
        uVar10 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + param_2[2] * 2;
        param_2[2] = 0;
        uVar13 = uVar10 & 0x200;
      }
      else {
        FUN_0893f7e4(*param_2,pwVar9,0x10);
        *param_2 = *param_2 + 0x20;
        uVar10 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -0x10;
        uVar13 = uVar10 & 0x200;
      }
    }
    if (uVar13 == 0) {
      iVar21 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar21 == 0) && (uVar10 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_0893a480(iVar21,pwVar9,iVar16);
    }
    else if ((uint)(iVar16 * 2) < (uint)param_2[2]) {
      FUN_0893f7e4(*param_2,pwVar9,iVar16);
      *param_2 = *param_2 + iVar16 * 2;
      param_2[2] = param_2[2] - iVar16;
    }
    else {
      FUN_0893f7e4(*param_2,pwVar9,param_2[2]);
      *param_2 = *param_2 + param_2[2] * 2;
      param_2[2] = 0;
    }
  }
  if ((int)uVar22 < (int)uVar27) {
    uVar22 = uVar27;
  }
  local_34 = local_34 + uVar22;
  goto LAB_0893a61c;
switchD_0893a7bc_caseD_893a8d0:
  uVar27 = 0;
  do {
    iVar16 = uVar27 * 10 + uVar19;
    uVar19 = (uint)*param_3;
    param_3 = param_3 + 1;
    uVar27 = iVar16 - 0x30;
  } while (uVar19 - 0x30 < 10);
  uVar17 = uVar19 - 0x20;
  bVar2 = uVar17 < 0x59;
  goto LAB_0893a7a4;
switchD_0893a7bc_caseD_893a7c4:
  puVar14 = param_3 + 1;
  if (local_340[0] == 0) {
    local_340[0] = 0x20;
  }
  goto LAB_0893a794;
}

