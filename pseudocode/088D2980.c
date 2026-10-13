/* Entry 0x088D2980 | file offset 0x000CF958 | FUN_088d2980 | bytes 1264 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_088d2980(int param_1,int param_2,undefined4 param_3,undefined1 param_4,short *param_5,
                 int param_6)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  char *local_80;
  undefined4 local_7c;
  int local_78 [3];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  short *local_30;
  
  local_34 = 0xffffffff;
  local_60 = param_1 + 0x10000;
  local_48 = param_1 + 0x10000;
  local_64 = param_1 + 0x10000;
  local_38 = param_1 + 0x10000;
  local_68 = param_1 + 0x10000;
  local_3c = param_1 + 0x10000;
  local_6c = param_1 + 0x10000;
  local_40 = param_1 + 0x10000;
  local_78[2] = param_1 + 0x10000;
  local_44 = param_1 + 0x10000;
  sVar2 = *param_5;
  local_5c = param_4;
  local_58 = param_6;
  local_54 = param_3;
  local_50 = param_2;
  local_4c = param_1;
  local_30 = param_5;
  while (psVar4 = local_30, iVar17 = local_4c, iVar5 = local_50, sVar2 != -1) {
    if (local_58 == 0) {
      if (*(char *)(local_4c + 0x23) == '\0') {
        uVar6 = FUN_08862c40(*(undefined4 *)(local_30 + 2),1);
        uVar10 = *(undefined4 *)(psVar4 + 2);
        cVar1 = *(char *)(iVar17 + 0x23);
      }
      else {
        uVar6 = FUN_088fe7c8(*(undefined4 *)(local_30 + 2),0);
        uVar10 = *(undefined4 *)(psVar4 + 2);
        cVar1 = *(char *)(iVar17 + 0x23);
      }
      if (cVar1 == '\0') {
        FUN_08862854(uVar10,iVar5,uVar6,1);
        sVar2 = *psVar4;
      }
      else {
        uVar6 = FUN_088fe708(uVar10,iVar5,uVar6,0);
        FUN_088fe944(*(undefined4 *)(psVar4 + 2),iVar5,uVar6);
        sVar2 = *psVar4;
      }
    }
    else {
      iVar5 = FUN_08869ab4(local_58);
      iVar5 = *(int *)(iVar5 + 4);
      sVar2 = *local_30;
    }
    iVar8 = local_40;
    iVar17 = local_44;
    piVar15 = (int *)(iVar5 + 0x10);
    if (sVar2 == 0) {
      uVar11 = (uint)*(ushort *)(iVar5 + 10);
      iVar17 = 0;
      if (uVar11 != 0) {
        do {
          iVar8 = piVar15[1];
          if (iVar8 != 0) {
            uVar11 = (uint)*(ushort *)(iVar5 + 0xc) + iVar17;
            if (local_34 < uVar11) {
              local_34 = uVar11;
            }
            iVar13 = *piVar15;
            local_80 = (char *)0x0;
            local_7c = 0;
            iVar7 = FUN_08870b10((char *)(iVar5 + iVar13),&local_80,&local_7c);
            iVar16 = DAT_089d7830;
            pcVar14 = (char *)(iVar5 + iVar13);
            if (iVar7 != 0) {
              pcVar14 = local_80;
            }
            if (*pcVar14 == 'M') {
              if (*(code **)(local_60 + 0x968) == (code *)0x0) {
                iVar7 = **(int **)(DAT_089d7830 + 0x1095c);
                **(int **)(DAT_089d7830 + 0x1095c) = 0;
                *(undefined4 *)(iVar16 + 0x1095c) = *(undefined4 *)(*(int *)(iVar16 + 0x1095c) + 4);
              }
              else {
                iVar7 = (**(code **)(local_60 + 0x968))();
              }
              iVar8 = FUN_088de0e8(iVar7,pcVar14,iVar8,0xffffffff,uVar11,local_5c);
              if (iVar8 == 0) {
                if (*(code **)(local_68 + 0x96c) == (code *)0x0) {
                  if (**(int **)(local_6c + 0x95c) != 0) {
                    for (piVar9 = (int *)(*(int **)(local_6c + 0x95c))[1]; *piVar9 != 0;
                        piVar9 = (int *)piVar9[1]) {
                    }
                  }
                  **(int **)(local_3c + 0x960) = iVar7;
                  *(undefined4 *)(local_3c + 0x960) =
                       *(undefined4 *)(*(int *)(local_3c + 0x960) + 4);
                }
                else {
                  (**(code **)(local_68 + 0x96c))(iVar7);
                }
              }
              else {
                if (*(int *)(local_48 + -0x1434) == 0) {
                  *(int *)(local_48 + -0x1434) = iVar7;
                  *(int *)(local_64 + -0x1438) = iVar7;
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                  *(undefined4 *)(iVar7 + 0x10) = 0;
                  iVar8 = *(int *)(local_38 + -0x1430);
                }
                else {
                  *(int *)(*(int *)(local_48 + -0x1434) + 0xc) = iVar7;
                  uVar6 = *(undefined4 *)(local_48 + -0x1434);
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                  *(undefined4 *)(iVar7 + 0x10) = uVar6;
                  iVar8 = *(int *)(local_38 + -0x1430);
                  *(int *)(local_48 + -0x1434) = iVar7;
                }
                *(int *)(local_38 + -0x1430) = iVar8 + 1;
              }
            }
            else if (*pcVar14 == 'F') {
              FUN_0887d5c8(*(undefined4 *)(DAT_089d6998 + 0xf2c0),pcVar14,iVar8);
            }
            uVar11 = (uint)*(ushort *)(iVar5 + 10);
          }
          iVar17 = iVar17 + 1;
          piVar15 = piVar15 + 2;
        } while (iVar17 < (int)uVar11);
      }
    }
    else if ((sVar2 == 1) && (iVar16 = 0, *(short *)(iVar5 + 10) != 0)) {
      do {
        if (piVar15[1] != 0) {
          uVar3 = *(ushort *)(iVar5 + 0xc);
          iVar13 = *piVar15;
          local_78[0] = 0;
          local_78[1] = 0;
          iVar7 = FUN_08870b10(iVar5 + iVar13,local_78,local_78 + 1);
          if (iVar7 == 0) {
            iVar12 = piVar15[2];
            iVar7 = iVar5 + iVar13;
          }
          else {
            iVar12 = piVar15[2];
            iVar7 = local_78[0];
          }
          iVar13 = **(int **)(iVar8 + -0x1440);
          **(int **)(iVar8 + -0x1440) = 0;
          *(undefined4 *)(iVar8 + -0x1440) = *(undefined4 *)(*(int *)(iVar8 + -0x1440) + 4);
          FUN_088dcba8(iVar13,iVar7,iVar5 + iVar12,(uint)uVar3 + iVar16,local_5c);
          if (*(int *)(param_1 + 0xc4f8) == 0) {
            *(int *)(param_1 + 0xc4f8) = iVar13;
            *(int *)(local_78[2] + -0x3b0c) = iVar13;
            *(undefined4 *)(iVar13 + 0x6c) = 0;
            *(undefined4 *)(iVar13 + 0x70) = 0;
            iVar7 = *(int *)(iVar17 + -0x3b04);
          }
          else {
            *(int *)(*(int *)(param_1 + 0xc4f8) + 0x6c) = iVar13;
            uVar6 = *(undefined4 *)(param_1 + 0xc4f8);
            *(undefined4 *)(iVar13 + 0x6c) = 0;
            *(undefined4 *)(iVar13 + 0x70) = uVar6;
            iVar7 = *(int *)(iVar17 + -0x3b04);
            *(int *)(param_1 + 0xc4f8) = iVar13;
          }
          *(int *)(iVar17 + -0x3b04) = iVar7 + 1;
        }
        iVar16 = iVar16 + 2;
        piVar15 = piVar15 + 4;
      } while (iVar16 < (int)(uint)*(ushort *)(iVar5 + 10));
    }
    local_30 = local_30 + 4;
    sVar2 = *local_30;
  }
  return local_34;
}

