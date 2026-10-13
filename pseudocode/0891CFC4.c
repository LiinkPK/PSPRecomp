/* Entry 0x0891CFC4 | file offset 0x00119F9C | FUN_0891cfc4 | bytes 3892 */

void FUN_0891cfc4(undefined1 *param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  ushort uVar8;
  undefined2 uVar9;
  bool bVar10;
  int *piVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 **ppuVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 **ppuVar20;
  int iVar21;
  char *pcVar22;
  undefined1 *puVar23;
  undefined1 **ppuVar24;
  undefined1 *puVar25;
  int *piVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  undefined4 *puVar30;
  char acStack_753e [25118];
  undefined1 *local_1320;
  int local_131c;
  undefined1 auStack_1318 [8];
  undefined4 local_1310;
  int local_130c;
  undefined1 auStack_1308 [16];
  undefined1 auStack_12f8 [186];
  char acStack_123e [1705];
  char local_b95;
  undefined1 local_b94;
  char local_b90 [6];
  undefined2 local_b8a;
  undefined4 local_b84;
  undefined1 auStack_b80 [1891];
  char local_41d;
  int local_418;
  int local_414;
  uint local_410;
  ushort local_40c;
  undefined2 uStack_40a;
  undefined1 local_408;
  undefined1 local_407;
  char local_406;
  undefined1 local_405;
  undefined1 local_404 [8];
  undefined4 auStack_3fc [83];
  undefined2 local_2b0;
  undefined2 local_2ae;
  undefined2 local_2ac;
  undefined2 local_2aa;
  undefined1 local_2a8;
  undefined1 uStack_2a7;
  undefined1 local_2a6;
  undefined1 uStack_2a5;
  undefined1 auStack_2a4 [112];
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined2 local_208 [22];
  ushort local_1dc [2];
  int local_1d8;
  int local_1d4;
  int local_1d0;
  uint local_1cc [90];
  undefined1 *local_64;
  uint local_60;
  int local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  int *local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  undefined2 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  ppuVar20 = &local_1320;
  ppuVar16 = &local_1320;
  ppuVar24 = &local_1320;
  local_60 = param_2 & 0xff;
  local_5c = param_3;
  local_30 = &DAT_09afb8a0;
  *(undefined4 *)(param_1 + 0x2a2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a34) = 0;
  *(undefined4 *)(param_1 + 0x2a38) = 0;
  local_34 = param_1 + 0x2a04;
  local_64 = param_1 + 0x28b8;
  local_3c = 0;
  local_40 = &DAT_09afd960;
  local_44 = param_1 + 0x27e8;
  local_48 = &DAT_09afb8a0;
  iVar28 = 0;
  puVar30 = &DAT_09afb8a0;
  local_38 = param_1;
  do {
    puVar15 = local_34;
    puVar25 = local_38;
    iVar29 = (int)(char)local_34[1];
    if ((iVar29 != (char)local_34[2]) || (local_34[iVar29 + 8] == '\0')) {
      local_34[iVar29 + 8] = 1;
      switch(*(undefined2 *)(local_38 + iVar29 * 0x2e8 + 0x68)) {
      case 0:
        FUN_088f9bb0(iVar28,(int)(char)local_38[iVar29 * 0x2e8 + 0x78],
                     (int)*(short *)(local_38 + iVar29 * 0x2e8 + 0x6c),
                     local_38[iVar29 * 0x2e8 + 0x79] != '\0',
                     (int)(char)local_38[iVar29 * 0x2e8 + 0x7a],
                     (int)(char)local_38[iVar29 * 0x2e8 + 0x7b]);
        break;
      case 1:
        FUN_088f9f88(iVar28,(int)*(short *)(local_38 + iVar29 * 0x2e8 + 0x78),
                     (int)*(short *)(local_38 + iVar29 * 0x2e8 + 0x7a),
                     (int)*(short *)(local_38 + iVar29 * 0x2e8 + 0x7c),0xffffffff,iVar28 == 0);
        break;
      case 2:
        FUN_088fa11c(iVar28,(int)*(short *)(local_38 + iVar29 * 0x2e8 + 0x78),
                     (int)(char)local_38[iVar29 * 0x2e8 + 0x7a],
                     (int)(char)local_38[iVar29 * 0x2e8 + 0x7b],
                     *(undefined4 *)(local_38 + iVar29 * 0x2e8 + 0x7c),
                     *(undefined4 *)(local_38 + iVar29 * 0x2e8 + 0x80));
        break;
      case 3:
        FUN_088fa9a8(iVar28,*(undefined4 *)(local_38 + iVar29 * 0x2e8 + 0x78),iVar28 == 1);
        break;
      case 4:
        if (param_1[2] == '\x02') {
          FUN_088fab10(iVar28,(int)(char)local_38[iVar29 * 0x2e8 + 0x78],
                       (int)(char)local_38[iVar29 * 0x2e8 + 0x79],
                       (int)(char)local_38[iVar29 * 0x2e8 + 0x7a],
                       (int)(char)local_38[iVar29 * 0x2e8 + 0x7b]);
        }
        else {
          FUN_088faa4c(iVar28,(int)(char)local_38[iVar29 * 0x2e8 + 0x78],
                       (int)(char)local_38[iVar29 * 0x2e8 + 0x79],
                       (int)(char)local_38[iVar29 * 0x2e8 + 0x7a],
                       (int)(char)local_38[iVar29 * 0x2e8 + 0x7b],iVar28 == 1);
        }
        break;
      case 5:
        if ((local_60 == 0) && (iVar28 != 0)) {
          pcVar22 = local_38 + iVar29 * 0x2e8 + 0x78;
          iVar17 = FUN_088cbad0(local_30);
          if ((*(uint *)(puVar25 + iVar29 * 0x2e8 + 0x90) & 1) == 0) {
            cVar6 = *pcVar22;
            cVar1 = puVar25[iVar29 * 0x2e8 + 0x7c];
            cVar2 = puVar25[iVar29 * 0x2e8 + 0x7e];
            cVar3 = puVar25[iVar29 * 0x2e8 + 0x7a];
            cVar4 = puVar25[iVar29 * 0x2e8 + 0x7b];
            cVar5 = puVar25[iVar29 * 0x2e8 + 0x79];
            iVar21 = (int)(char)puVar25[iVar29 * 0x2e8 + 0x7d];
          }
          else {
            local_1310 = 1;
            local_130c = iVar17 + (char)puVar25[iVar29 * 0x2e8 + 0x7d];
            cVar6 = *pcVar22;
            cVar1 = puVar25[iVar29 * 0x2e8 + 0x7c];
            cVar2 = puVar25[iVar29 * 0x2e8 + 0x7e];
            cVar3 = puVar25[iVar29 * 0x2e8 + 0x7a];
            cVar4 = puVar25[iVar29 * 0x2e8 + 0x7b];
            cVar5 = puVar25[iVar29 * 0x2e8 + 0x79];
            iVar21 = local_130c;
            if (local_130c < 2) {
              iVar21 = 1;
            }
          }
          local_131c = (int)cVar5;
          local_1320 = puVar25 + iVar29 * 0x2e8 + 0x80;
          FUN_088fa2ac(iVar28,(int)cVar6,(int)cVar1,iVar21,(int)cVar2,iVar17,(int)cVar3,(int)cVar4);
          FUN_088cb9e8(auStack_1308);
          FUN_088f8e50(puVar30,auStack_1308);
          if ((-1 < *(short *)(puVar25 + iVar29 * 0x2e8 + 0x88)) &&
             (iVar17 = FUN_088bca50(), iVar17 != 0)) {
            FUN_088bc17c(iVar17,auStack_12f8);
          }
          if ((-1 < *(short *)(puVar25 + iVar29 * 0x2e8 + 0x8a)) &&
             (iVar17 = FUN_088bca74((int)*(short *)(puVar25 + iVar29 * 0x2e8 + 0x8a)), iVar17 != 0))
          {
            FUN_088b758c(auStack_12f8 + local_b95 * 0xc6);
            FUN_088bc4c0(iVar17,auStack_12f8);
          }
          sVar7 = *(short *)(puVar25 + iVar29 * 0x2e8 + 0x8c);
          if (-1 < sVar7) {
            cVar6 = *pcVar22;
            local_2c = puVar30;
            uVar19 = FUN_088cbad0(auStack_1308);
            iVar17 = FUN_088bca98((int)sVar7,(int)cVar6,uVar19,0,0xffffffff);
            puVar30 = local_2c;
            if (iVar17 != 0) {
              FUN_088bc58c(iVar17,auStack_12f8);
            }
          }
          if (-1 < (char)puVar25[iVar29 * 0x2e8 + 0x7f]) {
            acStack_123e[local_b95 * 0xc6] = puVar25[iVar29 * 0x2e8 + 0x7f];
          }
          local_b94 = puVar25[iVar29 * 0x2e8 + 0x79];
          FUN_088f8e14(puVar30,auStack_1308);
        }
        break;
      case 6:
        iVar17 = DAT_089d7f38 + local_3c + (char)local_34[1] * 0x1548;
        FUN_088faba4(iVar28,iVar17 + 0x70c);
        uVar9 = *(undefined2 *)(iVar17 + 0x176e);
        *local_40 = *(undefined2 *)(iVar17 + 0x176c);
        local_40[1] = uVar9;
        if (local_5c != iVar28) {
          iVar21 = 0;
          iVar17 = iVar17 + 6000;
          do {
            FUN_088fae9c(iVar21,iVar17);
            iVar21 = iVar21 + 1;
            iVar17 = iVar17 + 0x138;
          } while (iVar21 < 4);
        }
        break;
      case 7:
        FUN_088fa98c(iVar28,local_38 + iVar29 * 0x2e8 + 0x78,iVar28 == 0);
        break;
      case 8:
        FUN_088fa474(iVar28,*(undefined4 *)(local_38 + iVar29 * 0x2e8 + 0x78),(int)(char)local_34[1]
                    );
        break;
      case 9:
        if (iVar28 != 0) {
          FUN_088f9f88(iVar28,(int)*(short *)(local_38 + iVar29 * 0x2e8 + 0x78),0xffffffff,
                       0xffffffff,0xffffffff,0);
          *(int *)(param_1 + 0x2a2c) = (int)*(short *)(puVar25 + iVar29 * 0x2e8 + 0x7a);
          *(int *)(param_1 + 0x2a30) = (int)*(short *)(puVar25 + iVar29 * 0x2e8 + 0x7c);
        }
      }
      FUN_088cb9e8(local_b90);
      FUN_088f8e50(puVar30,local_b90);
      local_b84 = *(undefined4 *)(puVar25 + iVar29 * 0x2e8 + 0x70);
      local_b8a = (undefined2)*(undefined4 *)(puVar25 + iVar29 * 0x2e8 + 0x74);
      if (local_b90[0] == '\x17') {
        *(undefined4 *)(param_1 + 0x2a34) = *(undefined4 *)(puVar25 + iVar29 * 0x2e8 + 0x70);
        *(undefined4 *)(param_1 + 0x2a38) = *(undefined4 *)(puVar25 + iVar29 * 0x2e8 + 0x74);
      }
      if (((DAT_089d5f20 == '\x01') && (param_1[2] == '\x02')) && (iVar28 == 0)) {
        FUN_088ba44c(auStack_b80 + local_41d * 0xc6);
      }
      FUN_088f8e14(puVar30,local_b90);
      iVar29 = (int)(char)puVar15[1];
    }
    puVar14 = local_30;
    local_44[iVar29 * 0x14 + 1] = *(undefined1 *)((int)local_48 + 1);
    *(undefined4 *)(local_44 + iVar29 * 0x14 + 4) = local_48[3];
    *(undefined2 *)(local_44 + iVar29 * 0x14 + 0x10) = *(undefined2 *)((int)local_48 + 6);
    if (iVar28 == 0) {
      *(int *)(local_64 + (char)puVar15[1] * 4 + 0xc) =
           (int)*(char *)((int)local_48 + *(char *)((int)local_48 + 0x773) * 0xc6 + 0xca);
    }
    local_34 = local_34 + 0xd;
    local_38 = local_38 + 0xea8;
    local_3c = local_3c + 0x6a68;
    local_40 = local_40 + 2;
    iVar28 = iVar28 + 1;
    local_44 = local_44 + 0x68;
    puVar30 = puVar30 + 0x418;
    local_48 = local_48 + 0x418;
  } while (iVar28 < 2);
  local_418 = (int)(char)param_1[0x2a05];
  local_414 = (int)(char)param_1[0x2a12];
  if (local_60 == 0) {
    iVar28 = local_418;
    if (local_418 < local_414) {
      iVar28 = local_414;
    }
    bVar10 = false;
    if ((param_1[2] == '\x03') && (*(char *)(local_30 + 0x418) == '\x17')) {
      bVar10 = true;
      iVar28 = local_414;
    }
    local_408 = 0;
    local_410 = 0;
    local_40c = 0;
    uStack_40a = 0xffff;
    local_407 = 0;
    local_406 = 0;
    local_405 = 0;
    FUN_0892a13c(local_404);
    local_2b0 = 0xffff;
    local_2ae = 0;
    local_2ac = 0xffff;
    local_2aa = 0;
    local_40c = 0xffff;
    if (bVar10) {
      uVar8 = *(ushort *)(param_1 + iVar28 * 0x168 + 0x1d98);
      if ((uVar8 == 0x13) || (uVar8 == 0x24)) {
        local_40c = uVar8;
      }
      else if (((*(short *)(param_1 + (char)param_1[0x2a12] * 0x2e8 + 0xf10) == 1) &&
               (iVar29 = FUN_088bbd8c((int)*(short *)(param_1 +
                                                     (char)param_1[0x2a12] * 0x2e8 + 0xf20)),
               iVar29 != 0)) && (*(byte *)(iVar29 + 4) != 0xff)) {
        local_40c = (ushort)*(byte *)(iVar29 + 4);
      }
      if ((short)local_40c < 0) {
        local_40c = 0x24;
      }
    }
    else {
      cVar6 = param_1[0x2a12];
      if (*(short *)(param_1 + cVar6 * 0x2e8 + 0xf10) == 1) {
        iVar29 = FUN_088bbd8c((int)*(short *)(param_1 + cVar6 * 0x2e8 + 0xf20));
        if ((iVar29 != 0) && (*(byte *)(iVar29 + 4) != 0xff)) {
          local_40c = (ushort)*(byte *)(iVar29 + 4);
        }
      }
      else if ((*(short *)(param_1 + cVar6 * 0x2e8 + 0xf10) == 5) &&
              (-1 < (short)*(ushort *)(param_1 + cVar6 * 0x2e8 + 0xf36))) {
        local_40c = *(ushort *)(param_1 + cVar6 * 0x2e8 + 0xf36);
      }
      if (local_40c == 0xffff) {
        local_40c = *(ushort *)(param_1 + iVar28 * 0x168 + 0x1d98);
      }
      if (local_40c == 0xffff) {
        local_40c = FUN_088ad6d8();
      }
    }
    local_406 = (char)*(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1d9a);
    if ((char)*(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1d9a) == -1) {
      local_406 = FUN_088ad8a8();
    }
    uVar13 = *(uint *)(param_1 + iVar28 * 0x168 + 0x1d9c);
    if ((int)uVar13 < 0) {
      uVar13 = sceKernelGetSystemTimeLow();
      uVar13 = uVar13 & 0x7fffffff;
    }
    local_410 = uVar13;
    uVar12 = (undefined1)*(short *)(param_1 + iVar28 * 0x168 + 0x1da0);
    if (*(short *)(param_1 + iVar28 * 0x168 + 0x1da0) < 0) {
      uVar12 = FUN_088f47e0(10);
    }
    local_407 = uVar12;
    puVar14 = (undefined4 *)(param_1 + iVar28 * 0x168 + 0x1dac);
    uStack_40a = *(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1da2);
    iVar17 = 0x2a;
    uVar19 = *puVar14;
    iVar29 = 0;
    puVar30 = puVar14;
    do {
      iVar21 = iVar29;
      uVar18 = puVar30[1];
      *(undefined4 *)((int)ppuVar20 + 0xf1c) = uVar19;
      *(undefined4 *)((int)ppuVar20 + 0xf20) = uVar18;
      puVar30 = (undefined4 *)((int)puVar14 + iVar21 + 8);
      iVar17 = iVar17 + -1;
      uVar19 = *puVar30;
      ppuVar20 = (undefined1 **)(auStack_1318 + iVar21);
      iVar29 = iVar21 + 8;
    } while (iVar17 != 0);
    *(undefined4 *)((int)auStack_3fc + iVar21) = uVar19;
    local_2b0 = *(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1da4);
    local_2ae = *(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1da6);
    local_2ac = *(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1da8);
    iVar29 = 0;
    local_2aa = *(undefined2 *)(param_1 + iVar28 * 0x168 + 0x1daa);
    iVar28 = 0x2d;
    do {
      uVar19 = *(undefined4 *)((int)&local_40c + iVar29);
      *(undefined4 *)((int)local_30 + iVar29 + 0x25a8) = *(undefined4 *)((int)&local_410 + iVar29);
      *(undefined4 *)((int)local_30 + iVar29 + 0x25ac) = uVar19;
      iVar28 = iVar28 + -1;
      iVar29 = iVar29 + 8;
    } while (iVar28 != 0);
    local_2a8 = 0;
    uStack_2a7 = 0xff;
    local_2a6 = 0;
    uStack_2a5 = 0;
    iVar28 = 0;
    puVar25 = auStack_2a4;
    do {
      puVar25[0x1a] = 0;
      puVar25[0x1b] = 0;
      puVar25[0x33] = 0;
      puVar25[0x37] = 0;
      FUN_08935828(puVar25,0,0x1a);
      FUN_08935828(puVar25 + 0x1c,0,5);
      iVar29 = 0;
      puVar15 = puVar25;
      do {
        puVar15[0x21] = 0xff;
        puVar15[0x26] = 0xff;
        iVar29 = iVar29 + 1;
        puVar15[0x2b] = 0;
        puVar15 = puVar25 + iVar29;
      } while (iVar29 < 5);
      iVar29 = 0;
      puVar15 = puVar25;
      do {
        puVar15[0x30] = 0xff;
        iVar29 = iVar29 + 1;
        puVar15[0x34] = 0xff;
        puVar15 = puVar25 + iVar29;
      } while (iVar29 < 3);
      iVar28 = iVar28 + 1;
      puVar25 = puVar25 + 0x38;
    } while (iVar28 < 2);
    local_2a8 = *param_1;
    uStack_2a7 = param_1[1];
    local_2a6 = FUN_0891bdb8(param_1);
    uStack_2a5 = param_1[0x46];
    local_4c = (int *)(param_1 + 0x48);
    local_54 = param_1 + 0x2a50;
    iVar28 = 0;
    puVar25 = auStack_2a4;
    puVar15 = param_1 + 0x2a07;
    local_58 = param_1 + 0x2a04;
    local_50 = param_1;
    do {
      piVar11 = local_4c;
      uVar12 = local_58[1];
      FUN_08935e30(puVar25,local_4c + 1);
      puVar25[0x1a] = uVar12;
      puVar25[0x1b] = (char)*piVar11;
      if (0 < *piVar11) {
        piVar26 = piVar11 + 8;
        iVar29 = 0;
        puVar23 = local_50;
        do {
          uVar12 = FUN_0891e8a4(param_1,iVar28,iVar29);
          puVar25[iVar29 + 0x21] = uVar12;
          if ((param_1[3] & 1) != 0) {
            puVar25[iVar29 + 0x26] = (char)*(undefined2 *)((int)piVar26 + 2);
          }
          iVar17 = iVar29 + 1;
          puVar25[iVar29 + 0x2b] = puVar23[0x27ea];
          piVar26 = piVar26 + 0xba;
          puVar23 = puVar23 + 0x14;
          iVar29 = iVar17;
        } while (iVar17 < *piVar11);
      }
      iVar29 = 0;
      do {
        puVar25[iVar29 + 0x1c] = puVar15[iVar29];
        puVar23 = local_54;
        iVar29 = iVar29 + 1;
      } while (iVar29 < 5);
      puVar25[0x33] = local_54[0xe];
      iVar29 = 0;
      puVar25[0x37] = puVar23[0x12];
      if ('\0' < (char)puVar25[0x33]) {
        do {
          puVar25[iVar29 + 0x30] = puVar23[iVar29 + 0xb];
          iVar29 = iVar29 + 1;
        } while (iVar29 < (char)puVar25[0x33]);
      }
      iVar29 = 0;
      if ('\0' < (char)puVar25[0x37]) {
        do {
          puVar25[iVar29 + 0x34] = puVar23[iVar29 + 0xf];
          iVar29 = iVar29 + 1;
        } while (iVar29 < (char)puVar25[0x37]);
      }
      puVar30 = local_30;
      local_4c = local_4c + 0x3aa;
      local_58 = local_58 + 0xd;
      local_50 = local_50 + 0x68;
      iVar28 = iVar28 + 1;
      puVar25 = puVar25 + 0x38;
      puVar15 = puVar15 + 0xd;
      local_54 = local_54 + 0x13;
    } while (iVar28 < 2);
    iVar28 = 0;
    iVar29 = 0x1d;
    do {
      uVar9 = *(undefined2 *)(auStack_2a4 + iVar28 + -2);
      *(undefined2 *)((int)local_30 + iVar28 + 10000) = *(undefined2 *)(&local_2a8 + iVar28);
      *(undefined2 *)((int)local_30 + iVar28 + 0x2712) = uVar9;
      iVar29 = iVar29 + -1;
      iVar28 = iVar28 + 4;
    } while (iVar29 != 0);
    FUN_0891a1a0(&local_234);
    local_234 = *(undefined4 *)(param_1 + 0x2770);
    local_230 = *(undefined4 *)(param_1 + 0x2774);
    local_22c = *(undefined4 *)(param_1 + 0x2778);
    local_228 = *(undefined4 *)(param_1 + 0x277c);
    local_224 = *(undefined4 *)(param_1 + 0x2780);
    local_220 = *(undefined4 *)(param_1 + 0x2784);
    local_21c = *(undefined4 *)(param_1 + 0x2788);
    local_218 = *(undefined4 *)(param_1 + 0x278c);
    local_214 = *(undefined4 *)(param_1 + 0x2790);
    puVar30[0x9ef] = local_234;
    puVar30[0x9f0] = local_230;
    puVar30[0x9f1] = local_22c;
    puVar30[0x9f2] = local_228;
    puVar30[0x9f3] = local_224;
    puVar30[0x9f4] = local_220;
    puVar30[0x9f5] = local_21c;
    puVar30[0x9f6] = local_218;
    puVar30[0x9f7] = local_214;
    FUN_0891a1f4(&local_210);
    local_210 = *(undefined4 *)(param_1 + 0x2794);
    local_20c = *(undefined4 *)(param_1 + 0x2798);
    puVar30[0x9f8] = local_210;
    puVar30[0x9f9] = local_20c;
    FUN_0891a254(local_208);
    iVar28 = 0;
    iVar29 = 0xb;
    do {
      uVar9 = *(undefined2 *)((int)(param_1 + iVar28 + 0x27b4) + 2);
      *(undefined2 *)((int)local_208 + iVar28) = *(undefined2 *)(param_1 + iVar28 + 0x27b4);
      *(undefined2 *)((int)local_208 + iVar28 + 2) = uVar9;
      puVar30 = local_30;
      iVar29 = iVar29 + -1;
      iVar28 = iVar28 + 4;
    } while (iVar29 != 0);
    iVar28 = 0;
    iVar29 = 0xb;
    do {
      uVar9 = *(undefined2 *)((int)local_208 + iVar28 + 2);
      *(undefined2 *)((int)local_30 + iVar28 + 0x2790) = *(undefined2 *)((int)local_208 + iVar28);
      *(undefined2 *)((int)local_30 + iVar28 + 0x2792) = uVar9;
      iVar29 = iVar29 + -1;
      iVar28 = iVar28 + 4;
    } while (iVar29 != 0);
    iVar28 = 0;
    do {
      *(undefined2 *)((int)ppuVar16 + 0x1144) = 0;
      puVar14 = local_30;
      iVar28 = iVar28 + 1;
      ppuVar16 = (undefined1 **)((int)ppuVar16 + 2);
    } while (iVar28 < 2);
    iVar28 = 0;
    puVar27 = local_30;
    do {
      iVar29 = FUN_088470b8((int)*(short *)((int)puVar27 + 0xf3a));
      if (((iVar29 != 0) && (local_1d8 = puVar30[0x96a], (*(byte *)(iVar29 + 8) & 0x10) != 0)) &&
         ((99 < *(byte *)((int)puVar27 + 1) &&
          (local_1d8 = local_1d8 * 0x343fd + 0x269ec3, (local_1d8 >> 0x10 & 0x7fffU) % 100 < 10))))
      {
        *(ushort *)((int)ppuVar24 + 0x1144) = *(ushort *)((int)ppuVar24 + 0x1144) | 1;
      }
      iVar28 = iVar28 + 1;
      puVar27 = puVar27 + 0x418;
      ppuVar24 = (undefined1 **)((int)ppuVar24 + 2);
    } while (iVar28 < 2);
    *(ushort *)(puVar14 + 0x9fa) = local_1dc[0];
    *(ushort *)((int)puVar14 + 0x27ea) = local_1dc[1];
  }
  else {
    local_1d4 = local_418;
    local_1d0 = local_414;
    if (local_418 < local_414) {
      local_418 = local_414;
    }
    iVar28 = 0;
    iVar29 = 0x2d;
    do {
      uVar19 = *(undefined4 *)((int)puVar14 + iVar28 + 0x25ac);
      *(undefined4 *)((int)local_1cc + iVar28) = *(undefined4 *)((int)puVar14 + iVar28 + 0x25a8);
      *(undefined4 *)((int)local_1cc + iVar28 + 4) = uVar19;
      iVar29 = iVar29 + -1;
      iVar28 = iVar28 + 8;
    } while (iVar29 != 0);
    local_1cc[0] = *(uint *)(param_1 + local_418 * 0x168 + 0x1d9c);
    if ((int)local_1cc[0] < 0) {
      local_1cc[0] = sceKernelGetSystemTimeLow();
      local_1cc[0] = local_1cc[0] & 0x7fffffff;
    }
    iVar29 = 0;
    iVar28 = 0x2d;
    do {
      uVar19 = *(undefined4 *)((int)local_1cc + iVar29 + 4);
      *(undefined4 *)((int)local_30 + iVar29 + 0x25a8) = *(undefined4 *)((int)local_1cc + iVar29);
      *(undefined4 *)((int)local_30 + iVar29 + 0x25ac) = uVar19;
      iVar28 = iVar28 + -1;
      iVar29 = iVar29 + 8;
    } while (iVar28 != 0);
  }
  return;
}

