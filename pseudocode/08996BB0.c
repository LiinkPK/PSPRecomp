/* Entry 0x08996BB0 | file offset 0x00193B88 | FUN_08996bb0 | bytes 3268 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_08996bb0(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uStack_2b4;
  uint local_2b0 [2];
  undefined1 auStack_2a8 [232];
  uint local_1c0 [40];
  undefined4 local_120 [40];
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  
  puVar6 = local_2b0;
  puVar20 = local_2b0;
  puVar21 = local_2b0;
  local_3c = (param_3 + -3) / 0x18;
  iVar11 = *(int *)(&DAT_089d1088 + param_5 * 4);
  param_4 = param_4 + -1;
  local_54 = iVar11;
  local_74 = iVar11;
  local_50 = (uint)(param_4 < 0);
  local_64 = param_1;
  local_68 = param_2;
  local_70 = param_6;
  local_6c = param_5;
  if (local_3c < 0) {
    local_3c = 0;
  }
  local_5c = param_4;
  iVar17 = local_3c - param_4;
  local_4c = param_3 + local_3c * -0x18 + -0x18;
  iVar18 = 0;
  if (-1 < iVar11 + param_4) {
    puVar14 = (undefined4 *)(param_6 + iVar17 * 4);
    do {
      uVar23 = 0;
      if (-1 < iVar17) {
        uVar23 = FUN_0899a7ec(*puVar14);
      }
      *(undefined8 *)(puVar6 + 0x14) = uVar23;
      iVar18 = iVar18 + 1;
      puVar6 = puVar6 + 2;
      iVar17 = iVar17 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar18 <= iVar11 + param_4);
  }
  iVar11 = local_5c;
  iVar17 = 0;
  if (-1 < local_54) {
    do {
      uVar23 = 0;
      iVar18 = 0;
      uVar22 = 0;
      if (local_50 == 0) {
        iVar13 = (int)local_2b0 + (iVar17 + iVar11) * 8;
        puVar14 = param_1;
        do {
          uVar22 = FUN_0899a1f4(*puVar14,puVar14[1],*(undefined4 *)(iVar13 + 0x50),
                                *(undefined4 *)(iVar13 + 0x54));
          uVar23 = FUN_0899a118((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,
                                (int)((ulonglong)uVar22 >> 0x20));
          iVar18 = iVar18 + 1;
          puVar14 = puVar14 + 2;
          iVar13 = iVar13 + -8;
          uVar22 = uVar23;
        } while (iVar18 <= iVar11);
      }
      *(undefined8 *)(puVar20 + 100) = uVar22;
      iVar17 = iVar17 + 1;
      puVar20 = puVar20 + 2;
    } while (iVar17 <= local_54);
  }
  local_78 = 0x18 - local_4c;
  local_7c = 0x17 - local_4c;
  local_80 = local_54 + -1;
  uVar8 = local_120[local_54 * 2 + 1];
  uVar5 = local_120[local_54 * 2];
  iVar11 = local_54;
  while( true ) {
    uVar23 = CONCAT44(uVar8,uVar5);
    if (0 < iVar11) {
      iVar18 = (int)local_2b0 + iVar11 * 8;
      puVar6 = local_2b0;
      iVar17 = iVar11;
      do {
        local_38 = uVar23;
        uVar23 = FUN_0899a1f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,0x3e700000);
        uVar5 = FUN_0899a8c8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        uVar23 = FUN_0899a7ec(uVar5);
        uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar22 = FUN_0899a1f4((int)uVar23,uVar5,0,0x41700000);
        uVar22 = FUN_0899a180((undefined4)local_38,local_38._4_4_,(int)uVar22,
                              (int)((ulonglong)uVar22 >> 0x20));
        uVar3 = FUN_0899a8c8((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        uVar9 = *(undefined4 *)(iVar18 + 0x18c);
        uVar8 = *(undefined4 *)(iVar18 + 0x188);
        *puVar6 = uVar3;
        uVar23 = FUN_0899a118(uVar8,uVar9,(int)uVar23,uVar5);
        puVar6 = puVar6 + 1;
        iVar17 = iVar17 + -1;
        iVar18 = iVar18 + -8;
      } while (0 < iVar17);
    }
    iVar17 = local_4c;
    uVar23 = FUN_08998298((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_4c);
    uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar22 = FUN_0899a1f4((int)uVar23,uVar5,0,0x3fc00000);
    uVar22 = FUN_08997fdc((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    uVar22 = FUN_0899a1f4((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,0x40200000);
    uVar23 = FUN_0899a180((int)uVar23,uVar5,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar4 = FUN_0899a8c8((int)uVar23,uVar5);
    uVar22 = FUN_0899a7ec(uVar4);
    uVar23 = FUN_0899a180((int)uVar23,uVar5,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    uVar3 = local_7c;
    uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
    iVar18 = 0;
    if (iVar17 < 1) {
      if (iVar17 == 0) {
        iVar18 = (int)(&uStack_2b4)[iVar11] >> 0x17;
      }
      else {
        iVar17 = FUN_0899a790((int)uVar23,uVar5,0,0x3fe00000);
        if (-1 < iVar17) {
          iVar18 = 2;
        }
      }
    }
    else {
      iVar17 = (int)(&uStack_2b4)[iVar11] >> (local_78 & 0x1f);
      uVar10 = (&uStack_2b4)[iVar11] - (iVar17 << (local_78 & 0x1f));
      uVar4 = iVar17 + uVar4;
      (&uStack_2b4)[iVar11] = uVar10;
      iVar18 = (int)uVar10 >> (uVar3 & 0x1f);
    }
    local_44 = iVar18;
    local_40 = uVar4;
    if (0 < iVar18) {
      iVar17 = 0;
      local_40 = uVar4 + 1;
      bVar1 = false;
      puVar6 = local_2b0;
      if (0 < iVar11) {
        do {
          uVar3 = *puVar6;
          if (bVar1) {
            *puVar6 = 0xffffff - uVar3;
          }
          else if (uVar3 != 0) {
            bVar1 = true;
            *puVar6 = 0x1000000 - uVar3;
          }
          iVar17 = iVar17 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar17 < iVar11);
      }
      iVar17 = local_4c;
      if (0 < local_4c) {
        if (local_4c < 2) {
          if (0 < local_4c) {
            (&uStack_2b4)[iVar11] = (&uStack_2b4)[iVar11] & 0x7fffff;
          }
        }
        else if (local_4c < 3) {
          (&uStack_2b4)[iVar11] = (&uStack_2b4)[iVar11] & 0x3fffff;
        }
      }
      if (local_44 == 2) {
        uVar23 = FUN_0899a180(0,0x3ff00000,(int)uVar23,uVar5);
        if (bVar1) {
          uVar22 = FUN_08998298(0,0x3ff00000,iVar17);
          uVar23 = FUN_0899a180((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,
                                (int)((ulonglong)uVar22 >> 0x20));
        }
      }
    }
    uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar5 = (undefined4)uVar23;
    iVar17 = FUN_0899a790(uVar5,uVar8,0,0);
    if (iVar17 != 0) break;
    iVar17 = iVar11 + -1;
    uVar3 = 0;
    if (local_54 <= iVar17) {
      puVar6 = (uint *)((int)local_2b0 + iVar17 * 4);
      do {
        iVar17 = iVar17 + -1;
        uVar3 = uVar3 | *puVar6;
        puVar6 = puVar6 + -1;
      } while (local_54 <= iVar17);
    }
    if (uVar3 != 0) break;
    piVar7 = (int *)((int)local_2b0 + local_80 * 4);
    iVar17 = 1;
    iVar18 = *piVar7;
    while (iVar18 == 0) {
      piVar7 = piVar7 + -1;
      iVar17 = iVar17 + 1;
      iVar18 = *piVar7;
    }
    local_60 = iVar11 + 1;
    local_58 = iVar11 + iVar17;
    if (local_60 <= iVar11 + iVar17) {
      iVar11 = local_60 + local_5c;
      iVar18 = (int)local_2b0 + local_60 * 8;
      puVar14 = (undefined4 *)(local_70 + (local_60 + local_3c) * 4);
      iVar17 = (int)local_2b0 + iVar11 * 8;
      do {
        uVar22 = FUN_0899a7ec(*puVar14);
        uVar23 = 0;
        *(undefined8 *)(iVar17 + 0x50) = uVar22;
        iVar13 = 0;
        uVar22 = 0;
        if (local_50 == 0) {
          iVar12 = (int)local_2b0 + iVar11 * 8;
          puVar15 = local_64;
          do {
            uVar22 = FUN_0899a1f4(*puVar15,puVar15[1],*(undefined4 *)(iVar12 + 0x50),
                                  *(undefined4 *)(iVar12 + 0x54));
            uVar23 = FUN_0899a118((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,
                                  (int)((ulonglong)uVar22 >> 0x20));
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 2;
            iVar12 = iVar12 + -8;
            uVar22 = uVar23;
          } while (iVar13 <= local_5c);
        }
        *(undefined8 *)(iVar18 + 400) = uVar22;
        local_60 = local_60 + 1;
        iVar18 = iVar18 + 8;
        iVar11 = iVar11 + 1;
        puVar14 = puVar14 + 1;
        iVar17 = iVar17 + 8;
      } while (local_60 <= local_58);
    }
    uVar8 = local_120[local_58 * 2 + 1];
    uVar5 = local_120[local_58 * 2];
    iVar11 = local_58;
  }
  iVar17 = FUN_0899a790(uVar5,uVar8,0,0);
  if (iVar17 == 0) {
    iVar11 = iVar11 + -1;
    piVar7 = (int *)((int)local_2b0 + iVar11 * 4);
    local_4c = local_4c + -0x18;
    iVar17 = *piVar7;
    while (iVar17 == 0) {
      piVar7 = piVar7 + -1;
      local_4c = local_4c + -0x18;
      iVar17 = *piVar7;
      iVar11 = iVar11 + -1;
    }
  }
  else {
    uVar23 = FUN_08998298(uVar5,uVar8,-local_4c);
    uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar5 = (undefined4)uVar23;
    puVar14 = (undefined4 *)((int)local_2b0 + iVar11 * 4);
    iVar17 = FUN_0899a790(uVar5,uVar8,0,0x41700000);
    if (iVar17 < 0) {
      uVar5 = FUN_0899a8c8(uVar5,uVar8);
      *puVar14 = uVar5;
    }
    else {
      uVar23 = FUN_0899a1f4(uVar5,uVar8,0,0x3e700000);
      uVar9 = FUN_0899a8c8((int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
      uVar23 = FUN_0899a7ec(uVar9);
      uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar22 = FUN_0899a1f4((int)uVar23,uVar9,0,0x41700000);
      uVar22 = FUN_0899a180(uVar5,uVar8,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      uVar5 = FUN_0899a8c8((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      *puVar14 = uVar5;
      local_4c = local_4c + 0x18;
      iVar11 = iVar11 + 1;
      uVar5 = FUN_0899a8c8((int)uVar23,uVar9);
      *(undefined4 *)((int)local_2b0 + iVar11 * 4) = uVar5;
    }
  }
  uVar23 = FUN_08998298(0,0x3ff00000,local_4c);
  if (-1 < iVar11) {
    iVar18 = (int)local_2b0 + iVar11 * 8;
    puVar14 = (undefined4 *)((int)local_2b0 + iVar11 * 4);
    iVar17 = iVar11;
    do {
      uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar22 = FUN_0899a7ec(*puVar14);
      uVar22 = FUN_0899a1f4((int)uVar23,uVar5,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      *(undefined8 *)(iVar18 + 400) = uVar22;
      uVar23 = FUN_0899a1f4((int)uVar23,uVar5,0,0x3e700000);
      iVar17 = iVar17 + -1;
      iVar18 = iVar18 + -8;
      puVar14 = puVar14 + -1;
    } while (-1 < iVar17);
  }
  iVar17 = 0;
  if (-1 < iVar11) {
    local_48 = &DAT_089d1098;
    iVar18 = iVar11;
    do {
      uVar23 = 0;
      iVar13 = 0;
      bVar1 = local_74 < 0;
      iVar12 = (int)local_2b0 + iVar18 * 8;
      puVar14 = local_48;
      while( true ) {
        uVar3 = (uint)((ulonglong)uVar23 >> 0x20);
        if (bVar1) break;
        if (iVar17 < iVar13) {
          puVar21[0x3d] = uVar3;
          goto LAB_089974bc;
        }
        uVar22 = FUN_0899a1f4(*puVar14,puVar14[1],*(undefined4 *)(iVar12 + 400),
                              *(undefined4 *)(iVar12 + 0x194));
        uVar23 = FUN_0899a118((uint)uVar23,uVar3,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        iVar13 = iVar13 + 1;
        puVar14 = puVar14 + 2;
        iVar12 = iVar12 + 8;
        bVar1 = local_74 < iVar13;
      }
      puVar21[0x3d] = uVar3;
LAB_089974bc:
      puVar21[0x3c] = (uint)uVar23;
      iVar18 = iVar18 + -1;
      iVar17 = iVar17 + 1;
      puVar21 = puVar21 + 2;
    } while (-1 < iVar18);
  }
  if (local_6c < 1) {
    if (-1 < local_6c) {
      uVar23 = 0;
      uVar22 = 0;
      if (-1 < iVar11) {
        iVar17 = (int)local_2b0 + iVar11 * 8;
        do {
          uVar23 = FUN_0899a118((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                                *(undefined4 *)(iVar17 + 0xf0),*(undefined4 *)(iVar17 + 0xf4));
          iVar11 = iVar11 + -1;
          iVar17 = iVar17 + -8;
          uVar22 = uVar23;
        } while (-1 < iVar11);
      }
      if (local_44 != 0) {
        uVar22 = FUN_0899a99c();
      }
      *local_68 = uVar22;
    }
  }
  else if (local_6c < 3) {
    uVar23 = 0;
    uVar22 = 0;
    if (-1 < iVar11) {
      iVar18 = (int)local_2b0 + iVar11 * 8;
      iVar17 = iVar11;
      do {
        uVar23 = FUN_0899a118((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                              *(undefined4 *)(iVar18 + 0xf0),*(undefined4 *)(iVar18 + 0xf4));
        iVar17 = iVar17 + -1;
        iVar18 = iVar18 + -8;
        uVar22 = uVar23;
      } while (-1 < iVar17);
    }
    iVar17 = local_44;
    uVar8 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar5 = (undefined4)uVar22;
    if (local_44 != 0) {
      uVar22 = FUN_0899a99c(uVar5,uVar8);
    }
    puVar2 = local_68;
    *local_68 = uVar22;
    uVar23 = FUN_0899a180(local_1c0[0],local_1c0[1],uVar5,uVar8);
    iVar18 = 1;
    if (0 < iVar11) {
      puVar16 = auStack_2a8;
      do {
        uVar23 = FUN_0899a118((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                              *(undefined4 *)(puVar16 + 0xf0),*(undefined4 *)(puVar16 + 0xf4));
        iVar18 = iVar18 + 1;
        puVar16 = puVar16 + 8;
      } while (iVar18 <= iVar11);
    }
    if (iVar17 != 0) {
      uVar23 = FUN_0899a99c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    }
    puVar2[1] = uVar23;
  }
  else if (local_6c < 4) {
    if (0 < iVar11) {
      iVar18 = (int)local_2b0 + iVar11 * 8;
      iVar17 = iVar11;
      do {
        uVar8 = *(undefined4 *)(iVar18 + 0xec);
        uVar5 = *(undefined4 *)(iVar18 + 0xe8);
        uVar19 = *(undefined4 *)(iVar18 + 0xf4);
        uVar9 = *(undefined4 *)(iVar18 + 0xf0);
        uVar23 = FUN_0899a118(uVar5,uVar8,uVar9,uVar19);
        uVar22 = FUN_0899a180(uVar5,uVar8,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        uVar22 = FUN_0899a118(uVar9,uVar19,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        *(undefined8 *)(iVar18 + 0xf0) = uVar22;
        *(undefined8 *)(iVar18 + 0xe8) = uVar23;
        iVar17 = iVar17 + -1;
        iVar18 = iVar18 + -8;
      } while (0 < iVar17);
    }
    if (1 < iVar11) {
      iVar18 = (int)local_2b0 + iVar11 * 8;
      iVar17 = iVar11;
      do {
        uVar8 = *(undefined4 *)(iVar18 + 0xec);
        uVar5 = *(undefined4 *)(iVar18 + 0xe8);
        uVar19 = *(undefined4 *)(iVar18 + 0xf4);
        uVar9 = *(undefined4 *)(iVar18 + 0xf0);
        uVar23 = FUN_0899a118(uVar5,uVar8,uVar9,uVar19);
        uVar22 = FUN_0899a180(uVar5,uVar8,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        uVar22 = FUN_0899a118(uVar9,uVar19,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        *(undefined8 *)(iVar18 + 0xf0) = uVar22;
        *(undefined8 *)(iVar18 + 0xe8) = uVar23;
        iVar17 = iVar17 + -1;
        iVar18 = iVar18 + -8;
      } while (1 < iVar17);
    }
    uVar23 = 0;
    uVar22 = 0;
    if (1 < iVar11) {
      iVar17 = (int)local_2b0 + iVar11 * 8;
      do {
        uVar23 = FUN_0899a118((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                              *(undefined4 *)(iVar17 + 0xf0),*(undefined4 *)(iVar17 + 0xf4));
        iVar11 = iVar11 + -1;
        iVar17 = iVar17 + -8;
        uVar22 = uVar23;
      } while (1 < iVar11);
    }
    if (local_44 == 0) {
      *(uint *)((int)local_68 + 4) = local_1c0[1];
      *(uint *)local_68 = local_1c0[0];
      *(uint *)((int)local_68 + 0xc) = local_1c0[3];
      *(uint *)(local_68 + 1) = local_1c0[2];
      local_68[2] = uVar22;
    }
    else {
      uVar23 = FUN_0899a99c(local_1c0[0],local_1c0[1]);
      puVar2 = local_68;
      *local_68 = uVar23;
      uVar23 = FUN_0899a99c(local_1c0[2],local_1c0[3]);
      puVar2[1] = uVar23;
      uVar23 = FUN_0899a99c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      puVar2[2] = uVar23;
    }
  }
  return local_40 & 7;
}

