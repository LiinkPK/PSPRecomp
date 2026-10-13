/* Entry 0x0886DFC0 | file offset 0x0006AF98 | FUN_0886dfc0 | bytes 1552 */

void FUN_0886dfc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined **ppuVar11;
  int *piVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int local_40;
  int local_3c;
  ushort *local_34;
  undefined4 local_30;
  
  FUN_08940434(param_3,param_4);
  FUN_08869ca0(param_1);
  FUN_08935bb4(param_1 + 0x44,param_2,0xf);
  local_30 = FUN_0894045c(param_3,param_4,0);
  iVar3 = FUN_089ac120();
  param_1[3] = iVar3;
  FUN_089b7b94(iVar3,local_30);
  iVar3 = FUN_0894045c(param_3,param_4,0);
  param_1[4] = iVar3;
  *(undefined1 *)(param_1 + 0x23) = 1;
  iVar3 = FUN_089b0e50(param_1[3]);
  if (iVar3 < 1) {
    iVar3 = param_1[3];
    uVar2 = FUN_08940434(param_3,param_4);
    *(undefined1 *)(param_1 + 0x23) = uVar2;
    FUN_089b0e64(iVar3);
    iVar14 = 0;
    *(char *)(param_1 + 0x23) = (char)param_1[0x23] + -1;
    piVar12 = param_1;
    if ('\0' < (char)param_1[0x23]) {
      do {
        iVar14 = iVar14 + 1;
        iVar4 = FUN_0894045c(param_3,param_4,iVar14);
        iVar5 = FUN_089ac120();
        piVar12[3] = iVar5;
        FUN_089b7b94(iVar5,iVar4);
        FUN_089b0e50(piVar12[3]);
        iVar5 = FUN_089b0e64(iVar3);
        FUN_089b7c3c(piVar12[3],iVar5);
        iVar15 = 0;
        if (0 < iVar5 + 1) {
          do {
            uVar6 = FUN_089b0f44(iVar3,iVar15);
            FUN_089b7db4(piVar12[3],iVar15,uVar6,0x800);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar5 + 1);
        }
        piVar12[4] = iVar4;
        piVar12 = piVar12 + 4;
      } while (iVar14 < (char)param_1[0x23]);
    }
    FUN_089acdfc(iVar3);
    local_30 = FUN_0894045c(param_3,param_4,1);
  }
  param_1[0x21] = (int)(param_1 + 1);
  iVar3 = 0;
  piVar12 = param_1;
  if ('\0' < (char)param_1[0x23]) {
    do {
      FUN_089b18fc(0,piVar12[3],0);
      FUN_089b0dac(piVar12[3],1,0);
      iVar3 = iVar3 + 1;
      piVar12 = piVar12 + 4;
    } while (iVar3 < (char)param_1[0x23]);
  }
  iVar3 = FUN_089b0e3c(*(undefined4 *)(param_1[0x21] + 8));
  iVar14 = 0;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar6 = FUN_089b0e78(*(undefined4 *)(param_1[0x21] + 8),iVar14);
      iVar5 = -1;
      iVar15 = 0;
      ppuVar11 = &PTR_s_l_toe_089d5f30;
      do {
        uVar7 = FUN_089b2ca8(uVar6);
        iVar8 = FUN_0893585c(uVar7,*ppuVar11);
        if (iVar8 == 0) {
          iVar4 = iVar4 + 1;
          iVar5 = iVar15;
          break;
        }
        iVar15 = iVar15 + 1;
        ppuVar11 = ppuVar11 + 1;
      } while (iVar15 < 0x19);
      if ((-1 < iVar5) && (iVar5 < 0x19)) {
        param_1[iVar5 + 0x29] = iVar14;
      }
      if (0x18 < iVar4) {
        cVar1 = (char)param_1[0x23];
        goto LAB_0886e29c;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar3);
  }
  cVar1 = (char)param_1[0x23];
