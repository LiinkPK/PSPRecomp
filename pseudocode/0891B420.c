/* Entry 0x0891B420 | file offset 0x001183F8 | FUN_0891b420 | bytes 932 */

void FUN_0891b420(int param_1,undefined1 *param_2)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  int local_30 [2];
  
  piVar6 = local_30;
  iVar2 = FUN_088c5b34(*(undefined4 *)(param_1 + 4));
  if (iVar2 != 0) {
    local_30[0] = FUN_088c5b90((int)*(short *)(iVar2 + 0xc));
    local_30[1] = FUN_088c5b90((int)*(short *)(iVar2 + 0xe));
    *param_2 = 1;
    param_2[2] = 2;
    iVar4 = 0;
    *(undefined2 *)(param_2 + 0x44) = *(undefined2 *)(iVar2 + 2);
    piVar8 = (int *)(param_2 + 0x48);
    do {
      iVar9 = 0;
      psVar10 = (short *)(*piVar6 + 4);
      *piVar8 = (int)*(short *)(*piVar6 + 2);
      piVar11 = piVar8 + 8;
      do {
        sVar1 = *psVar10;
        if (sVar1 < 1) {
          if (-1 < sVar1) {
            *(undefined2 *)piVar11 = 0xffff;
          }
        }
        else if (sVar1 < 2) {
          *(undefined2 *)piVar11 = 4;
          *(undefined1 *)(piVar11 + 4) = 0xff;
          *(undefined1 *)((int)piVar11 + 0x11) = 1;
          *(undefined1 *)((int)piVar11 + 0x12) = 0xff;
          *(undefined1 *)((int)piVar11 + 0x13) = 1;
          *(char *)(piVar11 + 4) = (char)psVar10[1];
          *(char *)((int)piVar11 + 0x11) = (char)psVar10[2];
          *(char *)((int)piVar11 + 0x12) = (char)psVar10[3];
          *(undefined1 *)((int)piVar11 + 0x13) = *(undefined1 *)((int)psVar10 + 7);
        }
        else if (sVar1 < 3) {
          *(undefined2 *)piVar11 = 1;
          *(short *)(piVar11 + 4) = -1;
          *(undefined2 *)((int)piVar11 + 0x12) = 0xffff;
          *(undefined2 *)(piVar11 + 5) = 0xffff;
          *(short *)(piVar11 + 4) = psVar10[1];
        }
        iVar9 = iVar9 + 1;
        psVar10 = psVar10 + 4;
        piVar11 = piVar11 + 0xba;
      } while (iVar9 < 5);
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 0x3aa;
    } while (iVar4 < 2);
    if (*(short *)(iVar2 + 10) == 0) {
      param_2[1] = 0;
    }
    else {
      param_2[1] = 1;
      if (*(int *)(param_2 + 0x48) != *(int *)(param_2 + 0xef0)) {
        param_2[1] = 0;
      }
    }
    if (-1 < *(short *)(iVar2 + 0x10)) {
      puVar3 = (undefined2 *)FUN_088c5be8();
      iVar4 = 0;
      puVar7 = param_2;
      do {
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + 1;
        *(undefined2 *)(puVar7 + 0x1d98) = *puVar3;
        puVar7 = puVar7 + 0x168;
      } while (iVar4 < 5);
    }
    iVar4 = 0;
    iVar9 = 0;
    puVar16 = param_2 + 0x24a4;
    psVar10 = (short *)(iVar2 + 0x14);
    puVar7 = param_2;
    do {
      if (*psVar10 != 0) {
        iVar4 = iVar9 + 1;
        break;
      }
      if (iVar9 < 4) {
        *(undefined4 *)(puVar7 + 0x24a0) = 0;
        FUN_089359a4(puVar16,psVar10 + 2);
      }
      iVar9 = iVar9 + 1;
      psVar10 = psVar10 + 0x12;
      puVar7 = puVar7 + 0x24;
      puVar16 = puVar16 + 0x24;
    } while (iVar9 < 5);
    if (iVar4 < 5) {
      psVar10 = (short *)(iVar2 + 0x14) + iVar4 * 0x12;
      iVar9 = iVar4;
      do {
        if ((*psVar10 == 0) && (iVar5 = iVar9 - iVar4, iVar5 < 4)) {
          *(undefined4 *)(param_2 + iVar5 * 0x24 + 0x2530) = 0;
          FUN_089359a4(param_2 + iVar5 * 0x24 + 0x2534,psVar10 + 2);
        }
        iVar9 = iVar9 + 1;
        psVar10 = psVar10 + 0x12;
      } while (iVar9 < 5);
    }
    iVar4 = FUN_088c5c3c((int)*(short *)(iVar2 + 0x12));
    if (iVar4 != 0) {
      pcVar12 = (char *)(iVar4 + 4);
      pcVar14 = (char *)(iVar4 + 0xa4);
      iVar9 = 0;
      puVar13 = (undefined4 *)(param_2 + 0x25c0);
      puVar15 = (undefined4 *)(param_2 + 0x2674);
      do {
        if (*pcVar12 != '\0') {
          *puVar13 = 0;
          FUN_089359a4(puVar13 + 1,pcVar12);
        }
        if (*pcVar14 != '\0') {
          *puVar15 = 0;
          FUN_089359a4(puVar15 + 1,pcVar14);
        }
        iVar9 = iVar9 + 1;
        pcVar12 = pcVar12 + 0x20;
        puVar13 = puVar13 + 9;
        pcVar14 = pcVar14 + 0x20;
        puVar15 = puVar15 + 9;
      } while (iVar9 < 5);
      if (*(char *)(iVar4 + 0x144) != '\0') {
        *(undefined4 *)(param_2 + 0x2728) = 0;
        FUN_089359a4(param_2 + 0x272c,(char *)(iVar4 + 0x144));
      }
      if (*(char *)(iVar4 + 0x164) != '\0') {
        *(undefined4 *)(param_2 + 0x274c) = 0;
        FUN_089359a4(param_2 + 0x2750,(char *)(iVar4 + 0x164));
      }
    }
    *(undefined2 *)(param_2 + 0x27b0) = *(undefined2 *)(iVar2 + 6);
    *(undefined2 *)(param_2 + 0x27b2) = *(undefined2 *)(iVar2 + 8);
  }
  return;
}

