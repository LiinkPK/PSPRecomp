/* Entry 0x0894A104 | file offset 0x001470DC | FUN_0894a104 | bytes 424 */

undefined4 FUN_0894a104(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(int *)(param_1 + 0x8c) = param_3;
  *(int *)(param_3 + 0x40) = param_4;
  iVar8 = *(int *)(param_4 + 0x20);
  iVar9 = 0;
  if (0 < *(int *)(iVar8 + 4)) {
    iVar10 = 0;
    do {
      puVar3 = (ushort *)(*(int *)(iVar8 + 8) + iVar10);
      iVar7 = (uint)*puVar3 * 4;
      puVar5 = *(ushort **)(*(int *)(param_4 + 0x1c) + iVar7);
      *(ushort **)(param_1 + 0x90) = puVar5;
      iVar4 = *(int *)(param_3 + 0x44);
      uVar1 = puVar5[1];
      uVar2 = *puVar5;
      iVar6 = iVar8 + (uint)puVar3[1];
      *(int *)(*(int *)(param_3 + 0x48) + iVar7) = iVar6;
      *(undefined4 *)(param_1 + 0x98) = param_5;
      iVar7 = **(int **)(&DAT_089d95d0 + (uint)uVar2 * 4);
      iVar4 = (**(code **)(iVar7 + 0xc))
                        ((int)*(int **)(&DAT_089d95d0 + (uint)uVar2 * 4) +
                         (int)*(short *)(iVar7 + 8),param_1,iVar6,iVar4 + (uint)uVar1);
      if (iVar4 == 0) {
        iVar10 = 0;
        if (-1 < iVar9) {
          iVar4 = 0;
          do {
            puVar3 = (ushort *)(*(int *)(iVar8 + 8) + iVar4);
            puVar5 = *(ushort **)(*(int *)(param_4 + 0x1c) + (uint)*puVar3 * 4);
            *(ushort **)(param_1 + 0x90) = puVar5;
            iVar6 = **(int **)(&DAT_089d95d0 + (uint)*puVar5 * 4);
            (**(code **)(iVar6 + 0x2c))
                      ((int)*(int **)(&DAT_089d95d0 + (uint)*puVar5 * 4) +
                       (int)*(short *)(iVar6 + 0x28),param_1,iVar8 + (uint)puVar3[1],
                       *(int *)(param_3 + 0x44) + (uint)puVar5[1]);
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + 8;
          } while (iVar10 <= iVar9);
        }
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 8;
    } while (iVar9 < *(int *)(iVar8 + 4));
  }
  return 1;
}