LAB_0886e29c:
  iVar3 = 0;
  piVar12 = param_1;
  if ('\0' < cVar1) {
    do {
      iVar14 = FUN_089b0e10(piVar12[3]);
      if (iVar14 != 0) {
        FUN_089b5008(piVar12[3],iVar14);
      }
      iVar3 = iVar3 + 1;
      piVar12 = piVar12 + 4;
    } while (iVar3 < (char)param_1[0x23]);
  }
  FUN_0886a090(param_1);
  iVar3 = FUN_089b0e3c(*(undefined4 *)(param_1[0x21] + 8));
  iVar14 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5f94 + 4),iVar3 << 2,0,0,1,0);
  *param_1 = iVar14;
  FUN_08935828(iVar14,0,iVar3 << 2);
  local_40 = 0;
  if ('\0' < (char)param_1[0x23]) {
    piVar16 = param_1 + 1;
    piVar12 = param_1;
    do {
      iVar14 = FUN_089404a8(piVar12[4],0xf);
      iVar4 = 0;
      if (0 < iVar14) {
        do {
          puVar9 = (ushort *)FUN_08940528(piVar12[4],0xf,iVar4);
          puVar10 = puVar9 + 8;
          if ((*puVar9 & 0x8000) != 0) {
            puVar10 = (ushort *)&DAT_089c955c;
          }
          iVar5 = FUN_08935970(puVar10,"TexAnm");
          if (iVar5 == 0) {
            FUN_0886d8d4(param_1,piVar16,puVar9);
            cVar1 = (char)param_1[0x23];
            goto LAB_0886e3e8;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar14);
      }
      cVar1 = (char)param_1[0x23];
LAB_0886e3e8:
      piVar12 = piVar12 + 4;
      local_40 = local_40 + 1;
      piVar16 = piVar16 + 4;
    } while (local_40 < cVar1);
  }
  iVar14 = FUN_089404a8(local_30,4);
  local_3c = 0;
  if (0 < iVar14) {
    local_34 = (ushort *)&DAT_089c955c;
    do {
      puVar9 = (ushort *)FUN_08940528(local_30,4,local_3c);
      puVar10 = puVar9 + 8;
      if ((*puVar9 & 0x8000) != 0) {
        puVar10 = local_34;
      }
      iVar5 = 0;
      iVar4 = -1;
      if (0 < iVar3) {
        do {
          uVar6 = FUN_089b0e78(param_1[3],iVar5);
          uVar6 = FUN_089b2ca8(uVar6);
          iVar15 = FUN_0893585c(puVar10,uVar6);
          iVar4 = iVar5;
          if (iVar15 == 0) break;
          iVar5 = iVar5 + 1;
          iVar4 = -1;
        } while (iVar5 < iVar3);
      }
      if (iVar4 != -1) {
        iVar5 = FUN_089404a8(puVar9,0xf1);
        iVar15 = 0;
        if (0 < iVar5) {
          do {
            puVar10 = (ushort *)FUN_08940528(puVar9,0xf1,iVar15);
            if ((*puVar10 & 0x8000) == 0) {
              puVar13 = (ushort *)((int)puVar10 + (uint)puVar10[1]);
            }
            else {
              puVar13 = puVar10 + 4;
            }
            iVar8 = FUN_08935970(puVar13,"DISTANCE");
            if (iVar8 == 0) {
              if ((*puVar10 & 0x8000) == 0) {
                iVar8 = *(int *)(puVar10 + 6) - (uint)puVar10[1];
              }
              else {
                iVar8 = *(int *)(puVar10 + 2) + -8;
              }
              *(undefined4 *)(*param_1 + iVar4 * 4) = *(undefined4 *)((int)puVar13 + iVar8 + -4);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar5);
        }
      }
      local_3c = local_3c + 1;
    } while (local_3c < iVar14);
  }
  param_1[0x24] = param_1[0x24] | 2;
  return;
}

