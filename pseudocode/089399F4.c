/* Entry 0x089399F4 | file offset 0x001369CC | FUN_089399f4 | bytes 2112 */

undefined2 *
FUN_089399f4(int param_1,uint param_2,int param_3,short param_4,int param_5,undefined2 *param_6)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_5c;
  int local_58;
  
  uVar14 = CONCAT44(param_2,param_1);
  if ((param_2 >> 0x14 & 0x7ff) == 0x7ff) {
    if ((param_2 & 0xfffff) == 0 && param_1 == 0) {
      if ((param_2 >> 0x14 & 0x800) == 0) {
        FUN_08935e30(&DAT_09af0460,&DAT_089cfb7c);
      }
      else {
        FUN_08935e30(&DAT_09af0460,L"-Inf");
      }
    }
    else {
      FUN_08935e30(&DAT_09af0460,&DAT_089cfb84);
    }
    goto LAB_0893a200;
  }
  iVar12 = 0;
  iVar3 = FUN_0899a790(param_1,param_2,0,0);
  if (iVar3 < 0) {
    if (param_6 == (undefined2 *)0x0) {
      DAT_09af0460 = 0x2d;
      DAT_09af05a8 = &DAT_09af0462;
    }
    else {
      *param_6 = 0x2d;
      DAT_09af05a8 = &DAT_09af0460;
    }
    uVar14 = FUN_0899a99c(param_1,param_2);
  }
  else {
    DAT_09af05a8 = &DAT_09af0460;
  }
  uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar7 = (undefined4)uVar14;
  iVar3 = FUN_0899a790(uVar7,uVar4,0,0x3ff00000);
  if (-1 < iVar3) {
    uVar13 = FUN_0893de6c(uVar7,uVar4);
    uVar14 = FUN_0899a180(uVar7,uVar4,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    do {
      uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (0xa2 < iVar12) break;
      uVar15 = FUN_0893e0c4((int)uVar13,uVar7,0,0x40240000);
      uVar4 = FUN_0899a8c8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      DAT_09af05a8[iVar12] = (short)uVar4 + 0x30;
      iVar12 = iVar12 + 1;
      uVar15 = FUN_0899a7ec(uVar4);
      uVar13 = FUN_0899a180((int)uVar13,uVar7,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar13 = FUN_0899a56c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0x40240000);
      iVar3 = FUN_0899a790((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0x3ff00000);
    } while (-1 < iVar3);
    iVar9 = 0;
    iVar3 = iVar12 + -1;
    iVar6 = 0;
    if (0 < iVar3) {
      iVar8 = iVar3 * 2;
      do {
        uVar1 = *(undefined2 *)((int)DAT_09af05a8 + iVar6);
        iVar9 = iVar9 + 1;
        *(undefined2 *)((int)DAT_09af05a8 + iVar6) = *(undefined2 *)((int)DAT_09af05a8 + iVar8);
        iVar3 = iVar3 + -1;
        *(undefined2 *)((int)DAT_09af05a8 + iVar8) = uVar1;
        iVar6 = iVar6 + 2;
        iVar8 = iVar8 + -2;
      } while (iVar9 < iVar3);
    }
  }
  uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
  local_60 = DAT_09af05a8;
  local_5c = param_3;
  local_58 = iVar12;
  if (iVar12 == 0) {
    if (param_4 == 0x66) {
      *DAT_09af05a8 = 0x30;
      iVar12 = 1;
      local_60 = DAT_09af05a8;
    }
    else {
      iVar3 = FUN_0899a790((int)uVar14,uVar7,0,0);
      if (iVar3 != 0) {
        uVar14 = FUN_0899a1f4((int)uVar14,uVar7,0,0x40240000);
        local_58 = 0;
        while( true ) {
          uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
          iVar3 = FUN_0899a790((int)uVar14,uVar7,0,0x3ff00000);
          if ((-1 < iVar3) || (local_58 < -0x3fc)) break;
          local_58 = local_58 + -1;
          uVar14 = FUN_0899a1f4((int)uVar14,uVar7,0,0x40240000);
        }
        local_58 = local_58 + -1;
      }
      uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
      iVar3 = FUN_0899a790((int)uVar14,uVar7,0,0x3ff00000);
      if (-1 < iVar3) {
        uVar14 = FUN_0899a56c((int)uVar14,uVar7,0,0x40240000);
        local_5c = param_3 + 1;
      }
    }
  }
  uVar14 = FUN_0899a1f4((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,0x40240000);
  if (-1 < local_58) {
    if (param_4 == 0x66) {
      iVar3 = 1;
      if (0 < local_58) {
        iVar3 = local_58;
      }
      local_5c = local_5c + iVar3;
    }
    else {
      local_5c = local_5c + 1;
    }
  }
  uVar13 = FUN_0899a1f4(0,0x3c900000,0,0x40240000);
  while( true ) {
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar10 = (undefined4)uVar13;
    local_64 = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_68 = (undefined4)uVar14;
    iVar3 = FUN_0899a8c8(local_68,local_64);
    uVar14 = FUN_0899a7ec(iVar3);
    uVar14 = FUN_0899a180(local_68,local_64,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar7 = (undefined4)uVar14;
    if ((local_5c <= iVar12) || (iVar6 = FUN_0899a790(uVar10,uVar11,uVar7,uVar4), 0 < iVar6)) break;
    uVar14 = FUN_0899a180(0,0x3ff00000,uVar10,uVar11);
    iVar6 = FUN_0899a790(uVar7,uVar4,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    if (0 < iVar6) break;
    local_60[iVar12] = (short)iVar3 + 0x30;
    local_60 = DAT_09af05a8;
    iVar12 = iVar12 + 1;
    uVar14 = FUN_0899a1f4(uVar7,uVar4,0,0x40240000);
    uVar13 = FUN_0899a1f4(uVar10,uVar11,0,0x40240000);
  }
  iVar6 = FUN_0899a790(uVar7,uVar4,0,0x3fe00000);
  if (-1 < iVar6) {
    iVar3 = iVar3 + 1;
  }
  local_60[iVar12] = (short)iVar3 + 0x30;
  while (iVar12 = iVar12 + 1, iVar12 <= local_5c) {
    DAT_09af05a8[iVar12] = 0x30;
  }
  iVar12 = FUN_08939868(DAT_09af05a8,local_5c + 1);
  if (iVar12 == 0) {
    *DAT_09af05a8 = 0x31;
    local_58 = local_58 + 1;
    local_5c = local_5c + 1;
  }
  if (param_3 == 0) {
    local_5c = local_5c + -1;
    local_60 = DAT_09af05a8;
  }
  else {
    iVar12 = 1;
    if ((param_4 == 0x66) && (iVar12 = 1, 0 < local_58)) {
      iVar12 = local_58;
    }
    iVar3 = local_5c * 2;
    for (iVar6 = local_5c; iVar12 < iVar6; iVar6 = iVar6 + -1) {
      *(undefined2 *)((int)DAT_09af05a8 + iVar3) = ((undefined2 *)((int)DAT_09af05a8 + iVar3))[-1];
      iVar3 = iVar3 + -2;
    }
    DAT_09af05a8[iVar12] = 0x2e;
    local_60 = DAT_09af05a8;
  }
  if (param_5 != 0) {
    psVar5 = local_60 + local_5c;
    sVar2 = *psVar5;
    while ((local_5c != 0 && (psVar5 = psVar5 + -1, sVar2 == 0x30))) {
      local_5c = local_5c + -1;
      sVar2 = *psVar5;
    }
    if (sVar2 == 0x2e) {
      local_5c = local_5c + -1;
    }
  }
  DAT_09af05a8 = local_60;
  if (param_4 == 0x66) {
    local_60[local_5c + 1] = 0;
    goto LAB_0893a200;
  }
  local_60[local_5c + 1] = param_4;
  iVar12 = local_5c + 2;
  if (local_58 < 0) {
    iVar3 = iVar12 * 2;
    if (local_58 < 0) {
      DAT_09af05a8[iVar12] = 0x2d;
      iVar3 = local_5c + 3;
      if (-10 < local_58) {
        DAT_09af05a8[iVar3] = 0x30;
        iVar3 = local_5c + 4;
      }
      local_58 = -local_58;
      goto LAB_0893a1d8;
    }
  }
  else {
    DAT_09af05a8[iVar12] = 0x2b;
    if (local_58 != 0) {
      local_58 = local_58 + -1;
    }
    iVar3 = (local_5c + 3) * 2;
    if (local_58 < 10) {
      DAT_09af05a8[local_5c + 3] = 0x30;
      iVar3 = local_5c + 4;
LAB_0893a1d8:
      iVar3 = iVar3 * 2;
    }
  }
  FUN_08939948(local_58,(int)DAT_09af05a8 + iVar3,10);
LAB_0893a200:
  return &DAT_09af0460;
}

