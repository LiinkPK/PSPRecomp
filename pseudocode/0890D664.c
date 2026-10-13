/* Entry 0x0890D664 | file offset 0x0010A63C | FUN_0890d664 | bytes 2292 */

undefined4 FUN_0890d664(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_a0 [16];
  int local_90;
  int local_8c;
  undefined1 auStack_88 [8];
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [8];
  undefined4 *local_3c;
  uint local_38;
  int local_34;
  int local_30;
  
  puVar12 = (undefined4 *)(param_1 + 0x35c);
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    uVar3 = 2;
  }
  else {
    local_3c = puVar12;
    iVar4 = FUN_0890d214(param_1);
    iVar8 = *(int *)(param_1 + 0x568);
    iVar5 = FUN_0890c810(param_1);
    if ((iVar8 - iVar4 < 4) && (local_3c = puVar12, iVar5 == 1)) {
      sceCtrlReadBufferPositive(auStack_a0,1);
      uVar2 = FUN_0890ce58(param_1,auStack_a0);
      FUN_0890d498(puVar12,uVar2,8);
      *(undefined1 *)(param_1 + 0x37d) = 0;
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x568);
      uVar3 = FUN_0890d444(puVar12);
      *puVar12 = uVar3;
      puVar7 = (undefined4 *)0x0;
      if (*(int *)(param_1 + 0x3c) != 0) {
        puVar7 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x3c) * 8 + 0x14);
      }
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x374) = 0;
        iVar4 = *(int *)(param_1 + 0x354);
      }
      else {
        *(undefined4 *)(param_1 + 0x378) = *puVar7;
        *(undefined4 *)(param_1 + 0x374) = puVar7[1];
        iVar4 = *(int *)(param_1 + 0x354);
      }
      iVar5 = 0;
      iVar8 = param_1 + 0x4c;
      if (0 < iVar4) {
        do {
          FUN_0890569c(param_1,iVar8,puVar12,0x24);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 0x54;
        } while (iVar5 < *(int *)(param_1 + 0x354));
      }
      if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
        iVar4 = *(int *)(param_1 + 0x568);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x44);
        FUN_0890d5b4(puVar12 + iVar4 * 0x3d + 9,*(undefined2 *)(param_1 + 0x360),0x76);
        puVar12[iVar4 * 0x3d + 0x45] = *(undefined4 *)(param_1 + 0x568);
        iVar4 = *(int *)(param_1 + 0x568);
      }
      *(int *)(param_1 + 0x568) = iVar4 + 1;
      iVar4 = *(int *)(param_1 + 0x44);
      bVar1 = iVar4 < *(int *)(param_1 + 0x358);
      local_3c = puVar12;
    }
    else {
      puVar12 = local_3c;
      iVar4 = 0;
      iVar5 = param_1 + 0x4c;
      if (0 < *(int *)(param_1 + 0x354)) {
        do {
          FUN_0890569c(param_1,iVar5,puVar12,0x24);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x54;
        } while (iVar4 < *(int *)(param_1 + 0x354));
      }
      iVar4 = *(int *)(param_1 + 0x44);
      bVar1 = iVar4 < *(int *)(param_1 + 0x358);
    }
    iVar5 = -1;
    if (bVar1) {
      iVar5 = iVar4;
    }
    if (-1 < iVar5) {
      iVar4 = param_1 + iVar5 * 0x4c;
      if (*(int *)(iVar4 + 0x134) < 0x1e) {
        *(int *)(iVar4 + 0x134) = *(int *)(iVar4 + 0x134) + 1;
      }
      else {
        if (*(int *)(iVar4 + 0x138) == *(int *)(iVar4 + 0x130)) {
          bVar1 = 7 < *(int *)(iVar4 + 0x13c);
          *(int *)(iVar4 + 0x13c) = *(int *)(iVar4 + 0x13c) + 1;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_90 = *(int *)(iVar4 + 0x130) + 100;
          local_8c = *(int *)(param_1 + 0x48) + -1;
          iVar5 = local_90;
          if (local_8c < local_90) {
            iVar5 = local_8c;
          }
          FUN_0890c930(param_1,iVar4 + 0xf4,iVar5,iVar5 - *(int *)(iVar4 + 0x130),param_1 + 0x380,
                       *(int *)(param_1 + 0x354) + 1);
          *(undefined4 *)(iVar4 + 0x134) = 0;
          *(undefined4 *)(iVar4 + 0x138) = *(undefined4 *)(iVar4 + 0x130);
          *(undefined4 *)(iVar4 + 0x13c) = 0;
        }
      }
    }
    uVar14 = 0;
    uVar15 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_089057bc(auStack_88);
          iVar4 = FUN_08905728(param_1,auStack_88,&local_80,0x24,0);
          if (iVar4 != 0x24) break;
          uVar6 = FUN_0890d260(param_1,auStack_88);
          if (uVar6 != 0xffffffff) {
            local_34 = param_1 + uVar6 * 0x54 + 0x4c;
            local_30 = local_80;
            iVar4 = FUN_0890d444(&local_80);
            if (local_30 == iVar4) {
              *(int *)(local_34 + 8) = local_80;
              *(uint *)(local_34 + 0xc) = local_7c;
              *(undefined4 *)(local_34 + 0x10) = local_78;
              *(undefined4 *)(local_34 + 0x14) = local_74;
              *(undefined4 *)(local_34 + 0x18) = local_70;
              *(undefined4 *)(local_34 + 0x1c) = local_6c;
              *(undefined4 *)(local_34 + 0x20) = local_68;
              *(undefined4 *)(local_34 + 0x24) = local_64;
              *(undefined4 *)(local_34 + 0x28) = local_60;
              uVar14 = uVar14 | 1 << (uVar6 & 0x1f);
            }
          }
        }
        if (iVar4 != 0x10) break;
        uVar6 = FUN_0890d304(param_1,auStack_88);
        if (uVar6 != 0xffffffff) {
          iVar4 = param_1 + uVar6 * 0x4c;
          *(int *)(iVar4 + 0xfc) = local_80;
          *(uint *)(iVar4 + 0x100) = local_7c;
          *(undefined4 *)(iVar4 + 0x104) = local_78;
          *(undefined4 *)(iVar4 + 0x108) = local_74;
          uVar15 = uVar15 | 1 << (uVar6 & 0x1f);
        }
      }
      if (iVar4 != 8) break;
      if (((local_7c & 1) != 0) &&
         (*(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4, *(int *)(param_1 + 0xc) == -1))
      {
        *(int *)(param_1 + 0xc) = local_80;
      }
    }
    iVar4 = *(int *)(param_1 + 0x354);
    uVar6 = 0;
    if (0 < iVar4) {
      iVar5 = param_1 + 0x4c;
      do {
        if ((uVar14 & 1 << (uVar6 & 0x1f)) != 0) {
          iVar4 = FUN_0890d550(iVar5 + 8,*(int *)(iVar5 + 0x50) + 1);
          if (iVar4 == 1) {
            *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + 1;
            iVar4 = *(int *)(iVar5 + 0x24);
            if (iVar4 != -1) {
              iVar8 = *(int *)(iVar5 + 0x4c);
              uVar3 = *(undefined4 *)(iVar5 + 0x20);
              if (iVar8 == 4) {
                iVar9 = 0;
                *(undefined4 *)(iVar5 + 0x4c) = 3;
                puVar12 = (undefined4 *)(iVar5 + 0x2c);
                puVar7 = (undefined4 *)(iVar5 + 0x34);
                do {
                  uVar11 = puVar7[1];
                  *puVar12 = *puVar7;
                  puVar12[1] = uVar11;
                  iVar8 = *(int *)(iVar5 + 0x4c);
                  iVar9 = iVar9 + 1;
                  puVar12 = puVar12 + 2;
                  puVar7 = puVar7 + 2;
                } while (iVar9 < iVar8);
              }
              *(int *)(iVar5 + iVar8 * 8 + 0x2c) = iVar4;
              *(undefined4 *)(iVar5 + *(int *)(iVar5 + 0x4c) * 8 + 0x30) = uVar3;
              *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
            }
          }
          iVar4 = *(int *)(param_1 + 0x354);
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x54;
      } while ((int)uVar6 < iVar4);
    }
    uVar14 = 0xffffffff;
    if ((int)*(uint *)(param_1 + 0x44) < *(int *)(param_1 + 0x358)) {
      uVar14 = *(uint *)(param_1 + 0x44);
    }
    if (-1 < (int)uVar14) {
      iVar4 = param_1 + uVar14 * 0x4c;
      if ((uVar15 & 1 << (uVar14 & 0x1f)) != 0) {
        *(undefined4 *)(iVar4 + 0x130) = *(undefined4 *)(iVar4 + 0xfc);
        iVar5 = *(int *)(iVar4 + 0x104);
        if (iVar5 != -1) {
          iVar8 = *(int *)(iVar4 + 300);
          uVar3 = *(undefined4 *)(iVar4 + 0x100);
          if (iVar8 == 4) {
            iVar9 = 0;
            *(undefined4 *)(iVar4 + 300) = 3;
            puVar12 = (undefined4 *)(iVar4 + 0x10c);
            puVar7 = (undefined4 *)(iVar4 + 0x114);
            do {
              uVar11 = puVar7[1];
              *puVar12 = *puVar7;
              puVar12[1] = uVar11;
              iVar8 = *(int *)(iVar4 + 300);
              iVar9 = iVar9 + 1;
              puVar12 = puVar12 + 2;
              puVar7 = puVar7 + 2;
            } while (iVar9 < iVar8);
          }
          *(int *)(iVar4 + 0xf4 + iVar8 * 8 + 0x18) = iVar5;
          *(undefined4 *)(iVar4 + 0xf4 + *(int *)(iVar4 + 300) * 8 + 0x1c) = uVar3;
          *(int *)(iVar4 + 300) = *(int *)(iVar4 + 300) + 1;
        }
      }
    }
    if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
      uVar3 = 0;
    }
    else if (((*(uint *)(param_1 + 0x10) & 4) == 0) &&
            (iVar4 = FUN_0890cbd4(param_1), puVar12 = local_3c, iVar4 != 0)) {
      uVar6 = *(int *)(param_1 + 0x354) + 1;
      uVar14 = (1 << (uVar6 & 0x1f)) - 1;
      uVar15 = 0;
      iVar4 = FUN_0890d524(local_3c,*(undefined4 *)(param_1 + 0x48));
      local_38 = uVar14;
      if (-1 < iVar4) {
        FUN_0890d090(param_1,local_5c + *(int *)(param_1 + 0x44) * 4,
                     *(undefined2 *)((int)puVar12 + iVar4 * 2 + 4));
        uVar15 = 1 << (*(uint *)(param_1 + 0x44) & 0x1f);
      }
      iVar4 = param_1 + 0x4c;
      uVar14 = 0;
      if (0 < *(int *)(param_1 + 0x354)) {
        do {
          iVar5 = FUN_0890d524(iVar4 + 8,*(undefined4 *)(param_1 + 0x48));
          uVar13 = uVar14 + 1;
          if (-1 < iVar5) {
            if (*(int *)(param_1 + 0x44) <= (int)uVar14) {
              uVar14 = uVar13;
            }
            FUN_0890d090(param_1,local_5c + uVar14 * 4,*(undefined2 *)(iVar4 + 0xc + iVar5 * 2));
            *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x48);
            uVar15 = uVar15 | 1 << (uVar14 & 0x1f);
          }
          iVar4 = iVar4 + 0x54;
          uVar14 = uVar13;
        } while ((int)uVar13 < *(int *)(param_1 + 0x354));
      }
      if (uVar15 == local_38) {
        FUN_0890cd90(param_1);
        iVar4 = 0;
        puVar12 = local_5c;
        if (0 < (int)uVar6) {
          do {
            iVar5 = FUN_08872088(iVar4);
            uVar11 = puVar12[1];
            uVar10 = puVar12[2];
            *(undefined4 *)(iVar5 + 0x40) = *puVar12;
            uVar3 = puVar12[3];
            *(undefined4 *)(iVar5 + 0x44) = uVar11;
            *(undefined4 *)(iVar5 + 0x48) = uVar10;
            *(undefined4 *)(iVar5 + 0x4c) = uVar3;
            iVar4 = iVar4 + 1;
            puVar12 = puVar12 + 4;
          } while (iVar4 < (int)uVar6);
        }
        puVar12 = local_3c;
        iVar4 = *(int *)(param_1 + 0x48);
        if (0 < *(int *)(param_1 + 0x354)) {
          iVar8 = param_1 + 0x4c;
          iVar5 = 0;
          do {
            iVar4 = FUN_0890d524(iVar8 + 8,iVar4);
            iVar9 = iVar5 + 1;
            if (iVar4 != -1) {
              if (*(int *)(param_1 + 0x44) <= iVar5) {
                iVar5 = iVar9;
              }
              FUN_0890d5b4(puVar12 + iVar5 * 0x3d + 9,*(undefined2 *)(iVar8 + 0xc + iVar4 * 2),0x76)
              ;
              puVar12[iVar5 * 0x3d + 0x45] = *(undefined4 *)(param_1 + 0x48);
            }
            iVar8 = iVar8 + 0x54;
            iVar4 = *(int *)(param_1 + 0x48);
            iVar5 = iVar9;
          } while (iVar9 < *(int *)(param_1 + 0x354));
        }
        *(int *)(param_1 + 0x48) = iVar4 + 1;
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      FUN_0890c870(param_1);
      uVar3 = 3;
    }
  }
  return uVar3;
}

