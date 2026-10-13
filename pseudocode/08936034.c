/* Entry 0x08936034 | file offset 0x0013300C | FUN_08936034 | bytes 1888 */

undefined1 *
FUN_08936034(int param_1,uint param_2,int param_3,char param_4,int param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined1 *local_5c;
  int local_58;
  
  uVar13 = CONCAT44(param_2,param_1);
  if ((param_2 >> 0x14 & 0x7ff) == 0x7ff) {
    if ((param_2 & 0xfffff) == 0 && param_1 == 0) {
      if ((param_2 >> 0x14 & 0x800) == 0) {
        FUN_089359a4(&DAT_09af02bc,&DAT_089cf6a8);
      }
      else {
        FUN_089359a4(&DAT_09af02bc,&DAT_089cf6a0);
      }
    }
    else {
      FUN_089359a4(&DAT_09af02bc,&DAT_089cf6ac);
    }
  }
  else {
    iVar11 = 0;
    iVar2 = FUN_0899a790(param_1,param_2,0,0);
    if (iVar2 < 0) {
      if (param_6 == (undefined1 *)0x0) {
        DAT_09af02bc = 0x2d;
        local_5c = &DAT_09af02bd;
      }
      else {
        *param_6 = 0x2d;
        local_5c = &DAT_09af02bc;
      }
      uVar13 = FUN_0899a99c(param_1,param_2);
    }
    else {
      local_5c = &DAT_09af02bc;
    }
    uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar6 = (undefined4)uVar13;
    iVar2 = FUN_0899a790(uVar6,uVar3,0,0x3ff00000);
    if (-1 < iVar2) {
      uVar12 = FUN_0893de6c(uVar6,uVar3);
      uVar13 = FUN_0899a180(uVar6,uVar3,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      iVar2 = iVar11;
      do {
        uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar5 = iVar2 + -1;
        iVar11 = iVar2;
        if (0xa2 < iVar2) break;
        uVar14 = FUN_0893e0c4((int)uVar12,uVar6,0,0x40240000);
        uVar3 = FUN_0899a8c8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        local_5c[iVar2] = (char)uVar3 + '0';
        iVar11 = iVar2 + 1;
        uVar14 = FUN_0899a7ec(uVar3);
        uVar12 = FUN_0899a180((int)uVar12,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        uVar12 = FUN_0899a56c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40240000);
        iVar4 = FUN_0899a790((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x3ff00000);
        iVar5 = iVar2;
        iVar2 = iVar11;
      } while (-1 < iVar4);
      iVar2 = 0;
      if (0 < iVar5) {
        do {
          puVar8 = local_5c + iVar5;
          uVar1 = local_5c[iVar2];
          iVar5 = iVar5 + -1;
          local_5c[iVar2] = *puVar8;
          iVar2 = iVar2 + 1;
          *puVar8 = uVar1;
        } while (iVar2 < iVar5);
      }
    }
    uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_60 = param_3;
    local_58 = iVar11;
    if (iVar11 == 0) {
      if (param_4 == 'f') {
        iVar11 = 1;
        *local_5c = 0x30;
      }
      else {
        iVar2 = FUN_0899a790((int)uVar13,uVar6,0,0);
        if (iVar2 != 0) {
          uVar13 = FUN_0899a1f4((int)uVar13,uVar6,0,0x40240000);
          local_58 = 0;
          while( true ) {
            uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
            iVar2 = FUN_0899a790((int)uVar13,uVar6,0,0x3ff00000);
            if ((-1 < iVar2) || (local_58 < -0x3fc)) break;
            local_58 = local_58 + -1;
            uVar13 = FUN_0899a1f4((int)uVar13,uVar6,0,0x40240000);
          }
          local_58 = local_58 + -1;
        }
        uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
        iVar2 = FUN_0899a790((int)uVar13,uVar6,0,0x3ff00000);
        if (-1 < iVar2) {
          uVar13 = FUN_0899a56c((int)uVar13,uVar6,0,0x40240000);
          local_60 = param_3 + 1;
        }
      }
    }
    uVar13 = FUN_0899a1f4((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0x40240000);
    if (-1 < local_58) {
      if (param_4 == 'f') {
        iVar2 = 1;
        if (0 < local_58) {
          iVar2 = local_58;
        }
        local_60 = local_60 + iVar2;
      }
      else {
        local_60 = local_60 + 1;
      }
    }
    uVar12 = FUN_0899a1f4(0,0x3c900000,0,0x40240000);
    while( true ) {
      uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar9 = (undefined4)uVar12;
      local_64 = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_68 = (undefined4)uVar13;
      iVar2 = FUN_0899a8c8(local_68,local_64);
      uVar13 = FUN_0899a7ec(iVar2);
      uVar13 = FUN_0899a180(local_68,local_64,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar6 = (undefined4)uVar13;
      if ((local_60 <= iVar11) || (iVar5 = FUN_0899a790(uVar9,uVar10,uVar6,uVar3), 0 < iVar5))
      break;
      uVar13 = FUN_0899a180(0,0x3ff00000,uVar9,uVar10);
      iVar5 = FUN_0899a790(uVar6,uVar3,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      if (0 < iVar5) break;
      local_5c[iVar11] = (char)iVar2 + '0';
      iVar11 = iVar11 + 1;
      uVar13 = FUN_0899a1f4(uVar6,uVar3,0,0x40240000);
      uVar12 = FUN_0899a1f4(uVar9,uVar10,0,0x40240000);
    }
    iVar5 = FUN_0899a790(uVar6,uVar3,0,0x3fe00000);
    if (-1 < iVar5) {
      iVar2 = iVar2 + 1;
    }
    local_5c[iVar11] = (char)iVar2 + '0';
    while (iVar11 = iVar11 + 1, iVar11 <= local_60) {
      local_5c[iVar11] = 0x30;
    }
    iVar11 = FUN_08935ec8(local_5c,local_60 + 1);
    if (iVar11 == 0) {
      *local_5c = 0x31;
      local_58 = local_58 + 1;
      local_60 = local_60 + 1;
    }
    if (param_3 == 0) {
      local_60 = local_60 + -1;
    }
    else {
      iVar11 = local_60;
      iVar2 = 1;
      if ((param_4 == 'f') && (iVar2 = 1, 0 < local_58)) {
        iVar2 = local_58;
      }
      for (; iVar2 < iVar11; iVar11 = iVar11 + -1) {
        local_5c[iVar11] = (local_5c + iVar11)[-1];
      }
      local_5c[iVar2] = 0x2e;
    }
    if (param_5 != 0) {
      cVar7 = local_5c[local_60];
      while ((local_60 != 0 && (cVar7 == '0'))) {
        local_60 = local_60 + -1;
        cVar7 = local_5c[local_60];
      }
      if (cVar7 == '.') {
        local_60 = local_60 + -1;
      }
    }
    if (param_4 == 'f') {
      local_5c[local_60 + 1] = 0;
    }
    else {
      local_5c[local_60 + 1] = param_4;
      iVar11 = local_60 + 2;
      if (local_58 < 0) {
        if (local_58 < 0) {
          local_5c[iVar11] = 0x2d;
          iVar11 = local_60 + 3;
          if (-10 < local_58) {
            local_5c[iVar11] = 0x30;
            iVar11 = local_60 + 4;
          }
          local_58 = -local_58;
        }
      }
      else {
        local_5c[iVar11] = 0x2b;
        iVar11 = local_60 + 3;
        if (local_58 != 0) {
          local_58 = local_58 + -1;
        }
        if (local_58 < 10) {
          local_5c[iVar11] = 0x30;
          iVar11 = local_60 + 4;
        }
      }
      FUN_08935f98(local_58,local_5c + iVar11,10);
    }
  }
  return &DAT_09af02bc;
}

