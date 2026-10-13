/* Entry 0x088B5670 | file offset 0x000B2648 | FUN_088b5670 | bytes 1988 */

/* WARNING: Type propagation algorithm not settling */

void FUN_088b5670(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int local_780;
  int local_77c [152];
  int local_51c [150];
  int local_2c4 [3];
  undefined4 local_2b8;
  int local_2b4 [3];
  undefined4 local_2a8;
  undefined1 local_2a4 [4];
  int local_2a0 [150];
  int local_48;
  int local_44;
  int local_40;
  char local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar2 = FUN_088b6640(param_6);
  uVar3 = FUN_088c0a20(param_6);
  local_40 = Stat_CP_from_growth_record(uVar3,param_8);
  iVar11 = 0;
  uVar13 = 1;
  local_3c = '\0';
  local_780 = sceKernelGetSystemTimeLow();
  local_30 = param_1;
  if (param_6 == 0x1f) {
    uVar13 = 3;
    local_3c = '\x01';
  }
  else if (param_6 == 0x16) {
    uVar13 = 2;
  }
  else if (param_6 == 7) {
    uVar13 = 2;
    local_3c = '\x01';
  }
  if ((iVar2 != 0) && (iVar12 = 0, local_34 = param_2, 0 < param_4)) {
    do {
      puVar10 = (undefined4 *)(param_3 + iVar12 * 8);
      iVar6 = 0;
      if (0 < *(short *)(iVar2 + 2)) {
LAB_088b5770:
        if (((int)*(short *)*puVar10 | 0x10000000U) != *(uint *)(*(int *)(iVar2 + 4) + iVar6 * 4))
        goto LAB_088b5934;
        psVar8 = (short *)*puVar10;
        if ((psVar8 != (short *)0x0) &&
           (local_48 = (int)*(short *)(puVar10 + 1), local_38 = param_4,
           *(short *)(puVar10 + 1) + iVar11 <= local_40)) {
          bVar1 = false;
          if (((char)psVar8[0xb] == '\0') || ((char)psVar8[0xb] == '\x01')) {
            iVar6 = 0;
            if ((local_3c == '\x01') && ((char)psVar8[0xb] == '\x01')) {
              local_44 = iVar2;
              iVar6 = 1;
            }
            else {
              uVar7 = 0;
              if (uVar13 != 0) {
                do {
                  if (((uint)(ushort)psVar8[0xf] & 1 << (uVar7 & 0x1f)) != 0) {
                    iVar6 = iVar6 + 1;
                  }
                  uVar7 = uVar7 + 1;
                } while ((int)uVar7 < (int)uVar13);
              }
              local_44 = iVar2;
            }
            uVar7 = 0;
            local_44 = iVar2;
            if (uVar13 != 0) {
              do {
                if (((uint)(ushort)psVar8[0xf] & 1 << (uVar7 & 0x1f)) != 0) {
                  local_780 = local_780 * 0x343fd + 0x269ec3;
                  if (((int)(local_780 >> 0x10 & 0x7fffU) % iVar6 == 0) &&
                     (iVar2 = FUN_088b7790(local_34,uVar7,(int)*psVar8), iVar2 == 1)) {
                    bVar1 = true;
                    iVar2 = local_44;
                    break;
                  }
                  iVar6 = iVar6 + -1;
                }
                uVar7 = uVar7 + 1;
                iVar2 = local_44;
              } while ((int)uVar7 < (int)uVar13);
            }
          }
          else {
            iVar6 = FUN_088b7820(local_34,(int)*psVar8);
            if (iVar6 == 1) {
              bVar1 = true;
            }
          }
          param_4 = local_38;
          if (bVar1) {
            iVar11 = local_48 + iVar11;
            *(undefined1 *)((int)puVar10 + 7) = 1;
          }
        }
      }
LAB_088b594c:
      iVar12 = iVar12 + 1;
      param_2 = local_34;
    } while (iVar12 < param_4);
  }
  iVar2 = 0;
  if (uVar13 != 0) {
    do {
      local_77c[1] = 2;
      local_77c[0] = iVar2;
      iVar12 = FUN_088b4148(local_30,local_77c + 2,0x96,param_3,param_4,iVar11,local_40,9999,
                            local_77c);
      if (iVar12 != 0) {
        local_780 = local_780 * 0x343fd + 0x269ec3;
        puVar10 = (undefined4 *)
                  (param_3 + local_77c[(int)(local_780 >> 0x10 & 0x7fffU) % iVar12 + 2] * 8);
        iVar12 = FUN_088b93c8(param_2,iVar2,(int)*(short *)*puVar10);
        if (iVar12 == 1) {
          *(undefined1 *)((int)puVar10 + 7) = 1;
          iVar11 = iVar11 + *(short *)(puVar10 + 1);
        }
      }
      if (local_3c == '\x01') {
        local_38 = param_4;
        goto LAB_088b5a58;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar13);
  }
  local_38 = param_4;
LAB_088b5a58:
  local_34 = param_2;
  iVar2 = 0;
  local_38 = param_4;
  if (uVar13 != 0) {
    do {
      iVar12 = 0;
      do {
        iVar6 = 9999;
        while( true ) {
          iVar9 = 0;
          if (iVar12 < 1) {
            if (-1 < iVar12) {
              if ((local_3c == '\x01') && (0 < iVar2)) {
                local_2c4[1] = 1;
                local_2c4[0] = iVar2;
                iVar9 = FUN_088b4148(local_30,local_51c,0x96,param_3,param_4,iVar11,local_40,iVar6,
                                     local_2c4);
              }
              else {
                local_2b8 = 3;
                local_2c4[2] = iVar2;
                iVar9 = FUN_088b4148(local_30,local_51c,0x96,param_3,param_4,iVar11,local_40,iVar6,
                                     local_2c4 + 2);
              }
            }
          }
          else if (iVar12 < 2) {
            if ((local_3c == '\x01') && (0 < iVar2)) {
              local_2b4[1] = 1;
              local_2b4[0] = iVar2;
              iVar9 = FUN_088b4268(local_30,local_51c,0x96,param_3,param_4,iVar11,local_40,iVar6,
                                   local_2b4);
            }
            else {
              local_2a8 = 3;
              local_2b4[2] = iVar2;
              iVar9 = FUN_088b4268(local_30,local_51c,0x96,param_3,param_4,iVar11,local_40,iVar6,
                                   local_2b4 + 2);
            }
          }
          if (iVar9 == 0) break;
          iVar6 = 0;
          if (0 < iVar9) {
            iVar5 = 0;
            do {
              puVar10 = (undefined4 *)(param_3 + *(int *)((int)local_51c + iVar5) * 8);
              if ((iVar11 + *(short *)(puVar10 + 1) <= local_40) &&
                 (iVar5 = FUN_088b7790(local_34,iVar2,(int)*(short *)*puVar10), iVar5 == 1)) {
                *(undefined1 *)((int)puVar10 + 7) = 1;
                iVar11 = iVar11 + *(short *)(puVar10 + 1);
              }
              iVar6 = iVar6 + 1;
              iVar5 = iVar6 * 4;
            } while (iVar6 < iVar9);
          }
          iVar6 = *(char *)(param_3 + local_51c[0] * 8 + 6) + -1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar13);
  }
  uVar3 = local_34;
  if (local_3c == '\x01') {
    iVar2 = 6;
    do {
      uVar4 = FUN_088b7a88(uVar3,0,iVar2);
      iVar12 = 1;
      if (1 < uVar13) {
        do {
          FUN_088b75e8(uVar3,iVar12,iVar2,uVar4);
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar13);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
  }
  iVar2 = 9999;
  while( true ) {
    local_2a4[0] = 0;
    iVar2 = FUN_088b4388(local_30,local_2a0,0x96,param_3,param_4,iVar11,local_40,iVar2,local_2a4);
    if (iVar2 == 0) break;
    iVar12 = 0;
    if (0 < iVar2) {
      iVar6 = 0;
      do {
        puVar10 = (undefined4 *)(param_3 + *(int *)((int)local_2a0 + iVar6) * 8);
        if ((iVar11 + *(short *)(puVar10 + 1) <= local_40) &&
           (iVar6 = FUN_088b7820(uVar3,(int)*(short *)*puVar10), iVar6 == 1)) {
          *(undefined1 *)((int)puVar10 + 7) = 1;
          iVar11 = iVar11 + *(short *)(puVar10 + 1);
        }
        iVar12 = iVar12 + 1;
        iVar6 = iVar12 * 4;
      } while (iVar12 < iVar2);
    }
    iVar2 = *(char *)(param_3 + local_2a0[0] * 8 + 6) + -1;
  }
  return;
LAB_088b5934:
  iVar6 = iVar6 + 1;
  if (*(short *)(iVar2 + 2) <= iVar6) goto LAB_088b594c;
  goto LAB_088b5770;
}

