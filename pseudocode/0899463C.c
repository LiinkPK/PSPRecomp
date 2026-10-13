/* Entry 0x0899463C | file offset 0x00191614 | FUN_0899463c | bytes 5868 */

int FUN_0899463c(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_v1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_v1_00;
  undefined4 extraout_v1_01;
  undefined4 extraout_v1_02;
  undefined4 extraout_v1_03;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_64;
  
  uVar10 = param_4 & 0x7fffffff;
  uVar15 = param_2 & 0x7fffffff;
  if (uVar10 == 0 && param_3 == 0) {
    return 0;
  }
  if (((0x7ff00000 < uVar15) ||
      (((uVar15 == 0x7ff00000 && (param_1 != 0)) || (0x7ff00000 < uVar10)))) ||
     ((uVar10 == 0x7ff00000 && (param_3 != 0)))) {
    iVar1 = FUN_0899a118(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  iVar1 = 0;
  if ((int)param_2 < 0) {
    if (uVar10 < 0x43400000) {
      if (0x3fefffff < uVar10) {
        iVar8 = ((int)uVar10 >> 0x14) + -0x3ff;
        if (iVar8 < 0x15) {
          if (param_3 != 0) goto LAB_08994990;
          uVar6 = (int)uVar10 >> (0x14U - iVar8 & 0x1f);
          if (uVar6 << (0x14U - iVar8 & 0x1f) == uVar10) {
            iVar1 = 2 - (uVar6 & 1);
          }
        }
        else {
          uVar6 = param_3 >> (0x34U - iVar8 & 0x1f);
          if (uVar6 << (0x34U - iVar8 & 0x1f) == param_3) {
            iVar1 = 2 - (uVar6 & 1);
          }
        }
      }
    }
    else {
      iVar1 = 2;
    }
  }
  if (param_3 == 0) {
    if (uVar10 == 0x7ff00000) {
      if (uVar15 == 0x3ff00000 && param_1 == 0) {
        iVar1 = 0;
      }
      else if (uVar15 < 0x3ff00000) {
        if ((int)param_4 < 0) {
          iVar1 = FUN_0899a99c(0,param_4);
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
      return iVar1;
    }
    if (uVar10 == 0x3ff00000) {
      if ((int)param_4 < 0) {
        param_1 = FUN_0899a56c(0,0x3ff00000,param_1,param_2);
      }
      return param_1;
    }
    if (param_4 == 0x40000000) {
      iVar1 = FUN_0899a1f4(param_1,param_2,param_1,param_2);
      return iVar1;
    }
    if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
      iVar1 = FUN_08996674(param_1,param_2);
      return iVar1;
    }
  }
LAB_08994990:
  uVar16 = FUN_0899379c(param_1,param_2);
  iVar8 = (int)uVar16;
  uVar17 = CONCAT44(param_2,iVar8) & 0x7fffffffffffffff;
  if ((param_1 == 0) && (((uVar15 == 0x7ff00000 || (uVar15 == 0)) || (uVar15 == 0x3ff00000)))) {
    if ((int)param_4 < 0) {
      iVar8 = FUN_0899a56c(0,0x3ff00000);
    }
    if ((int)param_2 < 0) {
      if (uVar15 == 0x3ff00000 && iVar1 == 0) {
        iVar8 = FUN_0899a56c(0,0,0,0);
      }
      else if (iVar1 == 1) {
        iVar8 = FUN_0899a99c();
      }
    }
    return iVar8;
  }
  if ((int)param_2 < 0 && iVar1 == 0) {
    iVar1 = FUN_0899a56c(0,0,0,0);
    return iVar1;
  }
  if (uVar10 < 0x41e00001) {
    iVar7 = 0;
    if (uVar15 < 0x100000) {
      uVar17 = FUN_0899a1f4(iVar8,(int)((ulonglong)uVar16 >> 0x20),0,0x43400000);
      iVar7 = -0x35;
    }
    uVar10 = (uint)(uVar17 >> 0x20);
    local_70 = (undefined4)uVar17;
    iVar7 = iVar7 + ((int)uVar10 >> 0x14);
    uVar10 = uVar10 & 0xfffff;
    iVar8 = iVar7 + -0x3ff;
    uVar15 = uVar10 | 0x3ff00000;
    if (uVar10 < 0x3988f) {
      uVar11 = 0x3ff00000;
      local_7c = 0;
      iVar9 = ((int)uVar15 >> 1 | 0x20000000U) + 0x80000;
      local_80 = 0;
      uVar16 = FUN_0899a7ec(iVar8);
      uVar13 = 0;
      uVar12 = 0;
    }
    else if (uVar10 < 0xbb67a) {
      uVar11 = 0x3ff80000;
      local_7c = 0x3e4cfdeb;
      iVar9 = ((int)uVar15 >> 1 | 0x20000000U) + 0xc0000;
      local_80 = 0x43cfd006;
      uVar16 = FUN_0899a7ec(iVar8);
      uVar13 = 0x3fe2b803;
      uVar12 = 0x40000000;
    }
    else {
      uVar11 = 0x3ff00000;
      uVar15 = uVar15 - 0x100000;
      local_7c = 0;
      iVar9 = ((int)uVar15 >> 1 | 0x20000000U) + 0x80000;
      local_80 = 0;
      uVar16 = FUN_0899a7ec(iVar7 + -0x3fe);
      uVar13 = 0;
      uVar12 = 0;
    }
    uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar18 = FUN_0899a180(local_70,uVar15,0,uVar11);
    uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_0899a118(local_70,uVar15,0,uVar11);
    uVar19 = FUN_0899a56c(0,0x3ff00000,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar4 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = FUN_0899a1f4((int)uVar18,uVar3,(int)uVar19,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar2 = (undefined4)uVar20;
    uVar20 = FUN_0899a180(0,iVar9,0,uVar11);
    uVar20 = FUN_0899a180(local_70,uVar15,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar21 = FUN_0899a1f4(0,uVar5,0,iVar9);
    uVar18 = FUN_0899a180((int)uVar18,uVar3,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
    uVar20 = FUN_0899a1f4(0,uVar5,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar18 = FUN_0899a180((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar20,
                          (int)((ulonglong)uVar20 >> 0x20));
    uVar18 = FUN_0899a1f4((int)uVar19,uVar4,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_0899a1f4(uVar2,uVar5,uVar2,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar11 = (undefined4)uVar19;
    uVar19 = FUN_0899a1f4(uVar11,uVar4,uVar11,uVar4);
    uVar20 = FUN_0899a1f4(uVar11,uVar4,0x4a454eef,0x3fca7e28);
    uVar20 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x93c9db65,0x3fcd864a);
    uVar20 = FUN_0899a1f4(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0xa91d4101,0x3fd17460);
    uVar20 = FUN_0899a1f4(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x518f264d,0x3fd55555);
    uVar20 = FUN_0899a1f4(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0xdb6fabff,0x3fdb6db6);
    uVar20 = FUN_0899a1f4(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x33333303,0x3fe33333);
    uVar19 = FUN_0899a1f4((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                          (int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0899a118(uVar2,uVar5,0,uVar5);
    uVar20 = FUN_0899a1f4((int)uVar18,uVar3,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar19 = FUN_0899a118((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                          (int)((ulonglong)uVar20 >> 0x20));
    uVar11 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = FUN_0899a1f4(0,uVar5,0,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar21 = FUN_0899a118((int)uVar20,uVar4,0,0x40080000);
    FUN_0899a118((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar19,uVar11);
    uVar21 = FUN_0899a180(0,extraout_v1_00,0,0x40080000);
    uVar20 = FUN_0899a180((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar20,uVar4);
    uVar19 = FUN_0899a180((int)uVar19,uVar11,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_0899a1f4(0,uVar5,0,extraout_v1_00);
    uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar18 = FUN_0899a1f4((int)uVar18,uVar3,0,extraout_v1_00);
    uVar19 = FUN_0899a1f4(uVar2,uVar5,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar18 = FUN_0899a118((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    FUN_0899a118((int)uVar20,uVar11,(int)uVar18,uVar2);
    uVar19 = FUN_0899a180(0,extraout_v1_01,(int)uVar20,uVar11);
    uVar18 = FUN_0899a180((int)uVar18,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar19 = FUN_0899a1f4(0,extraout_v1_01,0xe0000000,0x3feec709);
    uVar11 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = FUN_0899a1f4(0,extraout_v1_01,0x145b01f5,0xbe3e2fe0);
    uVar18 = FUN_0899a1f4((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0xdc3a03fd,0x3feec709);
    uVar18 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0899a118((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),local_80,local_7c);
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar20 = FUN_0899a118((int)uVar19,uVar11,(int)uVar18,uVar2);
    uVar20 = FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar12,uVar13);
    FUN_0899a118((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar16,uVar14);
    uVar16 = FUN_0899a180(0,extraout_v1_02,(int)uVar16,uVar14);
    uVar16 = FUN_0899a180((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar12,uVar13);
    uVar16 = FUN_0899a180((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar19,uVar11);
    uVar16 = FUN_0899a180((int)uVar18,uVar2,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar16 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),param_3,param_4);
    uVar11 = extraout_v1_02;
  }
  else {
    if (0x43f00000 < uVar10) {
      if (uVar15 < 0x3ff00000) {
        return 0;
      }
      if (0x3fefffff < uVar15) {
        return 0;
      }
    }
    if (uVar15 < 0x3fefffff) {
      return 0;
    }
    if (0x3ff00000 < uVar15) {
      return 0;
    }
    uVar16 = FUN_0899a180(param_1,param_2,0,0x3ff00000);
    uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar11 = (undefined4)uVar16;
    uVar16 = FUN_0899a1f4(uVar11,uVar12,uVar11,uVar12);
    uVar18 = FUN_0899a1f4(uVar11,uVar12,0,0x3fd00000);
    uVar18 = FUN_0899a180(0x55555555,0x3fd55555,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0899a1f4(uVar11,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0899a180(0,0x3fe00000,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0899a1f4(uVar11,uVar12,0x60000000,0x3ff71547);
    uVar13 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_0899a1f4(uVar11,uVar12,0xf85ddf44,0x3e54ae0b);
    uVar16 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x652b82fe,0x3ff71547);
    uVar16 = FUN_0899a180((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar16,
                          (int)((ulonglong)uVar16 >> 0x20));
    uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
    FUN_0899a118((int)uVar18,uVar13,(int)uVar16,uVar11);
    uVar18 = FUN_0899a180(0,extraout_v1,(int)uVar18,uVar13);
    uVar16 = FUN_0899a180((int)uVar16,uVar11,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),param_3,param_4);
    uVar11 = extraout_v1;
  }
  local_74 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_78 = (undefined4)uVar16;
  local_64 = 0x3ff00000;
  if ((int)param_2 < 0 && iVar1 == 1) {
    local_64 = 0xbff00000;
  }
  uVar16 = FUN_0899a180(param_3,param_4,0,param_4);
  uVar16 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,uVar11);
  uVar16 = FUN_0899a118((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),local_78,local_74);
  uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar12 = (undefined4)uVar16;
  uVar16 = FUN_0899a1f4(0,uVar11,0,param_4);
  uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar11 = (undefined4)uVar16;
  lVar22 = FUN_0899a118(uVar11,uVar2,uVar12,uVar13);
  uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
  if (lVar22 < 0x4090000000000000) {
    if (0x4090cbff < (uVar10 & 0x7fffffff)) {
      if (lVar22 != -0x3f6f340000000000) {
        uVar16 = FUN_0899a1f4(0,local_64,0xc2f8f359,0x1a56e1f);
        iVar1 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0xc2f8f359,0x1a56e1f);
        return iVar1;
      }
      uVar18 = FUN_0899a180(0,0xc090cc00,uVar11,uVar2);
      iVar1 = FUN_0899a790(uVar12,uVar13,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
      if (iVar1 < 1) {
        uVar16 = FUN_0899a1f4(0,local_64,0xc2f8f359,0x1a56e1f);
        iVar1 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0xc2f8f359,0x1a56e1f);
        return iVar1;
      }
    }
  }
  else {
    if (lVar22 != 0x4090000000000000) {
      uVar16 = FUN_0899a1f4(0,local_64,0x8800759c,0x7e37e43c);
      iVar1 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x8800759c,0x7e37e43c);
      return iVar1;
    }
    uVar18 = FUN_0899a118(uVar12,uVar13,0x652b82fe,0x3c971547);
    uVar19 = FUN_0899a180(0,0x40900000,uVar11,uVar2);
    iVar1 = FUN_0899a790((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                         (int)((ulonglong)uVar19 >> 0x20));
    if (0 < iVar1) {
      uVar16 = FUN_0899a1f4(0,local_64,0x8800759c,0x7e37e43c);
      iVar1 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x8800759c,0x7e37e43c);
      return iVar1;
    }
  }
  iVar1 = 0;
  if (0x3fe00000 < (uVar10 & 0x7fffffff)) {
    uVar10 = uVar10 + (0x100000 >> (((int)(uVar10 & 0x7fffffff) >> 0x14) - 0x3feU & 0x1f));
    uVar15 = ((int)(uVar10 & 0x7fffffff) >> 0x14) - 0x3ff;
    iVar1 = (int)(uVar10 & 0xfffff | 0x100000) >> (0x14 - uVar15 & 0x1f);
    if (lVar22 < 0) {
      iVar1 = -iVar1;
    }
    uVar16 = FUN_0899a180(uVar11,uVar2,0,uVar10 & ~(0xfffff >> (uVar15 & 0x1f)));
  }
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_0899a118((int)uVar16,uVar11,uVar12,uVar13);
  uVar18 = FUN_0899a1f4(0,extraout_v1_03,0,0x3fe62e43);
  uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar16 = FUN_0899a180(0,extraout_v1_03,(int)uVar16,uVar11);
  uVar16 = FUN_0899a180(uVar12,uVar13,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0899a1f4((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0xfefa39ef,0x3fe62e42);
  uVar19 = FUN_0899a1f4(0,extraout_v1_03,0xca86c39,0xbe205c61);
  uVar16 = FUN_0899a118((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar19,
                        (int)((ulonglong)uVar19 >> 0x20));
  uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar19 = FUN_0899a118((int)uVar18,uVar2,(int)uVar16,uVar12);
  uVar13 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar11 = (undefined4)uVar19;
  uVar18 = FUN_0899a180(uVar11,uVar13,(int)uVar18,uVar2);
  uVar16 = FUN_0899a180((int)uVar16,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar18 = FUN_0899a1f4(uVar11,uVar13,uVar11,uVar13);
  uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar12 = (undefined4)uVar18;
  uVar18 = FUN_0899a1f4(uVar12,uVar3,0x72bea4d0,0x3e663769);
  uVar18 = FUN_0899a118((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0xc5d26bf1,0xbebbbd41);
  uVar18 = FUN_0899a1f4(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = FUN_0899a118((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0xaf25de2c,0x3f11566a);
  uVar18 = FUN_0899a1f4(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = FUN_0899a118((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x16bebd93,0xbf66c16c);
  uVar18 = FUN_0899a1f4(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = FUN_0899a118((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x5555553e,0x3fc55555);
  uVar18 = FUN_0899a1f4(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = FUN_0899a180(uVar11,uVar13,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar12 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar19 = FUN_0899a1f4((int)uVar18,uVar12,uVar11,uVar13);
  uVar18 = FUN_0899a180((int)uVar18,uVar12,0,0x40000000);
  uVar18 = FUN_0899a56c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                        (int)((ulonglong)uVar18 >> 0x20));
  uVar19 = FUN_0899a1f4((int)uVar16,uVar2,uVar11,uVar13);
  uVar16 = FUN_0899a118((int)uVar16,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
  uVar16 = FUN_0899a180((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar16,
                        (int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0899a180((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar11,uVar13);
  uVar16 = FUN_0899a180(0,0x3ff00000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  iVar8 = (int)((ulonglong)uVar16 >> 0x20);
  iVar7 = iVar8 + iVar1 * 0x100000;
  if (iVar7 >> 0x14 < 1) {
    uVar16 = FUN_08998298((int)uVar16,iVar8,iVar1);
    iVar1 = FUN_0899a1f4(0,local_64,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  }
  else {
    iVar1 = FUN_0899a1f4(0,local_64,(int)uVar16,iVar7);
  }
  return iVar1;
}

