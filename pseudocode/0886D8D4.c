/* Entry 0x0886D8D4 | file offset 0x0006A8AC | FUN_0886d8d4 | bytes 1772 */

void FUN_0886d8d4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_470 [1024];
  int local_70;
  ushort *local_6c;
  int local_68;
  ushort *local_64;
  char local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  undefined *local_4c;
  int local_48;
  int local_44;
  int local_40;
  ushort *local_3c;
  undefined4 local_38;
  
  local_60 = '\0';
  local_50 = param_1;
  local_38 = param_3;
  iVar3 = FUN_089404a8(param_3,0xf);
  local_44 = DAT_089d5f94;
  if (0 < iVar3) {
    param_2[1] = iVar3;
    local_40 = iVar3;
    iVar4 = FUN_0885c6cc(*(undefined4 *)(local_44 + 4),iVar3 * 0x60,0,0,1,0);
    *param_2 = iVar4;
    local_48 = 0;
    if (0 < iVar3) {
      local_54 = "target:";
      local_58 = "source:";
      local_5c = "default:";
      local_4c = &DAT_089c9598;
      iVar3 = 0;
      local_3c = (ushort *)&DAT_089c955c;
      do {
        puVar5 = (ushort *)FUN_08940528(local_38,0xf,local_48);
        puVar8 = puVar5 + 8;
        if ((*puVar5 & 0x8000) != 0) {
          puVar8 = local_3c;
        }
        iVar4 = FUN_089404a8(puVar5,0xf1);
        puVar12 = (undefined1 *)(*param_2 + iVar3);
        *puVar12 = 0;
        *(undefined2 *)(puVar12 + 0x28) = 0;
        *(undefined2 *)(puVar12 + 0x2a) = 0;
        *(undefined2 *)(puVar12 + 0x2c) = 0;
        *(undefined2 *)(puVar12 + 0x2e) = 0;
        *(undefined4 *)(puVar12 + 0x3c) = 0xffffffff;
        *(undefined4 *)(puVar12 + 0x40) = 0xffffffff;
        *(undefined2 *)(puVar12 + 0x30) = 0xffff;
        *(undefined2 *)(puVar12 + 0x32) = 0xffff;
        *(undefined4 *)(puVar12 + 0x34) = 0;
        *(undefined4 *)(puVar12 + 0x38) = 0;
        *(undefined2 *)(puVar12 + 0x46) = 0;
        *(undefined2 *)(puVar12 + 0x48) = 0;
        *(undefined2 *)(puVar12 + 0x4a) = 0;
        *(undefined2 *)(puVar12 + 0x4c) = 0;
        *(undefined2 *)(puVar12 + 0x4e) = 0;
        *(undefined4 *)(puVar12 + 0x54) = 0;
        *(undefined4 *)(puVar12 + 0x58) = 0;
        *(undefined4 *)(puVar12 + 0x5c) = 0;
        *(undefined4 *)(puVar12 + 0x24) = 0;
        *(undefined2 *)(puVar12 + 0x50) = 0;
        FUN_089359a4(auStack_470,puVar8);
        puVar2 = local_4c;
        iVar6 = FUN_08935c7c(auStack_470,local_4c);
        if (iVar6 != 0) {
          local_60 = FUN_08934924();
        }
        uVar7 = FUN_08935c7c(0,puVar2);
        FUN_089359a4(*param_2 + iVar3,uVar7);
        *(int *)(*param_2 + iVar3 + 0x20) = (int)local_60;
        local_6c = (ushort *)0x0;
        iVar6 = 0;
        iVar18 = 0;
        iVar16 = 0;
        if (0 < iVar4) {
          do {
            puVar8 = (ushort *)FUN_08940528(puVar5,0xf1,iVar6);
            if ((*puVar8 & 0x8000) == 0) {
              puVar15 = (ushort *)((int)puVar8 + (uint)puVar8[1]);
            }
            else {
              puVar15 = puVar8 + 4;
            }
            iVar9 = FUN_08935b50(puVar15,local_54,7);
            if ((iVar9 != 0) && (iVar9 = FUN_08935b50(puVar15,local_58,7), iVar9 != 0)) {
              iVar9 = FUN_08935b50(puVar15,local_5c,8);
              if (iVar9 == 0) {
                local_6c = puVar15 + 4;
              }
              else {
                if ((*puVar8 & 0x8000) == 0) {
                  puVar15 = (ushort *)((int)puVar8 + (uint)puVar8[1]);
                }
                else {
                  puVar15 = puVar8 + 4;
                }
                if ((*puVar8 & 0x8000) == 0) {
                  iVar9 = *(int *)(puVar8 + 6) - (uint)puVar8[1];
                }
                else {
                  iVar9 = *(int *)(puVar8 + 2) + -8;
                }
                iVar10 = FUN_089359e8(puVar15);
                uVar13 = iVar10 + 1;
                uVar14 = uVar13 & 3;
                if ((int)uVar13 < 0) {
                  uVar14 = -(-uVar13 & 3);
                }
                if (uVar14 != 0) {
                  uVar13 = iVar10 + 4;
                }
                iVar18 = iVar18 + 1;
                iVar16 = iVar16 + (iVar9 + ((int)uVar13 >> 2) * -4 >> 2);
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        *(short *)(*param_2 + iVar3 + 0x48) = (short)iVar18;
        local_68 = iVar4;
        local_64 = puVar5;
        uVar7 = FUN_0885c6cc(*(undefined4 *)(local_44 + 4),iVar18 << 2,0,0,1,0);
        *(undefined4 *)(*param_2 + iVar3 + 0x54) = uVar7;
        uVar7 = FUN_0885c6cc(*(undefined4 *)(local_44 + 4),iVar18 << 2,0,0,1,0);
        *(undefined4 *)(*param_2 + iVar3 + 0x58) = uVar7;
        uVar7 = FUN_0885c6cc(*(undefined4 *)(local_44 + 4),iVar16 << 2,0,0,1,0);
        iVar6 = 0;
        *(undefined4 *)(*param_2 + iVar3 + 0x5c) = uVar7;
        local_70 = 0;
        iVar4 = 0;
        if (0 < local_68) {
          iVar16 = 0;
          do {
            puVar8 = (ushort *)FUN_08940528(local_64,0xf1,iVar6);
            uVar1 = *puVar8;
            if ((uVar1 & 0x8000) == 0) {
              puVar5 = (ushort *)((int)puVar8 + (uint)puVar8[1]);
            }
            else {
              puVar5 = puVar8 + 4;
            }
            if ((uVar1 & 0x8000) == 0) {
              puVar15 = (ushort *)((int)puVar8 + (uint)puVar8[1]);
            }
            else {
              puVar15 = puVar8 + 4;
            }
            if ((uVar1 & 0x8000) == 0) {
              iVar18 = *(int *)(puVar8 + 6) - (uint)puVar8[1];
            }
            else {
              iVar18 = *(int *)(puVar8 + 2) + -8;
            }
            iVar9 = FUN_08935b50(puVar5,local_54,7);
            if (iVar9 == 0) {
              iVar18 = FUN_089359e8(puVar5);
              uVar13 = iVar18 + 1;
              uVar14 = uVar13 & 3;
              if ((int)uVar13 < 0) {
                uVar14 = -(-uVar13 & 3);
              }
              if (uVar14 != 0) {
                uVar13 = iVar18 + 4;
              }
              puVar15 = puVar15 + ((int)uVar13 >> 2) * 2;
              *(short *)(*param_2 + iVar3 + 0x28) = (short)*(undefined4 *)puVar15;
              *(short *)(*param_2 + iVar3 + 0x2a) = (short)*(undefined4 *)(puVar15 + 2);
              *(short *)(*param_2 + iVar3 + 0x2c) = (short)*(undefined4 *)(puVar15 + 4);
              *(short *)(*param_2 + iVar3 + 0x2e) = (short)*(undefined4 *)(puVar15 + 6);
              uVar7 = FUN_08869f4c(local_50,param_2,(int)puVar5 + 7);
              *(undefined4 *)(*param_2 + iVar3 + 0x38) = uVar7;
            }
            else {
              iVar9 = FUN_08935b50(puVar5,local_58,7);
              if (iVar9 == 0) {
                uVar7 = FUN_08869f4c(local_50,param_2,(int)puVar5 + 7);
                *(undefined4 *)(*param_2 + iVar3 + 0x34) = uVar7;
              }
              else {
                iVar9 = FUN_08935b50(puVar5,local_5c,8);
                if (iVar9 != 0) {
                  iVar9 = FUN_089359e8(puVar5);
                  uVar13 = iVar9 + 1;
                  uVar14 = uVar13 & 3;
                  if ((int)uVar13 < 0) {
                    uVar14 = -(-uVar13 & 3);
                  }
                  if (uVar14 != 0) {
                    uVar13 = iVar9 + 4;
                  }
                  iVar9 = iVar18 + ((int)uVar13 >> 2) * -4 >> 2;
                  FUN_089359a4(auStack_470,puVar5);
                  iVar18 = FUN_08935c7c(auStack_470,local_4c);
                  if (iVar18 != 0) {
                    local_60 = FUN_08934924(iVar18);
                  }
                  iVar11 = FUN_089359e8(iVar18);
                  iVar17 = local_70 * 4;
                  FUN_08935524(*(int *)(*param_2 + iVar3 + 0x5c) + iVar17,
                               puVar15 + ((int)uVar13 >> 2) * 2,iVar9 << 2);
                  iVar10 = local_70;
                  *(int *)(*(int *)(*param_2 + iVar3 + 0x58) + iVar16) =
                       *(int *)(*param_2 + iVar3 + 0x5c) + iVar17;
                  *(int *)(*(int *)(*param_2 + iVar3 + 0x54) + iVar16) = (int)local_60;
                  if ((local_6c != (ushort *)0x0) &&
                     (iVar18 = FUN_08935970(iVar18 + iVar11 + 1,local_6c), iVar18 == 0)) {
                    *(short *)(*param_2 + iVar3 + 0x50) = (short)iVar4;
                    *(short *)(*param_2 + iVar3 + 0x4a) = (short)iVar4;
                    *(int *)(*param_2 + iVar3 + 0x24) = iVar4;
                  }
                  local_70 = iVar10 + iVar9;
                  iVar4 = iVar4 + 1;
                  iVar16 = iVar16 + 4;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_68);
        }
        local_48 = local_48 + 1;
        iVar3 = iVar3 + 0x60;
      } while (local_48 < local_40);
    }
  }
  return;
}

