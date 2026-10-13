/* Entry 0x089B09E8 | file offset 0x001AD9C0 | FUN_089b09e8 | bytes 508 */

void FUN_089b09e8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_1 != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x22);
    iVar11 = 0;
    if (uVar7 != 0) {
      do {
        iVar5 = *(int *)(param_1 + 0x10);
        while (iVar5 = iVar5 + iVar11 * 0x10, *(short *)(iVar5 + 8) != 0) {
          iVar9 = 0;
          do {
            iVar6 = *(int *)(iVar5 + 4);
            while( true ) {
              iVar6 = iVar6 + iVar9 * 0x40;
              iVar2 = FUN_089b1230(iVar6,1,0);
              iVar10 = *(int *)(iVar6 + 4);
              if (iVar2 == 0) break;
              if (iVar10 == 0) {
                uVar1 = *(ushort *)(iVar5 + 8);
                goto LAB_089b087c;
              }
              iVar3 = *(int *)(iVar2 + 0x20) + -1;
              *(int *)(iVar2 + 0x20) = iVar3;
              if (iVar3 != 0) break;
              FUN_089b12a4(iVar6,iVar2);
              iVar3 = *(int *)(iVar6 + 0x34);
              if (iVar3 == 0) {
                uVar8 = *(undefined4 *)(iVar10 + 8);
                *(int *)(iVar6 + 0x34) = iVar2;
                *(undefined4 *)(iVar2 + 4) = 0;
                FUN_089b12f4(iVar6,uVar8);
                uVar1 = *(ushort *)(iVar5 + 8);
              }
              else {
                iVar4 = *(int *)(iVar3 + 4);
                for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
                  iVar3 = iVar4;
                }
                uVar8 = *(undefined4 *)(iVar10 + 8);
                *(int *)(iVar3 + 4) = iVar2;
                *(undefined4 *)(iVar2 + 4) = 0;
                FUN_089b12f4(iVar6,uVar8);
                uVar1 = *(ushort *)(iVar5 + 8);
              }
              iVar9 = iVar9 + 1;
              if ((int)(uint)uVar1 <= iVar9) {
                uVar1 = *(ushort *)(param_1 + 0x22);
                goto LAB_089b0924;
              }
              iVar6 = *(int *)(iVar5 + 4);
            }
            uVar1 = *(ushort *)(iVar5 + 8);
LAB_089b087c:
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)uVar1);
          uVar1 = *(ushort *)(param_1 + 0x22);
LAB_089b0924:
          uVar7 = (uint)uVar1;
          iVar11 = iVar11 + 1;
          if ((int)uVar7 <= iVar11) goto code_r0x089b0944;
          iVar5 = *(int *)(param_1 + 0x10);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar7);
    }
code_r0x089b0944:
    iVar11 = 0;
    if (*(short *)(param_1 + 0x26) != 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      while( true ) {
        FUN_089b07b4(iVar5 + iVar11 * 0x10,0xffff);
        iVar11 = iVar11 + 1;
        if ((int)(uint)*(ushort *)(param_1 + 0x26) <= iVar11) break;
        iVar5 = *(int *)(param_1 + 0x18);
      }
      return;
    }
  }
  return;
}

