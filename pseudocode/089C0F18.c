/* Entry 0x089C0F18 | file offset 0x001BDEF0 | FUN_089c0f18 | bytes 2316 */

undefined4 FUN_089c0f18(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined1 auStack_70 [12];
  int local_64;
  int local_5c;
  int local_58;
  short local_52;
  int local_50;
  
  if (((param_1 == 0) || (param_5 == 0)) || (iVar2 = FUN_089c0a6c(param_2,param_3), iVar2 == 0)) {
    return 0;
  }
  FUN_089bb460(param_1);
  FUN_089c0c0c(param_2,auStack_70);
  iVar2 = local_64 + -0x36;
  if (local_64 + -0x36 < 0) {
    iVar2 = local_64 + -0x33;
  }
  iVar2 = iVar2 >> 2;
  if ((0 < iVar2) && (local_52 < 0x10)) {
    uVar3 = 0x100;
    if (iVar2 < 0x11) {
      uVar3 = 0x10;
    }
    uVar4 = thunk_FUN_089bb634(1,param_5);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    FUN_089be68c(uVar4,3,0,uVar3,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
    uVar3 = FUN_089bd2d0(param_1,0,0);
    FUN_089c0ae4(uVar3,param_2 + 0x36,iVar2,1,0xff);
  }
  uVar3 = FUN_089c0a94((int)local_52,local_50);
  uVar4 = FUN_089bb634(1,param_5);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  iVar2 = -local_58;
  iVar12 = local_58;
  if (local_58 < iVar2) {
    iVar12 = iVar2;
  }
  FUN_089be68c(uVar4,uVar3,0,local_5c,iVar12,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
  puVar19 = (ushort *)(local_64 + param_2);
  puVar5 = (ushort *)FUN_089bd25c(param_1,0,0);
  if (local_50 != 0) {
    if (local_52 == 4) {
      uVar10 = (local_5c + 1) / 2 + 0xfU & 0xfffffff0;
      puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 + -1));
      iVar12 = local_58 * uVar10;
      iVar16 = local_58;
      if (local_58 < 0) {
        uVar10 = -uVar10;
        iVar12 = -iVar12;
        puVar18 = puVar5;
        iVar16 = iVar2;
      }
      FUN_08935828(puVar5,0,iVar12);
      if (0 < iVar16) {
        uVar7 = 0;
        iVar2 = 0;
        puVar5 = puVar18;
LAB_089c1350:
        do {
          bVar6 = (byte)*puVar19;
          while( true ) {
            uVar9 = (uint)bVar6;
            puVar20 = (ushort *)((int)puVar19 + 1);
            bVar8 = true;
            if (uVar9 != 0) break;
            uVar9 = (uint)*(byte *)((int)puVar19 + 1);
            puVar20 = puVar19 + 1;
            bVar8 = false;
            if (2 < uVar9) break;
            if (uVar9 == 1) goto LAB_089c12a8;
            if (uVar9 == 0) {
              puVar18 = (ushort *)((int)puVar5 - uVar10);
              iVar2 = iVar2 + 1;
              uVar7 = 0;
              puVar5 = puVar18;
            }
            else {
              uVar1 = *puVar20;
              puVar5 = (ushort *)((int)puVar5 - uVar10 * *(byte *)((int)puVar19 + 3));
              puVar20 = puVar19 + 2;
              uVar7 = uVar7 + (byte)uVar1;
              iVar2 = iVar2 + (uint)*(byte *)((int)puVar19 + 3);
              puVar18 = (ushort *)((int)puVar5 + (int)uVar7 / 2);
            }
            if (iVar16 <= iVar2) {
              sceKernelDcacheWritebackAll();
              return 1;
            }
            bVar6 = (byte)*puVar20;
            puVar19 = puVar20;
          }
          uVar14 = local_5c - uVar7;
          if ((int)uVar9 < (int)uVar14) {
            uVar14 = uVar9;
          }
          if (bVar8) {
            uVar9 = 0;
            if ((int)uVar14 < 1) {
              puVar19 = (ushort *)((int)puVar20 + 1);
            }
            else {
              do {
                while( true ) {
                  uVar17 = uVar7;
                  uVar7 = (uint)(byte)*puVar20;
                  if (((uVar9 ^ 1) & 1) != 0) {
                    uVar7 = (int)(uint)(byte)*puVar20 >> 4;
                  }
                  if (((uVar17 ^ 1) & 1) != 0) break;
                  uVar9 = uVar9 + 1;
                  *(byte *)puVar18 = (byte)((uVar7 & 0xf) << 4) | (byte)*puVar18;
                  puVar18 = (ushort *)((int)puVar18 + 1);
                  uVar7 = uVar17 + 1;
                  if (uVar14 == uVar9) goto LAB_089c13e4;
                }
                uVar9 = uVar9 + 1;
                *(byte *)puVar18 = (byte)(uVar7 & 0xf);
                uVar7 = uVar17 + 1;
              } while (uVar14 != uVar9);
LAB_089c13e4:
              uVar7 = uVar17 + 1;
              puVar19 = (ushort *)((int)puVar20 + 1);
            }
            goto LAB_089c1350;
          }
          uVar9 = 0;
          if (0 < (int)uVar14) {
            do {
              while (uVar17 = uVar7, ((uVar9 ^ 1) & 1) != 0) {
                uVar7 = (int)(uint)(byte)*puVar20 >> 4;
                bVar6 = (byte)uVar7;
                if (((uVar17 ^ 1) & 1) != 0) goto LAB_089c1414;
LAB_089c144c:
                uVar9 = uVar9 + 1;
                *(byte *)puVar18 = (byte)(uVar7 << 4) | (byte)*puVar18;
                puVar18 = (ushort *)((int)puVar18 + 1);
                uVar7 = uVar17 + 1;
                if (uVar14 == uVar9) goto LAB_089c1468;
              }
              uVar7 = (byte)*puVar20 & 0xf;
              bVar6 = (byte)uVar7;
              puVar20 = (ushort *)((int)puVar20 + 1);
              if (((uVar17 ^ 1) & 1) == 0) goto LAB_089c144c;
LAB_089c1414:
              uVar9 = uVar9 + 1;
              *(byte *)puVar18 = bVar6;
              uVar7 = uVar17 + 1;
            } while (uVar14 != uVar9);
LAB_089c1468:
            uVar7 = uVar17 + 1;
          }
          puVar19 = (ushort *)
                    ((int)puVar20 +
                    ((uVar14 & 1) -
                    ((int)(((uVar14 + 1) - ((int)(uVar14 + 1) >> 0x1f)) * 0x40000000) >> 0x1f)));
        } while( true );
      }
    }
    else if (local_52 == 8) {
      uVar10 = local_5c + 0xfU & 0xfffffff0;
      puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 + -1));
      iVar12 = local_58 * uVar10;
      iVar16 = local_58;
      if (local_58 < 0) {
        uVar10 = -uVar10;
        iVar12 = -iVar12;
        puVar18 = puVar5;
        iVar16 = iVar2;
      }
      FUN_08935828(puVar5,0,iVar12);
      if (0 < iVar16) {
        iVar2 = 0;
        iVar12 = 0;
        puVar5 = puVar18;
        do {
          while( true ) {
            uVar7 = (uint)(byte)*puVar19;
            puVar20 = (ushort *)((int)puVar19 + 1);
            bVar8 = true;
            if (uVar7 == 0) break;
LAB_089c1678:
            uVar9 = local_5c - iVar2;
            if ((int)uVar7 < (int)uVar9) {
              uVar9 = uVar7;
            }
            if (bVar8) {
              uVar7 = 0;
              if (0 < (int)uVar9) {
                do {
                  uVar7 = uVar7 + 1;
                  *(byte *)puVar5 = (byte)*puVar20;
                  puVar5 = (ushort *)((int)puVar5 + 1);
                } while (uVar9 != uVar7);
              }
              puVar19 = (ushort *)((int)puVar20 + 1);
              iVar2 = iVar2 + uVar9;
            }
            else {
              uVar7 = 0;
              if (0 < (int)uVar9) {
                do {
                  uVar1 = *puVar20;
                  uVar7 = uVar7 + 1;
                  puVar20 = (ushort *)((int)puVar20 + 1);
                  *(byte *)puVar5 = (byte)uVar1;
                  puVar5 = (ushort *)((int)puVar5 + 1);
                } while (uVar9 != uVar7);
              }
              puVar19 = (ushort *)((uVar9 & 1) + (int)puVar20);
              iVar2 = iVar2 + uVar9;
            }
          }
          uVar7 = (uint)*(byte *)((int)puVar19 + 1);
          puVar20 = puVar19 + 1;
          if (2 < uVar7) {
            bVar8 = false;
            goto LAB_089c1678;
          }
          if (uVar7 == 1) break;
          if (uVar7 == 0) {
            puVar18 = (ushort *)((int)puVar18 - uVar10);
            iVar12 = iVar12 + 1;
            iVar2 = 0;
            puVar5 = puVar18;
            puVar19 = puVar20;
          }
          else {
            puVar18 = (ushort *)((int)puVar18 - uVar10 * *(byte *)((int)puVar19 + 3));
            iVar2 = iVar2 + (uint)(byte)puVar19[1];
            iVar12 = iVar12 + (uint)*(byte *)((int)puVar19 + 3);
            puVar5 = (ushort *)((int)puVar18 + iVar2);
            puVar19 = puVar19 + 2;
          }
          if (iVar16 <= iVar12) {
            sceKernelDcacheWritebackAll();
            return 1;
          }
        } while( true );
      }
    }
    else if (local_52 == 0x10) {
      uVar10 = local_5c + 7U & 0xfffffff8;
      puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 * 2 + -2));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar18 = puVar5;
        local_58 = iVar2;
      }
      if (0 < local_58) {
        iVar2 = 0;
        do {
          iVar12 = 0;
          puVar5 = puVar18;
          puVar20 = puVar19;
          if (0 < local_5c) {
            do {
              uVar1 = *puVar20;
              iVar12 = iVar12 + 1;
              puVar20 = puVar20 + 1;
              *puVar5 = uVar1 & 0x7e0 | uVar1 >> 0xb | uVar1 << 0xb;
              puVar5 = puVar5 + 1;
            } while (local_5c != iVar12);
          }
          iVar2 = iVar2 + 1;
          puVar19 = puVar19 + (local_5c + 1U & 0xfffffffe);
          puVar18 = puVar18 + -uVar10;
        } while (local_58 != iVar2);
      }
    }
    goto LAB_089c12a8;
  }
  if (local_52 == 4) {
    iVar16 = (local_5c + 1) / 2;
    uVar10 = iVar16 + 0xfU & 0xfffffff0;
    puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 + -1));
    iVar12 = local_58;
    if (local_58 < 0) {
      uVar10 = -uVar10;
      puVar18 = puVar5;
      iVar12 = iVar2;
    }
    if (0 < iVar12) {
      iVar2 = 0;
      puVar20 = puVar19;
      do {
        iVar11 = 0;
        puVar13 = puVar18;
        puVar15 = puVar20;
        if (0 < iVar16) {
          do {
            uVar1 = *puVar15;
            iVar11 = iVar11 + 1;
            puVar15 = (ushort *)((int)puVar15 + 1);
            *(byte *)puVar13 = (byte)uVar1 << 4 | (byte)((int)(uint)(byte)uVar1 >> 4);
            puVar13 = (ushort *)((int)puVar13 + 1);
          } while (iVar16 != iVar11);
        }
        iVar2 = iVar2 + 1;
        puVar20 = (ushort *)((int)puVar20 + (iVar16 + 3U & 0xfffffffc));
        puVar18 = (ushort *)((int)puVar18 - uVar10);
      } while (iVar12 != iVar2);
    }
  }
  else {
    if (local_52 == 8) {
      uVar10 = local_5c + 0xfU & 0xfffffff0;
      puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 + -1));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar18 = puVar5;
        local_58 = iVar2;
      }
      if (0 < local_58) {
        iVar2 = 0;
        do {
          iVar12 = 0;
          puVar5 = puVar18;
          puVar20 = puVar19;
          if (0 < local_5c) {
            do {
              uVar1 = *puVar20;
              iVar12 = iVar12 + 1;
              puVar20 = (ushort *)((int)puVar20 + 1);
              *(byte *)puVar5 = (byte)uVar1;
              puVar5 = (ushort *)((int)puVar5 + 1);
            } while (local_5c != iVar12);
          }
          iVar2 = iVar2 + 1;
          puVar19 = (ushort *)((int)puVar19 + (local_5c + 3U & 0xfffffffc));
          puVar18 = (ushort *)((int)puVar18 - uVar10);
        } while (local_58 != iVar2);
      }
      goto LAB_089c12a8;
    }
    if (local_52 == 0x10) {
      uVar10 = local_5c + 7U & 0xfffffff8;
      puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 * 2 + -2));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar18 = puVar5;
        local_58 = iVar2;
      }
      if (0 < local_58) {
        iVar2 = 0;
        do {
          iVar12 = 0;
          puVar5 = puVar18;
          puVar20 = puVar19;
          if (0 < local_5c) {
            do {
              uVar1 = *puVar20;
              iVar12 = iVar12 + 1;
              puVar20 = puVar20 + 1;
              *puVar5 = uVar1 & 0x3e0 | (ushort)(((uint)uVar1 << 0x11) >> 0x1b) |
                        (ushort)((uVar1 & 0x1f) << 10) | 0x8000;
              puVar5 = puVar5 + 1;
            } while (local_5c != iVar12);
          }
          iVar2 = iVar2 + 1;
          puVar19 = puVar19 + (local_5c + 1U & 0xfffffffe);
          puVar18 = puVar18 + -uVar10;
        } while (local_58 != iVar2);
      }
      goto LAB_089c12a8;
    }
    if (local_52 == 0x18) {
      uVar10 = local_5c * 4 + 0xfU & 0xfffffff0;
      puVar18 = (ushort *)((int)puVar5 + uVar10 * (local_58 + -1));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar18 = puVar5;
        local_58 = iVar2;
      }
      if (0 < local_58) {
        iVar2 = 0;
        do {
          iVar12 = 0;
          puVar5 = puVar18;
          puVar20 = puVar19;
          if (0 < local_5c) {
            do {
              iVar12 = iVar12 + 1;
              *(byte *)puVar5 = (byte)puVar20[1];
              *(byte *)((int)puVar5 + 1) = *(byte *)((int)puVar20 + 1);
              uVar1 = *puVar20;
              *(byte *)((int)puVar5 + 3) = 0xff;
              puVar20 = (ushort *)((int)puVar20 + 3);
              *(byte *)(puVar5 + 1) = (byte)uVar1;
              puVar5 = puVar5 + 2;
            } while (local_5c != iVar12);
          }
          iVar2 = iVar2 + 1;
          puVar19 = (ushort *)((int)puVar19 + (local_5c * 3 + 3U & 0xfffffffc));
          puVar18 = (ushort *)((int)puVar18 - uVar10);
        } while (local_58 != iVar2);
      }
      goto LAB_089c12a8;
    }
  }
  if (local_52 == 0x20) {
    FUN_089c0ae4(puVar5,puVar19,local_5c,local_58,0);
  }
LAB_089c12a8:
  sceKernelDcacheWritebackAll();
  return 1;
}

