/* Entry 0x0899BC64 | file offset 0x00198C3C | FUN_0899bc64 | bytes 636 */

undefined4 FUN_0899bc64(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  
  uVar6 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_0899bee0();
    iVar3 = FUN_0899ea2c(param_2,6);
    if (iVar3 < 1) {
      iVar3 = *(int *)(param_2 + 4);
    }
    else {
      iVar3 = FUN_0899b75c(iVar3 << 2);
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(param_2 + 4);
    }
    puVar8 = (ushort *)(param_2 + *(int *)(param_2 + 8));
    if (puVar8 < (ushort *)(param_2 + iVar3)) {
      iVar7 = *(int *)(puVar8 + 6);
      do {
        uVar1 = *puVar8;
        iVar9 = *(int *)(puVar8 + 4) - iVar7;
        iVar7 = (int)puVar8 + iVar7;
        if (uVar1 == 5) {
          if (*(int *)(param_1 + 0x10) == 0) {
            iVar4 = FUN_0899b794(iVar9);
            if (iVar4 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0x10) = iVar4;
            FUN_08935524(iVar4,iVar7,iVar9);
            *(undefined2 *)(iVar4 + 2) = 1;
            piVar2 = (int *)(iVar4 + *(int *)(iVar4 + 0x18));
            for (iVar7 = (uint)*(ushort *)(iVar4 + 0x2a) * (uint)*(ushort *)(iVar4 + 0x2e);
                0 < iVar7; iVar7 = iVar7 + -1) {
              *piVar2 = *piVar2 + iVar4;
              piVar2 = piVar2 + 1;
            }
            if (0x100 < *(ushort *)(iVar4 + 8)) {
              return 0;
            }
            goto LAB_0899bd20;
          }
          iVar7 = *(int *)(puVar8 + 2);
        }
        else if (uVar1 < 6) {
          if (uVar1 == 4) {
            if (*(int *)(param_1 + 0xc) == 0) {
              iVar4 = FUN_0899b794(iVar9);
              if (iVar4 == 0) {
                return 0;
              }
              *(int *)(param_1 + 0xc) = iVar4;
              FUN_08935524(iVar4,iVar7,iVar9);
              *(undefined2 *)(iVar4 + 2) = 1;
              piVar2 = (int *)(iVar4 + *(int *)(iVar4 + 0x18));
              for (iVar7 = (uint)*(ushort *)(iVar4 + 0x2a) * (uint)*(ushort *)(iVar4 + 0x2e);
                  0 < iVar7; iVar7 = iVar7 + -1) {
                *piVar2 = *piVar2 + iVar4;
                piVar2 = piVar2 + 1;
              }
              if (0x200 < *(ushort *)(iVar4 + 8)) {
                return 0;
              }
              if (0x200 < *(ushort *)(iVar4 + 10)) {
                return 0;
              }
              iVar7 = *(int *)(puVar8 + 2);
            }
            else {
              iVar7 = *(int *)(puVar8 + 2);
            }
          }
          else {
LAB_0899bd20:
            iVar7 = *(int *)(puVar8 + 2);
          }
        }
        else {
          if (uVar1 == 6) {
            iVar4 = FUN_0899b75c(iVar9);
            if (iVar4 == 0) {
              return 0;
            }
            iVar5 = *(int *)(param_1 + 0x58);
            *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x54)) = iVar4;
            *(int *)(param_1 + 0x58) = iVar5 + 1;
            FUN_08935524(iVar4,iVar7,iVar9);
            *(undefined2 *)(iVar4 + 2) = 1;
            goto LAB_0899bd20;
          }
          iVar7 = *(int *)(puVar8 + 2);
        }
        puVar8 = (ushort *)((int)puVar8 + iVar7);
        if ((ushort *)(param_2 + iVar3) <= puVar8) break;
        iVar7 = *(int *)(puVar8 + 6);
      } while( true );
    }
    sceKernelDcacheWritebackAll();
    FUN_0899bfe0(param_1);
    uVar6 = 1;
  }
  return uVar6;
}

