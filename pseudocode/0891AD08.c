/* Entry 0x0891AD08 | file offset 0x00117CE0 | FUN_0891ad08 | bytes 1816 */

void FUN_0891ad08(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined2 uVar6;
  short sVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  short *psVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  short *psVar18;
  undefined4 *puVar19;
  short *psVar20;
  short *psVar21;
  uint uVar22;
  char *pcVar23;
  int iVar24;
  int *piVar25;
  int local_70;
  int local_6c [4];
  undefined1 *local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  undefined1 *local_3c;
  int *local_38;
  
  *param_2 = 1;
  param_2[1] = *(undefined1 *)(*(int *)(param_1 + 4) + 0x1a8);
  param_2[2] = 3;
  param_2[3] = param_2[3] | 2;
  if (*(char *)(param_1 + 8) == '\x01') {
    param_2[3] = param_2[3] | 4;
  }
  local_5c = param_2;
  local_58 = param_1;
  FUN_08935e30(param_2 + 4,*(int *)(param_1 + 4) + 0x50);
  local_70 = 0;
  local_38 = (int *)(param_2 + 0x48);
  local_6c[3] = 0;
  local_3c = (undefined1 *)&local_70;
  do {
    local_44 = local_6c[3];
    local_6c[0] = *(int *)(local_58 + 4) + 0x8a0;
    local_6c[1] = *(int *)(local_58 + 4) + 0x1700;
    *local_38 = 0;
    local_48 = local_38;
    local_40 = local_6c[3] + 1U & 1;
    local_6c[3] = local_6c[3] + 1U;
    local_6c[2] = -local_40;
    local_4c = 0;
    local_54 = 0;
    local_50 = local_38 + 8;
    do {
      piVar5 = local_50;
      local_54 = local_54 + 1;
      pcVar23 = (char *)(*(int *)(local_3c + 4) + local_4c);
      if (*pcVar23 != '\0') {
        *local_48 = local_54;
        piVar25 = local_50 + 4;
        if (pcVar23[1] == '\x05') {
          if (local_44 == 0) {
            *(undefined2 *)local_50 = 0;
            *(char *)piVar25 = -1;
            *(undefined1 *)((int)local_50 + 0x11) = 0;
            *(undefined1 *)((int)local_50 + 0x12) = 0xff;
            *(undefined1 *)((int)local_50 + 0x13) = 1;
            *(char *)piVar25 = *pcVar23;
          }
          else if (*pcVar23 == '\x17') {
            *(undefined2 *)local_50 = 1;
            *(undefined2 *)piVar25 = 0xffff;
            *(undefined2 *)((int)local_50 + 0x12) = 0xffff;
            *(undefined2 *)(local_50 + 5) = 0xffff;
            cVar1 = pcVar23[4];
            if (cVar1 == '\0') {
              iVar11 = 1;
              uVar22 = local_40;
              if (local_6c[3] < 0) {
                uVar22 = local_6c[2];
              }
              iVar9 = 0;
              iVar24 = 0;
              do {
                pcVar8 = (char *)(local_6c[uVar22] + iVar24);
                if (*pcVar8 != '\0') {
                  if (pcVar8[1] == '\x05') {
                    uVar16 = FUN_088cb164(DAT_089d712c + 0xf58);
                    iVar12 = FUN_088cbad0(uVar16);
                  }
                  else {
                    iVar12 = (int)*(short *)(pcVar8 + 0xc);
                  }
                  if (iVar11 < iVar12) {
                    iVar11 = iVar12;
                  }
                }
                iVar9 = iVar9 + 1;
                iVar24 = iVar24 + 0x2e0;
              } while (iVar9 < 5);
              *(short *)((int)piVar5 + 0x12) = (short)iVar11;
              cVar1 = pcVar23[3];
            }
            else {
              *(short *)((int)local_50 + 0x12) = (short)cVar1;
              cVar1 = pcVar23[3];
            }
            uVar6 = FUN_08929100(cVar1);
            *(undefined2 *)piVar25 = uVar6;
          }
          else {
            *(undefined2 *)local_50 = 5;
            *(char *)piVar25 = -1;
            *(undefined1 *)((int)local_50 + 0x11) = 1;
            *(undefined1 *)((int)local_50 + 0x12) = 0xff;
            *(undefined1 *)((int)local_50 + 0x13) = 0xff;
            *(undefined1 *)(local_50 + 5) = 0xff;
            *(undefined1 *)((int)local_50 + 0x15) = 1;
            *(undefined1 *)((int)local_50 + 0x16) = 0xff;
            *(undefined1 *)((int)local_50 + 0x17) = 0xff;
            *(undefined2 *)(local_50 + 8) = 0xffff;
            *(undefined2 *)((int)local_50 + 0x22) = 0xffff;
            *(undefined2 *)(local_50 + 9) = 0xffff;
            local_50[6] = -1;
            local_50[7] = -1;
            *(undefined2 *)((int)local_50 + 0x26) = 0xffff;
            local_50[10] = 0;
            *(char *)piVar25 = *pcVar23;
            *(char *)(local_50 + 5) = pcVar23[5];
            *(char *)((int)local_50 + 0x15) = pcVar23[4];
            *(char *)((int)local_50 + 0x16) = pcVar23[6];
            *(char *)((int)local_50 + 0x17) = pcVar23[7];
            if (pcVar23[10] != '\0') {
              *(char *)((int)local_50 + 0x11) = pcVar23[10];
            }
          }
        }
        else {
          *(undefined2 *)local_50 = 7;
          iVar11 = 0;
          iVar24 = 0x5b;
          do {
            uVar16 = *(undefined4 *)(pcVar23 + iVar11 + 8 + 4);
            *(undefined4 *)((int)piVar25 + iVar11) = *(undefined4 *)(pcVar23 + iVar11 + 8);
            *(undefined4 *)((char *)((int)piVar25 + iVar11) + 4) = uVar16;
            iVar24 = iVar24 + -1;
            iVar11 = iVar11 + 8;
          } while (iVar24 != 0);
        }
      }
      local_4c = local_4c + 0x2e0;
      local_50 = local_50 + 0xba;
    } while (local_54 < 5);
    if (local_70 < *local_48) {
      local_70 = *local_38;
    }
    local_38 = local_38 + 0x3aa;
    local_3c = local_3c + 4;
  } while (local_6c[3] < 2);
  if (local_5c[1] == '\x01') {
    iVar11 = 0;
    puVar13 = local_5c;
    do {
      *(int *)(puVar13 + 0x48) = local_70;
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 0xea8;
    } while (iVar11 < 2);
  }
  iVar24 = 0;
  iVar11 = 0;
  psVar21 = (short *)(local_5c + 0x1d98);
  do {
    psVar20 = (short *)(*(int *)(local_58 + 4) + 0x1ac + iVar11);
    sVar7 = *psVar20;
    if (sVar7 == -1) {
      sVar7 = FUN_088ad6d8();
    }
    *psVar21 = sVar7;
    sVar7 = psVar20[1];
    if (sVar7 == 4) {
      sVar7 = FUN_08929148();
    }
    psVar21[1] = sVar7;
    psVar21[5] = psVar20[3];
    psVar21[4] = 1;
    psVar21[6] = (short)*(char *)((int)psVar20 + 9);
    psVar21[7] = (short)(char)psVar20[5];
    psVar21[8] = (short)*(char *)((int)psVar20 + 0xd);
    psVar21[9] = (short)(char)psVar20[7];
    if (-1 < psVar20[2]) {
      psVar20 = psVar20 + 8;
      iVar9 = 0;
      iVar12 = 0x2a;
      uVar16 = *(undefined4 *)psVar20;
      psVar15 = psVar20;
      psVar18 = psVar21 + 10;
      do {
        uVar14 = *(undefined4 *)(psVar15 + 2);
        *(undefined4 *)psVar18 = uVar16;
        iVar9 = iVar9 + 8;
        *(undefined4 *)(psVar18 + 2) = uVar14;
        psVar15 = (short *)((int)psVar20 + iVar9);
        iVar12 = iVar12 + -1;
        uVar16 = *(undefined4 *)psVar15;
        psVar18 = (short *)((int)(psVar21 + 10) + iVar9);
      } while (iVar12 != 0);
      *(undefined4 *)psVar18 = uVar16;
    }
    iVar24 = iVar24 + 1;
    iVar11 = iVar11 + 0x164;
    psVar21 = psVar21 + 0xb4;
  } while (iVar24 < 5);
  *(undefined4 *)(local_5c + 0x24a0) = 1;
  *(undefined4 *)(local_5c + 0x24a4) = 0;
  local_5c[0x24a8] = 1;
  iVar11 = 0;
  puVar19 = (undefined4 *)(local_5c + 0x2728);
  puVar13 = local_5c;
  do {
    iVar24 = 0;
    puVar17 = (undefined4 *)(puVar13 + 0x25c0);
    do {
      *puVar17 = 1;
      iVar24 = iVar24 + 1;
      puVar17[1] = iVar24;
      *(bool *)(puVar17 + 2) = iVar11 == 1;
      puVar17 = puVar17 + 9;
    } while (iVar24 < 5);
    *puVar19 = 1;
    puVar19[1] = 6;
    *(bool *)(puVar19 + 2) = iVar11 == 0;
    iVar11 = iVar11 + 1;
    puVar13 = puVar13 + 0xb4;
    puVar19 = puVar19 + 9;
  } while (iVar11 < 2);
  puVar10 = (uint *)(local_5c + 0x279c);
  if (*(char *)(local_58 + 9) == '\x01') {
    *puVar10 = *puVar10 | 2;
  }
  else if (*(char *)(*(int *)(local_58 + 4) + 0xe) == '\x01') {
    *puVar10 = *puVar10 | 1;
    iVar11 = *(int *)(local_58 + 4);
    if (*(char *)(iVar11 + 0x198) == '\0') {
      if (*(char *)(iVar11 + 0x188) == '\0') {
        *puVar10 = *puVar10 & 0xfffffffe;
      }
      else {
        uVar2 = *(undefined1 *)(iVar11 + 0x189);
        uVar3 = *(undefined1 *)(iVar11 + 0x18a);
        local_5c[0x27a0] = *(char *)(iVar11 + 0x188);
        uVar4 = *(undefined1 *)(iVar11 + 0x18b);
        local_5c[0x27a1] = uVar2;
        uVar2 = *(undefined1 *)(iVar11 + 0x18c);
        local_5c[0x27a2] = uVar3;
        uVar3 = *(undefined1 *)(iVar11 + 0x18d);
        local_5c[0x27a3] = uVar4;
        uVar4 = *(undefined1 *)(iVar11 + 0x18e);
        local_5c[0x27a4] = uVar2;
        uVar2 = *(undefined1 *)(iVar11 + 399);
        local_5c[0x27a5] = uVar3;
        uVar3 = *(undefined1 *)(iVar11 + 400);
        local_5c[0x27a6] = uVar4;
        uVar4 = *(undefined1 *)(iVar11 + 0x191);
        local_5c[0x27a7] = uVar2;
        uVar2 = *(undefined1 *)(iVar11 + 0x192);
        local_5c[0x27a8] = uVar3;
        uVar3 = *(undefined1 *)(iVar11 + 0x193);
        local_5c[0x27a9] = uVar4;
        uVar4 = *(undefined1 *)(iVar11 + 0x194);
        local_5c[0x27aa] = uVar2;
        uVar2 = *(undefined1 *)(iVar11 + 0x195);
        local_5c[0x27ab] = uVar3;
        uVar3 = *(undefined1 *)(iVar11 + 0x196);
        local_5c[0x27ac] = uVar4;
        uVar4 = *(undefined1 *)(iVar11 + 0x197);
        local_5c[0x27ad] = uVar2;
        local_5c[0x27ae] = uVar3;
        local_5c[0x27af] = uVar4;
      }
    }
    else {
      uVar2 = *(undefined1 *)(iVar11 + 0x199);
      uVar3 = *(undefined1 *)(iVar11 + 0x19a);
      local_5c[0x27a0] = *(char *)(iVar11 + 0x198);
      uVar4 = *(undefined1 *)(iVar11 + 0x19b);
      local_5c[0x27a1] = uVar2;
      uVar2 = *(undefined1 *)(iVar11 + 0x19c);
      local_5c[0x27a2] = uVar3;
      uVar3 = *(undefined1 *)(iVar11 + 0x19d);
      local_5c[0x27a3] = uVar4;
      uVar4 = *(undefined1 *)(iVar11 + 0x19e);
      local_5c[0x27a4] = uVar2;
      uVar2 = *(undefined1 *)(iVar11 + 0x19f);
      local_5c[0x27a5] = uVar3;
      uVar3 = *(undefined1 *)(iVar11 + 0x1a0);
      local_5c[0x27a6] = uVar4;
      uVar4 = *(undefined1 *)(iVar11 + 0x1a1);
      local_5c[0x27a7] = uVar2;
      uVar2 = *(undefined1 *)(iVar11 + 0x1a2);
      local_5c[0x27a8] = uVar3;
      uVar3 = *(undefined1 *)(iVar11 + 0x1a3);
      local_5c[0x27a9] = uVar4;
      uVar4 = *(undefined1 *)(iVar11 + 0x1a4);
      local_5c[0x27aa] = uVar2;
      uVar2 = *(undefined1 *)(iVar11 + 0x1a5);
      local_5c[0x27ab] = uVar3;
      uVar3 = *(undefined1 *)(iVar11 + 0x1a6);
      local_5c[0x27ac] = uVar4;
      uVar4 = *(undefined1 *)(iVar11 + 0x1a7);
      local_5c[0x27ad] = uVar2;
      local_5c[0x27ae] = uVar3;
      local_5c[0x27af] = uVar4;
    }
  }
  return;
}

