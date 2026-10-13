/* Entry 0x08907000 | file offset 0x00103FD8 | FUN_08907000 | bytes 684 */

void FUN_08907000(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_f0 [16];
  undefined1 local_b0 [6];
  undefined1 auStack_aa [6];
  undefined1 local_a4 [96];
  int local_44 [4];
  
  piVar8 = local_f0;
  piVar7 = local_f0;
  piVar13 = local_f0;
  if (*(int *)(param_1 + 0x1658) == 6) {
    iVar12 = *(int *)(param_1 + 0x804) + 1;
    FUN_08993560(local_b0,2,6,FUN_089057bc);
    FUN_08993560(local_a4,0x10,6,FUN_089057bc);
    iVar5 = *(int *)(param_1 + 0x1644);
    iVar15 = -1;
    local_f0[iVar5] = -1;
    iVar4 = *(int *)(param_1 + 0x804);
    iVar6 = 0;
    iVar14 = 0;
    iVar16 = 0;
    uVar10 = 1;
    puVar9 = local_b0;
    if (0 < iVar4) {
      do {
        if (iVar6 < iVar5) {
          *piVar8 = iVar6;
        }
        else {
          piVar8[1] = iVar6;
        }
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar6 < iVar4);
    }
    iVar4 = 0;
    do {
      local_44[0] = param_2;
      local_44[1] = param_3;
      if (*(int *)((int)piVar7 + 0xac) == *(int *)(param_1 + 0x1644)) {
        uVar10 = 0;
        iVar15 = iVar14;
      }
      else {
        iVar5 = param_1 + local_f0[*(int *)((int)piVar7 + 0xac)] * 0x80;
        uVar1 = *(undefined1 *)(iVar5 + 5);
        uVar2 = *(undefined1 *)(iVar5 + 6);
        *puVar9 = *(undefined1 *)(iVar5 + 4);
        uVar3 = *(undefined1 *)(iVar5 + 7);
        puVar9[1] = uVar1;
        uVar1 = *(undefined1 *)(iVar5 + 8);
        puVar9[2] = uVar2;
        uVar2 = *(undefined1 *)(iVar5 + 9);
        puVar9[3] = uVar3;
        puVar9[4] = uVar1;
        puVar9[5] = uVar2;
        iVar14 = iVar14 + 1;
        puVar9 = puVar9 + 6;
      }
      iVar4 = iVar4 + 1;
      piVar7 = (int *)((int)piVar7 + 4);
    } while (iVar4 < 2);
    local_44[2] = iVar12;
    iVar4 = 0;
    local_44[3] = uVar10;
    if (0 < iVar12) {
      puVar9 = local_a4;
      do {
        if (*piVar13 < 0) {
          if (iVar15 < 0) {
            iVar15 = iVar14 + iVar16;
          }
        }
        else {
          iVar6 = param_1 + *piVar13 * 0x80;
          puVar11 = (undefined1 *)(iVar6 + 4);
          iVar5 = FUN_08935490(puVar11,local_b0,6);
          if ((iVar5 != 0) && (iVar5 = FUN_08935490(puVar11,auStack_aa,6), iVar5 != 0)) {
            uVar1 = *(undefined1 *)(iVar6 + 5);
            uVar2 = *(undefined1 *)(iVar6 + 6);
            *puVar9 = *puVar11;
            uVar3 = *(undefined1 *)(iVar6 + 7);
            puVar9[1] = uVar1;
            uVar1 = *(undefined1 *)(iVar6 + 8);
            puVar9[2] = uVar2;
            uVar2 = *(undefined1 *)(iVar6 + 9);
            puVar9[3] = uVar3;
            puVar9[4] = uVar1;
            puVar9[5] = uVar2;
            iVar16 = iVar16 + 1;
            puVar9 = puVar9 + 6;
          }
        }
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar4 < local_44[2]);
    }
    FUN_0890c43c(param_1 + 0x10d8,local_44[3],iVar15,local_b0,iVar14,local_a4,iVar16);
    FUN_0890c640(param_1 + 0x10d8);
    *(undefined4 *)(param_1 + 0x16e0) = 0;
  }
  return;
}

