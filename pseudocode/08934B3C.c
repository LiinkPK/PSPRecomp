/* Entry 0x08934B3C | file offset 0x00131B14 | FUN_08934b3c | bytes 2360 */

void FUN_08934b3c(undefined4 *param_1,uint param_2,undefined1 *param_3,code *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  byte bVar20;
  undefined4 *local_4c;
  undefined4 *local_38;
  undefined4 *local_34;
  
  uVar7 = (uint)param_3 >> 2;
  local_38 = (undefined4 *)((int)param_1 + (int)param_3 * param_2);
  local_4c = param_1;
  do {
    local_34 = (undefined4 *)((int)local_4c + (int)param_3);
    bVar20 = 2;
    if (((uint)local_4c & 3) == 0 && ((uint)param_3 & 3) == 0) {
      bVar20 = param_3 != (undefined1 *)0x4;
    }
    if (param_2 < 7) {
      for (; puVar18 = local_34, local_34 < local_38;
          local_34 = (undefined4 *)((int)local_34 + (int)param_3)) {
        while ((puVar14 = (undefined4 *)((int)puVar18 - (int)param_3), local_4c < puVar18 &&
               (iVar5 = (*param_4)(puVar14,puVar18), 0 < iVar5))) {
          if (bVar20 == 0) {
            uVar11 = *puVar18;
            *puVar18 = *puVar14;
            *puVar14 = uVar11;
          }
          else {
            puVar9 = param_3;
            uVar8 = uVar7;
            puVar15 = puVar18;
            if (bVar20 < 2) {
              do {
                uVar11 = *puVar15;
                *puVar15 = *puVar14;
                *puVar14 = uVar11;
                uVar8 = uVar8 - 1;
                puVar14 = puVar14 + 1;
                puVar15 = puVar15 + 1;
              } while (0 < (int)uVar8);
            }
            else {
              do {
                uVar1 = *(undefined1 *)puVar15;
                *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
                *(undefined1 *)puVar14 = uVar1;
                puVar9 = puVar9 + -1;
                puVar14 = (undefined4 *)((int)puVar14 + 1);
                puVar15 = (undefined4 *)((int)puVar15 + 1);
              } while (0 < (int)puVar9);
            }
          }
          puVar18 = (undefined4 *)((int)puVar18 - (int)param_3);
        }
      }
      return;
    }
    bVar2 = bVar20 < 2;
    puVar18 = (undefined4 *)((int)local_4c + (param_2 >> 1) * (int)param_3);
    puVar14 = (undefined4 *)((int)local_4c + (param_2 - 1) * (int)param_3);
    if (7 < param_2) {
      puVar15 = local_4c;
      puVar16 = puVar14;
      if (0x28 < param_2) {
        iVar5 = (param_2 >> 3) * (int)param_3;
        puVar15 = (undefined4 *)(iVar5 + (int)local_4c);
        puVar16 = (undefined4 *)((int)local_4c + iVar5 * 2);
        iVar6 = (*param_4)(local_4c,puVar15);
        if (iVar6 < 0) {
          iVar6 = (*param_4)(puVar15,puVar16);
          if ((-1 < iVar6) && (iVar6 = (*param_4)(local_4c,puVar16), puVar15 = local_4c, iVar6 < 0))
          {
            puVar15 = puVar16;
          }
        }
        else {
          iVar6 = (*param_4)(puVar15,puVar16);
          if ((iVar6 < 1) && (iVar6 = (*param_4)(local_4c,puVar16), puVar15 = puVar16, iVar6 < 0)) {
            puVar15 = local_4c;
          }
        }
        puVar17 = (undefined4 *)((int)puVar18 - iVar5);
        puVar16 = (undefined4 *)(iVar5 + (int)puVar18);
        iVar6 = (*param_4)(puVar17,puVar18);
        if (iVar6 < 0) {
          iVar6 = (*param_4)(puVar18,puVar16);
          if ((-1 < iVar6) && (iVar6 = (*param_4)(puVar17,puVar16), puVar18 = puVar17, iVar6 < 0)) {
            puVar18 = puVar16;
          }
        }
        else {
          iVar6 = (*param_4)(puVar18,puVar16);
          if ((iVar6 < 1) && (iVar6 = (*param_4)(puVar17,puVar16), puVar18 = puVar16, iVar6 < 0)) {
            puVar18 = puVar17;
          }
        }
        puVar17 = (undefined4 *)((int)puVar14 + iVar5 * -2);
        puVar16 = (undefined4 *)((int)puVar14 - iVar5);
        iVar5 = (*param_4)(puVar17,puVar16);
        if (iVar5 < 0) {
          iVar5 = (*param_4)(puVar16,puVar14);
          if ((-1 < iVar5) && (iVar5 = (*param_4)(puVar17,puVar14), puVar16 = puVar17, iVar5 < 0)) {
            puVar16 = puVar14;
          }
        }
        else {
          iVar5 = (*param_4)(puVar16,puVar14);
          if ((iVar5 < 1) && (iVar5 = (*param_4)(puVar17,puVar14), puVar16 = puVar14, iVar5 < 0)) {
            puVar16 = puVar17;
          }
        }
      }
      iVar5 = (*param_4)(puVar15,puVar18);
      if (iVar5 < 0) {
        iVar5 = (*param_4)(puVar18,puVar16);
        if ((-1 < iVar5) && (iVar5 = (*param_4)(puVar15,puVar16), puVar18 = puVar15, iVar5 < 0)) {
          puVar18 = puVar16;
        }
      }
      else {
        iVar5 = (*param_4)(puVar18,puVar16);
        if ((iVar5 < 1) && (iVar5 = (*param_4)(puVar15,puVar16), puVar18 = puVar16, iVar5 < 0)) {
          puVar18 = puVar15;
        }
      }
    }
    if (bVar20 == 0) {
      uVar11 = *local_4c;
      *local_4c = *puVar18;
      *puVar18 = uVar11;
    }
    else {
      puVar9 = param_3;
      uVar8 = uVar7;
      puVar15 = local_4c;
      if (bVar2) {
        do {
          uVar11 = *puVar15;
          *puVar15 = *puVar18;
          *puVar18 = uVar11;
          uVar8 = uVar8 - 1;
          puVar18 = puVar18 + 1;
          puVar15 = puVar15 + 1;
        } while (0 < (int)uVar8);
      }
      else {
        do {
          uVar1 = *(undefined1 *)puVar15;
          *(undefined1 *)puVar15 = *(undefined1 *)puVar18;
          *(undefined1 *)puVar18 = uVar1;
          puVar9 = puVar9 + -1;
          puVar18 = (undefined4 *)((int)puVar18 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        } while (0 < (int)puVar9);
      }
    }
    bVar4 = false;
    bVar3 = puVar14 < local_34;
    puVar18 = puVar14;
    puVar15 = local_34;
    puVar16 = local_34;
LAB_08935014:
    while (puVar17 = puVar14, !bVar3) {
      iVar5 = (*param_4)(puVar15,local_4c);
      if (0 < iVar5) {
        while ((puVar17 = puVar14, !bVar3 && (iVar5 = (*param_4)(puVar14,local_4c), -1 < iVar5))) {
          if (iVar5 == 0) {
            bVar4 = true;
            if (bVar20 == 0) {
              uVar11 = *puVar14;
              *puVar14 = *puVar18;
              *puVar18 = uVar11;
            }
            else {
              puVar9 = param_3;
              uVar8 = uVar7;
              puVar10 = puVar18;
              if (bVar2) {
                do {
                  uVar11 = *puVar17;
                  *puVar17 = *puVar10;
                  *puVar10 = uVar11;
                  uVar8 = uVar8 - 1;
                  puVar17 = puVar17 + 1;
                  puVar10 = puVar10 + 1;
                } while (0 < (int)uVar8);
              }
              else {
                do {
                  uVar1 = *(undefined1 *)puVar17;
                  *(undefined1 *)puVar17 = *(undefined1 *)puVar10;
                  *(undefined1 *)puVar10 = uVar1;
                  puVar9 = puVar9 + -1;
                  puVar17 = (undefined4 *)((int)puVar17 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                } while (0 < (int)puVar9);
              }
            }
            puVar18 = (undefined4 *)((int)puVar18 - (int)param_3);
          }
          puVar14 = (undefined4 *)((int)puVar14 - (int)param_3);
          bVar3 = puVar14 < puVar15;
        }
        break;
      }
      puVar17 = (undefined4 *)((int)puVar15 + (int)param_3);
      if (iVar5 == 0) {
        bVar4 = true;
        if (bVar20 == 0) {
          uVar11 = *puVar16;
          *puVar16 = *puVar15;
          *puVar15 = uVar11;
        }
        else {
          puVar9 = param_3;
          uVar8 = uVar7;
          puVar10 = puVar16;
          if (bVar2) {
            do {
              uVar11 = *puVar10;
              *puVar10 = *puVar15;
              *puVar15 = uVar11;
              uVar8 = uVar8 - 1;
              puVar15 = puVar15 + 1;
              puVar10 = puVar10 + 1;
            } while (0 < (int)uVar8);
            puVar16 = (undefined4 *)((int)puVar16 + (int)param_3);
            goto LAB_089350c0;
          }
          do {
            uVar1 = *(undefined1 *)puVar10;
            *(undefined1 *)puVar10 = *(undefined1 *)puVar15;
            *(undefined1 *)puVar15 = uVar1;
            puVar9 = puVar9 + -1;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          } while (0 < (int)puVar9);
        }
        puVar16 = (undefined4 *)((int)puVar16 + (int)param_3);
      }
LAB_089350c0:
      puVar15 = puVar17;
      bVar3 = puVar14 < puVar17;
    }
    puVar10 = (undefined4 *)((int)puVar15 + (int)param_3);
    if (!bVar3) {
      puVar14 = (undefined4 *)((int)puVar17 - (int)param_3);
      if (bVar20 == 0) {
        uVar11 = *puVar15;
        *puVar15 = *puVar17;
        *puVar17 = uVar11;
      }
      else {
        uVar8 = uVar7;
        puVar9 = param_3;
        if (bVar2) {
          do {
            uVar11 = *puVar15;
            *puVar15 = *puVar17;
            *puVar17 = uVar11;
            puVar15 = puVar15 + 1;
            uVar8 = uVar8 - 1;
            puVar17 = puVar17 + 1;
          } while (0 < (int)uVar8);
        }
        else {
          do {
            uVar1 = *(undefined1 *)puVar15;
            *(undefined1 *)puVar15 = *(undefined1 *)puVar17;
            *(undefined1 *)puVar17 = uVar1;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
            puVar9 = puVar9 + -1;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (0 < (int)puVar9);
        }
      }
      bVar4 = true;
      bVar3 = puVar14 < puVar10;
      puVar15 = puVar10;
      goto LAB_08935014;
    }
    if (!bVar4) {
      for (; puVar18 = local_34, local_34 < local_38;
          local_34 = (undefined4 *)((int)local_34 + (int)param_3)) {
        while ((puVar14 = (undefined4 *)((int)puVar18 - (int)param_3), local_4c < puVar18 &&
               (iVar5 = (*param_4)(puVar14,puVar18), 0 < iVar5))) {
          if (bVar20 == 0) {
            uVar11 = *puVar18;
            *puVar18 = *puVar14;
            *puVar14 = uVar11;
          }
          else {
            puVar9 = param_3;
            uVar8 = uVar7;
            puVar15 = puVar18;
            if (bVar2) {
              do {
                uVar11 = *puVar15;
                *puVar15 = *puVar14;
                *puVar14 = uVar11;
                uVar8 = uVar8 - 1;
                puVar14 = puVar14 + 1;
                puVar15 = puVar15 + 1;
              } while (0 < (int)uVar8);
            }
            else {
              do {
                uVar1 = *(undefined1 *)puVar15;
                *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
                *(undefined1 *)puVar14 = uVar1;
                puVar9 = puVar9 + -1;
                puVar14 = (undefined4 *)((int)puVar14 + 1);
                puVar15 = (undefined4 *)((int)puVar15 + 1);
              } while (0 < (int)puVar9);
            }
          }
          puVar18 = (undefined4 *)((int)puVar18 - (int)param_3);
        }
      }
      return;
    }
    puVar12 = (undefined1 *)((int)puVar15 - (int)puVar16);
    puVar19 = (undefined1 *)((int)puVar18 - (int)puVar17);
    puVar13 = (undefined1 *)((int)local_38 + (-(int)param_3 - (int)puVar18));
    puVar9 = (undefined1 *)((int)puVar16 - (int)local_4c);
    if ((int)puVar12 <= (int)puVar16 - (int)local_4c) {
      puVar9 = puVar12;
    }
    if (0 < (int)puVar9) {
      puVar14 = (undefined4 *)((int)puVar15 - (int)puVar9);
      puVar18 = local_4c;
      if (bVar2) {
        uVar8 = (uint)puVar9 >> 2;
        do {
          uVar11 = *puVar18;
          *puVar18 = *puVar14;
          *puVar14 = uVar11;
          puVar18 = puVar18 + 1;
          uVar8 = uVar8 - 1;
          puVar14 = puVar14 + 1;
        } while (0 < (int)uVar8);
      }
      else {
        do {
          uVar1 = *(undefined1 *)puVar18;
          *(undefined1 *)puVar18 = *(undefined1 *)puVar14;
          *(undefined1 *)puVar14 = uVar1;
          puVar9 = puVar9 + -1;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        } while (0 < (int)puVar9);
      }
    }
    if (puVar19 < puVar13) {
      puVar13 = puVar19;
    }
    if (0 < (int)puVar13) {
      puVar18 = (undefined4 *)((int)local_38 - (int)puVar13);
      if (bVar2) {
        uVar8 = (uint)puVar13 >> 2;
        do {
          uVar11 = *puVar15;
          *puVar15 = *puVar18;
          *puVar18 = uVar11;
          puVar15 = puVar15 + 1;
          uVar8 = uVar8 - 1;
          puVar18 = puVar18 + 1;
        } while (0 < (int)uVar8);
      }
      else {
        do {
          uVar1 = *(undefined1 *)puVar15;
          *(undefined1 *)puVar15 = *(undefined1 *)puVar18;
          *(undefined1 *)puVar18 = uVar1;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          puVar13 = puVar13 + -1;
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        } while (0 < (int)puVar13);
      }
    }
    if (param_3 < puVar12) {
      FUN_08934b3c(local_4c,(uint)puVar12 / (uint)param_3,param_3,param_4);
    }
    if (puVar19 <= param_3) {
      return;
    }
    param_2 = (uint)puVar19 / (uint)param_3;
    local_4c = (undefined4 *)((int)local_38 - (int)puVar19);
    local_38 = (undefined4 *)((int)local_4c + (int)param_3 * param_2);
  } while( true );
}

