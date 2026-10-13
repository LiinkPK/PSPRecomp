/* Entry 0x088BEB84 | file offset 0x000BBB5C | FUN_088beb84 | bytes 1116 */

void FUN_088beb84(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  short sVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  undefined1 local_8f0 [4];
  undefined4 local_8ec [360];
  undefined1 auStack_34c [384];
  undefined1 auStack_1cc [384];
  int *local_4c;
  int local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  
  puVar13 = local_8f0;
  iVar5 = 0;
  piVar8 = param_1;
  do {
    piVar8[2] = 0;
    iVar5 = iVar5 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar5 < 0xc);
  local_4c = param_3;
  local_38 = param_2;
  local_3c = (**(code **)(*param_3 + 0xc))
                       ((int)param_3 + (int)*(short *)(*param_3 + 8),local_8ec,0x168);
  if (local_3c != 0) {
    local_8f0[0] = 0;
    FUN_088bdc2c(local_8ec,local_8ec + local_3c,0);
    param_1[1] = local_3c;
    iVar2 = FUN_088bd92c(local_3c << 3);
    uVar1 = local_38;
    iVar5 = local_3c;
    piVar8 = local_4c;
    *param_1 = iVar2;
    param_1[0xe] = 0;
    iVar2 = 0;
    if (0 < local_3c) {
      do {
        uVar14 = *(undefined4 *)(puVar13 + 4);
        iVar3 = FUN_088bfeec(uVar14);
        sVar9 = *(short *)(iVar3 + 2);
        if (sVar9 < 2) {
          if (-1 < sVar9) {
            param_1[0xe] = param_1[0xe] + 1;
          }
        }
        else if (sVar9 < 3) {
          iVar3 = *piVar8;
          iVar3 = (**(code **)(iVar3 + 0x14))
                            ((int)piVar8 + (int)*(short *)(iVar3 + 0x10),auStack_34c,0x20,uVar14,
                             uVar1);
          param_1[0xe] = param_1[0xe] + iVar3;
        }
        iVar2 = iVar2 + 1;
        puVar13 = puVar13 + 4;
      } while (iVar2 < iVar5);
    }
    puVar4 = (undefined2 *)FUN_088bd92c(param_1[0xe] << 4);
    param_1[0xf] = (int)puVar4;
    local_48 = 0;
    if (0 < local_3c) {
      local_44 = 0;
      local_40 = local_8f0;
      do {
        uVar17 = *(uint *)(local_40 + 4);
        iVar5 = (**(code **)(*local_4c + 0x14))
                          ((int)local_4c + (int)*(short *)(*local_4c + 0x10),auStack_1cc,0x20,uVar17
                           ,local_38);
        iVar2 = FUN_088bfeec(uVar17);
        puVar16 = (undefined2 *)(*param_1 + local_44);
        *puVar16 = (short)uVar17;
        sVar9 = *(short *)(iVar2 + 2);
        if (sVar9 < 2) {
          if (-1 < sVar9) {
            puVar16[1] = 1;
            puVar15 = (undefined2 *)0x0;
            if (puVar4 != (undefined2 *)0x0) {
              FUN_088bd398(puVar4);
              puVar15 = puVar4;
            }
            *(undefined2 **)(puVar16 + 2) = puVar15;
            puVar4 = puVar4 + 8;
            if (*(short *)(iVar2 + 2) == 0) {
              *puVar15 = 1;
              iVar2 = *(int *)(puVar16 + 2);
            }
            else {
              *puVar15 = (short)iVar5;
              iVar2 = *(int *)(puVar16 + 2);
            }
            iVar6 = 0;
            iVar3 = 0;
            if (0 < iVar5) {
              puVar13 = auStack_1cc;
              do {
                if (iVar3 < *(short *)(puVar13 + 2)) {
                  iVar3 = (int)*(short *)(puVar13 + 2);
                }
                iVar6 = iVar6 + 1;
                puVar13 = puVar13 + 0xc;
              } while (iVar6 < iVar5);
            }
            iVar6 = 0;
            *(short *)(iVar2 + 2) = (short)iVar3;
            if (0 < iVar3) {
              iVar2 = 0;
              do {
                iVar11 = 0;
                sVar9 = 0;
                if (0 < iVar5) {
                  puVar13 = auStack_1cc;
                  sVar9 = 0;
                  do {
                    if (iVar6 < *(short *)(puVar13 + 2)) {
                      sVar9 = sVar9 + *(short *)(puVar13 + iVar2 + 4);
                    }
                    iVar11 = iVar11 + 1;
                    puVar13 = puVar13 + 0xc;
                  } while (iVar11 < iVar5);
                }
                *(short *)(*(int *)(puVar16 + 2) + iVar2 + 4) = sVar9;
                iVar6 = iVar6 + 1;
                iVar2 = iVar2 + 2;
              } while (iVar6 < iVar3);
            }
          }
        }
        else if (sVar9 < 3) {
          iVar2 = 0;
          puVar16[1] = (short)iVar5;
          puVar15 = (undefined2 *)0x0;
          puVar13 = local_8f0;
          if (0 < iVar5) {
            do {
              puVar7 = (undefined2 *)0x0;
              if (puVar4 != (undefined2 *)0x0) {
                FUN_088bd398(puVar4);
                puVar7 = puVar4;
              }
              puVar4 = puVar4 + 8;
              if (iVar2 == 0) {
                *(undefined2 **)(puVar16 + 2) = puVar7;
              }
              *puVar7 = 1;
              iVar3 = 0;
              puVar7[1] = *(undefined2 *)(puVar13 + 0x726);
              puVar10 = puVar13;
              puVar12 = puVar7;
              if (0 < *(short *)(puVar13 + 0x726)) {
                do {
                  iVar3 = iVar3 + 1;
                  puVar12[2] = *(undefined2 *)(puVar10 + 0x728);
                  puVar10 = puVar10 + 2;
                  puVar12 = puVar12 + 1;
                } while (iVar3 < *(short *)(puVar13 + 0x726));
              }
              if (puVar15 != (undefined2 *)0x0) {
                *(undefined2 **)(puVar15 + 6) = puVar7;
              }
              iVar2 = iVar2 + 1;
              puVar13 = puVar13 + 0xc;
              puVar15 = puVar7;
            } while (iVar2 < iVar5);
          }
        }
        param_1[(uVar17 >> 5) + 2] = param_1[(uVar17 >> 5) + 2] | 1 << (uVar17 & 0x1f);
        local_48 = local_48 + 1;
        local_40 = local_40 + 4;
        local_44 = local_44 + 8;
      } while (local_48 < local_3c);
    }
  }
  return;
}

