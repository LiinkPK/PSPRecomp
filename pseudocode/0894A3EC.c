/* Entry 0x0894A3EC | file offset 0x001473C4 | FUN_0894a3ec | bytes 452 */

void FUN_0894a3ec(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  
  if (-1 < *(short *)(param_2 + 0x36)) {
    iVar12 = *(int *)(param_2 + 0x40);
    psVar13 = *(short **)(*(int *)(iVar12 + 0x24) + *(short *)(param_2 + 0x36) * 4);
    sVar1 = *psVar13;
    while (sVar1 <= param_4) {
      *(int *)(param_1 + 0x8c) = param_2;
      iVar14 = 0;
      iVar15 = 0;
      if (0 < *(int *)(psVar13 + 2)) {
        do {
          puVar6 = (ushort *)(*(int *)(psVar13 + 4) + iVar15);
          iVar7 = (uint)*puVar6 * 4;
          iVar8 = *(int *)(*(int *)(param_2 + 0x4c) + iVar7);
          iVar5 = param_4;
          if (iVar8 != 0) {
            iVar5 = (int)*(short *)(iVar8 + 6);
          }
          puVar9 = *(ushort **)(*(int *)(iVar12 + 0x1c) + iVar7);
          *(ushort **)(param_1 + 0x90) = puVar9;
          uVar2 = puVar6[1];
          iVar8 = *(int *)(param_2 + 0x44);
          uVar3 = puVar9[1];
          uVar4 = *puVar9;
          piVar10 = (int *)(*(int *)(param_2 + 0x48) + iVar7);
          iVar11 = *piVar10;
          *piVar10 = (int)psVar13 + (uint)uVar2;
          *(ushort **)(*(int *)(param_2 + 0x4c) + iVar7) = puVar6;
          iVar7 = **(int **)(&DAT_089d95d0 + (uint)uVar4 * 4);
          (**(code **)(iVar7 + 0x14))
                    ((float)iVar5,
                     (int)*(int **)(&DAT_089d95d0 + (uint)uVar4 * 4) + (int)*(short *)(iVar7 + 0x10)
                     ,param_1,(int)psVar13 + (uint)uVar2,iVar8 + (uint)uVar3,iVar11);
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 8;
        } while (iVar14 < *(int *)(psVar13 + 2));
      }
      *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0x36) + 1;
      if ((int)(uint)*(byte *)(iVar12 + 0x13) <= (int)*(short *)(param_2 + 0x36)) {
        *(undefined2 *)(param_2 + 0x36) = 0xffff;
        return;
      }
      psVar13 = *(short **)(*(int *)(iVar12 + 0x24) + *(short *)(param_2 + 0x36) * 4);
      sVar1 = *psVar13;
    }
  }
  return;
}

