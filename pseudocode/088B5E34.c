/* Entry 0x088B5E34 | file offset 0x000B2E0C | FUN_088b5e34 | bytes 1892 */

void FUN_088b5e34(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 char param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int local_15c0;
  undefined1 auStack_15bc [162];
  undefined1 auStack_151a [1729];
  char local_e59;
  int local_e54 [771];
  int local_248 [128];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  uint local_44;
  int local_40;
  char local_3c;
  undefined4 local_38;
  int local_34;
  
  local_3c = param_6;
  local_38 = param_1;
  iVar2 = FUN_088b4744(param_1,param_3,param_5);
  local_15c0 = sceKernelGetSystemTimeLow();
  iVar7 = param_2 + *(char *)(param_2 + 0x763) * 0xc6;
  *(char *)(param_2 + 0x765) = (char)*(undefined2 *)(iVar2 + 4);
  FUN_088b7480(iVar7);
  local_44 = param_4;
  local_34 = 0;
  local_40 = iVar7;
  iVar7 = local_40;
  iVar11 = local_34;
  if (iVar2 != 0) {
    iVar7 = 0;
    iVar11 = *(int *)(DAT_089d7320 + 0xc);
    iVar10 = 0;
    if (0 < iVar11) {
      iVar3 = 0;
      do {
        psVar9 = (short *)(DAT_089d7328 + (iVar7 + iVar3) * 4);
        if (((*(uint *)(psVar9 + 4) & 1 << (local_44 & 0x1f)) != 0) &&
           ((((psVar9[2] == -1 || (psVar9[2] == param_5)) &&
             (local_15c0 = local_15c0 * 0x343fd + 0x269ec3,
             (int)((local_15c0 >> 0x10 & 0x7fffU) % 100) < (int)psVar9[1])) &&
            (iVar3 = FUN_088bcb08((int)*psVar9), iVar3 != 0)))) {
          iVar5 = 0;
          bVar1 = true;
          iVar6 = 0;
          do {
            if ((*(short *)(iVar3 + 4 + iVar5 * 2) != -1) && (iVar4 = FUN_088b29d8(), iVar4 != 0)) {
              if (((int)*(char *)(iVar4 + 0x14) < (int)*(short *)(iVar2 + 6)) ||
                 ((int)*(short *)(iVar2 + 8) < (int)*(char *)(iVar4 + 0x14))) {
                bVar1 = false;
                break;
              }
              iVar6 = iVar6 + 1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 10);
          if (*(short *)(iVar2 + 4) < iVar6) {
            bVar1 = false;
          }
          if (bVar1) {
            FUN_088b7e30(auStack_15bc);
            FUN_088bc648(iVar3,auStack_15bc);
            FUN_08935524(local_40 + 0xa2,auStack_151a + local_e59 * 0xc6,0x14);
            local_34 = iVar6;
            iVar10 = iVar6;
            break;
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar7 * 2;
      } while (iVar7 < iVar11);
    }
    iVar7 = local_40;
    iVar11 = local_34;
    if (0 < *(short *)(iVar2 + 4) - iVar10) {
      psVar9 = (short *)(DAT_089d732c + local_44 * 4);
      iVar10 = *(short *)(iVar2 + 4) - iVar10;
      local_e54[0] = (iVar10 * *psVar9 + 0x32) / 100;
      if (local_e54[0] < 1) {
        local_e54[0] = 1;
      }
      if (iVar10 < local_e54[0]) {
        local_e54[0] = iVar10;
      }
      local_e54[1] = 100 - *psVar9;
      local_e54[1] = ((iVar10 - local_e54[0]) * (int)psVar9[1] +
                     ((-(int)*psVar9 - (local_e54[1] >> 0x1f)) + 100 >> 1)) / local_e54[1];
      local_e54[2] = (iVar10 - local_e54[0]) - local_e54[1];
      if (local_e54[2] < 0) {
        local_e54[2] = 0;
      }
      uVar8 = 0;
      do {
        if (0 < local_e54[uVar8]) {
          iVar7 = 0;
          iVar11 = 0;
          if ((int)uVar8 < 1) {
            if (-1 < (int)uVar8) {
              local_48 = 0;
              iVar7 = FUN_088b47e8(local_38,local_e54 + 3,0x80,local_248,0,0,local_3c);
            }
          }
          else if ((int)uVar8 < 2) {
            local_47 = 0;
            iVar7 = FUN_088b49b0(local_38,local_e54 + 3,0x80,local_248,0,0,local_3c);
          }
          else if ((int)uVar8 < 3) {
            local_46 = 0;
            iVar7 = FUN_088b4b7c(local_38,local_e54 + 3,0x80,local_248,0,0,local_3c);
          }
          if ((iVar7 != 0) && (iVar2 = 0, 0 < local_e54[uVar8])) {
            while( true ) {
              local_15c0 = local_15c0 * 0x343fd + 0x269ec3;
              iVar3 = (int)(local_15c0 >> 0x10 & 0x7fffU) % iVar7;
              bVar1 = false;
              iVar5 = local_e54[iVar3 * 6 + 6];
              iVar10 = FUN_088b78bc(local_40,local_e54[iVar3 * 6 + 3]);
              if (iVar10 == 0) break;
              local_e54[iVar3 * 6 + 5] = local_e54[iVar3 * 6 + 5] + 1;
              iVar2 = iVar2 + 1;
              if (iVar5 != -1) {
                iVar10 = 0;
                if (0 < iVar7) {
                  do {
                    if (local_e54[iVar10 * 6 + 6] == iVar5) {
                      local_e54[iVar10 * 6 + 8] = local_e54[iVar10 * 6 + 8] + 1;
                    }
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < iVar7);
                }
                if (local_e54[iVar3 * 6 + 7] <= local_e54[iVar3 * 6 + 8]) {
                  bVar1 = true;
                  local_248[iVar11] = iVar5;
                  iVar11 = iVar11 + 1;
                }
              }
              if (local_e54[iVar3 * 6 + 4] <= local_e54[iVar3 * 6 + 5]) {
                if (iVar3 < iVar7 + -1) {
                  do {
                    local_e54[iVar3 * 6 + 3] = local_e54[iVar3 * 6 + 9];
                    local_e54[iVar3 * 6 + 4] = local_e54[iVar3 * 6 + 10];
                    local_e54[iVar3 * 6 + 5] = local_e54[iVar3 * 6 + 0xb];
                    local_e54[iVar3 * 6 + 6] = local_e54[iVar3 * 6 + 0xc];
                    local_e54[iVar3 * 6 + 7] = local_e54[iVar3 * 6 + 0xd];
                    local_e54[iVar3 * 6 + 8] = local_e54[iVar3 * 6 + 0xe];
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < iVar7 + -1);
                }
                iVar7 = iVar7 + -1;
              }
              if ((bVar1) && (iVar10 = 0, 0 < iVar7)) {
                do {
                  if (local_e54[iVar10 * 6 + 6] == iVar5) {
                    iVar3 = iVar10;
                    if (iVar10 < iVar7 + -1) {
                      do {
                        local_e54[iVar3 * 6 + 3] = local_e54[iVar3 * 6 + 9];
                        local_e54[iVar3 * 6 + 4] = local_e54[iVar3 * 6 + 10];
                        local_e54[iVar3 * 6 + 5] = local_e54[iVar3 * 6 + 0xb];
                        local_e54[iVar3 * 6 + 6] = local_e54[iVar3 * 6 + 0xc];
                        local_e54[iVar3 * 6 + 7] = local_e54[iVar3 * 6 + 0xd];
                        local_e54[iVar3 * 6 + 8] = local_e54[iVar3 * 6 + 0xe];
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < iVar7 + -1);
                    }
                    iVar10 = iVar10 + -1;
                    iVar7 = iVar7 + -1;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar7);
              }
              if ((iVar7 < 1) || (local_e54[uVar8] <= iVar2)) break;
            }
          }
        }
        uVar8 = uVar8 + 1;
        iVar7 = local_40;
        iVar11 = local_34;
      } while (uVar8 < 3);
    }
  }
  for (; iVar11 < 10; iVar11 = iVar11 + 1) {
    local_40 = iVar7;
    if (((*(short *)(iVar7 + iVar11 * 2 + 0xa2) != -1) && (iVar2 = FUN_088b29d8(), iVar2 != 0)) &&
       (((*(byte *)(iVar2 + 0x10) & 1) != 0 ||
        ((local_3c == '\x01' && ((*(byte *)(iVar2 + 0x10) & 2) != 0)))))) {
      *(undefined2 *)(iVar7 + iVar11 * 2 + 0xa2) = 0xffff;
    }
    iVar7 = local_40;
  }
  return;
}

