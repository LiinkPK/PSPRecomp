/* Entry 0x0881EAF0 | file offset 0x0001BAC8 | FUN_0881eaf0 | bytes 1204 */

undefined4 FUN_0881eaf0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  short *psVar8;
  
  uVar1 = FUN_08899300();
  uVar2 = FUN_088988b4(uVar1);
  uVar3 = FUN_08897efc(uVar1);
  uVar4 = FUN_08898194(uVar1);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar7 = *(uint **)(param_1 + 0x5c);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x58));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    puVar7 = *(uint **)(param_1 + 0x68);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 100));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    puVar7 = *(uint **)(param_1 + 0x74);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x70));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    puVar7 = *(uint **)(param_1 + 0x80);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x7c));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    psVar8 = *(short **)(param_1 + 0x8c);
    do {
      if ((uVar2 < (uint)(int)*psVar8) && ((int)*psVar8 != 0xffffffff)) {
        return 0;
      }
      if ((uVar3 <= (uint)(int)psVar8[2]) && ((int)psVar8[2] != 0xffffffff)) {
        return 0;
      }
      if ((uVar4 <= (uint)(int)psVar8[3]) && ((int)psVar8[3] != 0xffffffff)) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      psVar8 = psVar8 + 0x12;
    } while (iVar5 < *(int *)(param_1 + 0x88));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    puVar7 = *(uint **)(param_1 + 0xa0);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x9c));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    piVar6 = *(int **)(param_1 + 0xac);
    do {
      if ((*piVar6 == 0) && (uVar2 <= (uint)piVar6[1])) {
        return 0;
      }
      if ((piVar6[2] == 0) && (uVar2 < (uint)piVar6[3])) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0xa8));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xb4)) {
    piVar6 = *(int **)(param_1 + 0xb8);
    do {
      if ((*piVar6 == 0) && (uVar2 <= (uint)piVar6[1])) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar5 < *(int *)(param_1 + 0xb4));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    piVar6 = *(int **)(param_1 + 0xc4);
    do {
      if ((*piVar6 == 0) && (uVar2 <= (uint)piVar6[1])) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 2;
    } while (iVar5 < *(int *)(param_1 + 0xc0));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    piVar6 = *(int **)(param_1 + 0xd0);
    do {
      if ((*piVar6 == 0) && (uVar2 <= (uint)piVar6[1])) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 2;
    } while (iVar5 < *(int *)(param_1 + 0xcc));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    puVar7 = *(uint **)(param_1 + 0xdc);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 5;
    } while (iVar5 < *(int *)(param_1 + 0xd8));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xe4)) {
    puVar7 = *(uint **)(param_1 + 0xe8);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xe4));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    puVar7 = *(uint **)(param_1 + 0xf4);
    do {
      if (uVar2 <= *puVar7) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xf0));
  }
  return 1;
}

