/* Entry 0x0890DF58 | file offset 0x0010AF30 | FUN_0890df58 | bytes 1732 */

undefined4 FUN_0890df58(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined1 auStack_270 [8];
  int local_268;
  uint local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c [8];
  char local_3c;
  int local_38;
  
  iVar15 = param_1 + 0x35c;
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    uVar3 = 2;
  }
  else {
    local_38 = iVar15;
    FUN_089057bc(auStack_270);
    piVar21 = &local_268;
    iVar4 = FUN_08905728(param_1,auStack_270,piVar21,0x1b8,0);
    iVar5 = *(int *)(param_1 + 0x354);
    if (iVar4 == iVar5 * 0xdc) {
      local_3c = '\x01';
      iVar4 = 0;
      local_38 = iVar15;
      if (0 < iVar5) {
        puVar20 = (undefined4 *)(param_1 + 0x78);
        do {
          piVar16 = piVar21 + 1;
          iVar7 = 0;
          iVar10 = 0;
          piVar13 = piVar16;
          piVar14 = piVar16;
          do {
            iVar10 = iVar10 + 2;
            iVar7 = iVar7 + CONCAT22(*(undefined2 *)((int)piVar14 + 2),(short)*piVar13);
            piVar13 = piVar13 + 1;
            piVar14 = piVar14 + 1;
          } while (iVar10 < 100);
          if (*piVar21 == iVar7 + piVar21[0x33] + (int)(char)piVar21[0x36]) {
            iVar5 = FUN_0890d588(piVar21,*(int *)(iVar15 + 0xf0) + 1);
            if (iVar5 < 0) {
              if (*(int *)(iVar15 + 0xf0) < piVar21[0x33] - (int)(char)piVar21[0x36]) {
                local_3c = '\0';
              }
            }
            else {
              iVar7 = iVar5 * 2;
              if (-1 < iVar5) {
                puVar17 = (undefined2 *)((int)piVar16 + iVar7);
                do {
                  FUN_0890d5b4(iVar15,*puVar17,0x76);
                  iVar7 = iVar7 + -2;
                  puVar17 = puVar17 + -1;
                } while (-1 < iVar7);
              }
              *(int *)(iVar15 + 0xf0) = piVar21[0x33];
              iVar5 = piVar21[0x35];
              if (iVar5 != -1) {
                iVar7 = puVar20[8];
                iVar10 = piVar21[0x34];
                if (iVar7 == 4) {
                  iVar8 = 0;
                  puVar20[8] = 3;
                  puVar11 = puVar20;
                  puVar2 = puVar20;
                  do {
                    uVar3 = puVar2[3];
                    *puVar11 = puVar2[2];
                    puVar11[1] = uVar3;
                    iVar7 = puVar20[8];
                    iVar8 = iVar8 + 1;
                    puVar11 = puVar11 + 2;
                    puVar2 = puVar2 + 2;
                  } while (iVar8 < iVar7);
                }
                puVar20[iVar7 * 2] = iVar5;
                puVar20[puVar20[8] * 2 + 1] = iVar10;
                puVar20[8] = puVar20[8] + 1;
              }
            }
            iVar5 = *(int *)(param_1 + 0x354);
          }
          else {
            local_3c = '\0';
          }
          iVar4 = iVar4 + 1;
          piVar21 = piVar21 + 0x37;
          iVar15 = iVar15 + 0xf4;
          puVar20 = puVar20 + 0x15;
        } while (iVar4 < iVar5);
      }
      if (local_3c == '\x01') {
        if (*(int *)(param_1 + 0x358) < *(int *)(param_1 + 0x44)) {
          FUN_0890cb48(param_1,auStack_270,*(undefined4 *)(local_38 + 0xf0));
        }
        else {
          iVar15 = param_1 + (*(int *)(param_1 + 0x44) + -1) * 0x4c;
          local_b0 = *(undefined1 *)(iVar15 + 0xf4);
          local_af = *(undefined1 *)(iVar15 + 0xf5);
          local_ae = *(undefined1 *)(iVar15 + 0xf6);
          local_ad = *(undefined1 *)(iVar15 + 0xf7);
          local_ac = *(undefined1 *)(iVar15 + 0xf8);
          local_ab = *(undefined1 *)(iVar15 + 0xf9);
          local_a8 = *(undefined4 *)(iVar15 + 0xfc);
          local_a4 = *(undefined4 *)(iVar15 + 0x100);
          local_a0 = *(undefined4 *)(iVar15 + 0x104);
          local_9c = *(undefined4 *)(iVar15 + 0x108);
          local_98 = *(undefined4 *)(iVar15 + 0x10c);
          local_94 = *(undefined4 *)(iVar15 + 0x110);
          local_90 = *(undefined4 *)(iVar15 + 0x114);
          local_8c = *(undefined4 *)(iVar15 + 0x118);
          local_88 = *(undefined4 *)(iVar15 + 0x11c);
          local_84 = *(undefined4 *)(iVar15 + 0x120);
          local_80 = *(undefined4 *)(iVar15 + 0x124);
          local_7c = *(undefined4 *)(iVar15 + 0x128);
          local_78 = *(undefined4 *)(iVar15 + 300);
          local_74 = *(int *)(iVar15 + 0x130);
          local_70 = *(undefined4 *)(iVar15 + 0x134);
          local_6c = *(undefined4 *)(iVar15 + 0x138);
          local_68 = *(undefined4 *)(iVar15 + 0x13c);
          FUN_0890c930(param_1,&local_b0,*(int *)(local_38 + 0xf0),
                       *(int *)(local_38 + 0xf0) - local_74);
        }
      }
      uVar6 = *(uint *)(param_1 + 0x10);
      bVar1 = (uVar6 & 2) != 0;
    }
    else if (iVar4 == 0x10) {
      iVar15 = FUN_0890d304(param_1,auStack_270);
      if (iVar15 != -1) {
        iVar5 = param_1 + iVar15 * 0x4c;
        *(int *)(iVar5 + 0xfc) = local_268;
        *(uint *)(iVar5 + 0x100) = local_264;
        *(undefined4 *)(iVar5 + 0x104) = local_260;
        *(undefined4 *)(iVar5 + 0x108) = local_25c;
        *(int *)(iVar5 + 0x130) = local_268;
        FUN_089057bc(&local_64);
        iVar15 = *(int *)(param_1 + 0x354);
        iVar4 = *(int *)(param_1 + 0x44);
        if (iVar4 < iVar15 * 2) {
          iVar15 = param_1 + (iVar4 - iVar15) * 0x54;
          local_64 = *(undefined1 *)(iVar15 + 0x4c);
          local_63 = *(undefined1 *)(iVar15 + 0x4d);
          local_62 = *(undefined1 *)(iVar15 + 0x4e);
          local_61 = *(undefined1 *)(iVar15 + 0x4f);
          local_60 = *(undefined1 *)(iVar15 + 0x50);
          local_5f = *(undefined1 *)(iVar15 + 0x51);
          uVar3 = *(undefined4 *)(iVar5 + 0x130);
        }
        else {
          iVar15 = param_1 + (iVar4 + iVar15 * -2) * 0x4c;
          local_64 = *(undefined1 *)(iVar15 + 0xf4);
          local_63 = *(undefined1 *)(iVar15 + 0xf5);
          local_62 = *(undefined1 *)(iVar15 + 0xf6);
          local_61 = *(undefined1 *)(iVar15 + 0xf7);
          local_60 = *(undefined1 *)(iVar15 + 0xf8);
          local_5f = *(undefined1 *)(iVar15 + 0xf9);
          uVar3 = *(undefined4 *)(iVar5 + 0x130);
        }
        FUN_0890cb48(param_1,&local_64,uVar3);
      }
      uVar6 = *(uint *)(param_1 + 0x10);
      bVar1 = (uVar6 & 2) != 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x10);
      if (iVar4 == 8) {
        if ((local_264 & 1) != 0) {
          uVar6 = uVar6 | 4;
          *(uint *)(param_1 + 0x10) = uVar6;
          if (*(int *)(param_1 + 0xc) == -1) {
            *(int *)(param_1 + 0xc) = local_268;
          }
        }
        bVar1 = (uVar6 & 2) != 0;
      }
      else {
        bVar1 = (uVar6 & 2) != 0;
      }
    }
    if (bVar1) {
      if (((uVar6 & 4) == 0) && (iVar15 = FUN_0890cbd4(param_1), iVar15 != 0)) {
        uVar6 = *(uint *)(param_1 + 0x354);
        uVar19 = 0;
        uVar18 = 0;
        if (0 < (int)uVar6) {
          puVar20 = local_5c;
          iVar15 = local_38;
          do {
            iVar4 = FUN_0890d638(iVar15,*(undefined4 *)(param_1 + 0x48));
            if (-1 < iVar4) {
              FUN_0890d090(param_1,puVar20,*(undefined2 *)(iVar15 + iVar4 * 2));
              uVar18 = uVar18 | 1 << (uVar19 & 0x1f);
            }
            uVar19 = uVar19 + 1;
            iVar15 = iVar15 + 0xf4;
            puVar20 = puVar20 + 4;
          } while ((int)uVar19 < *(int *)(param_1 + 0x354));
        }
        if (uVar18 == (1 << (uVar6 & 0x1f)) - 1U) {
          FUN_0890cd90(param_1);
          iVar15 = 0;
          puVar20 = local_5c;
          if (0 < *(int *)(param_1 + 0x354)) {
            do {
              iVar4 = FUN_08872088(iVar15);
              uVar9 = puVar20[1];
              uVar12 = puVar20[2];
              *(undefined4 *)(iVar4 + 0x40) = *puVar20;
              uVar3 = puVar20[3];
              *(undefined4 *)(iVar4 + 0x44) = uVar9;
              *(undefined4 *)(iVar4 + 0x48) = uVar12;
              *(undefined4 *)(iVar4 + 0x4c) = uVar3;
              iVar15 = iVar15 + 1;
              puVar20 = puVar20 + 4;
            } while (iVar15 < *(int *)(param_1 + 0x354));
          }
          uVar3 = 0;
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
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
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

