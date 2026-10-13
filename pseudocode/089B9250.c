/* Entry 0x089B9250 | file offset 0x001B6228 | FUN_089b9250 | bytes 300 */

void FUN_089b9250(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if (param_1 != 0) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x20);
    puVar7 = *(undefined2 **)(param_1 + 0x54);
    do {
      puVar8 = puVar7;
      if (uVar9 != 0) {
        iVar2 = *(int *)(param_1 + 0xc);
        iVar5 = 0;
        do {
          while( true ) {
            uVar4 = 2;
            if (*(short *)(iVar2 + 0x18) != 0) {
              uVar4 = (uint)*(ushort *)(iVar2 + 0x1e);
            }
            iVar2 = iVar2 + 0x100;
            if (uVar4 != uVar10) break;
            *puVar8 = (short)iVar5;
            iVar5 = iVar5 + 1;
            uVar9 = (uint)*(ushort *)(param_1 + 0x20);
            puVar8 = puVar8 + 1;
            if ((int)uVar9 <= iVar5) goto LAB_089b92cc;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar9);
      }
LAB_089b92cc:
      if (uVar10 == 0) {
        *(short *)(param_1 + 0x58) = (short)((int)puVar8 - (int)puVar7 >> 1);
      }
      else if (uVar10 == 1) {
        *(short *)(param_1 + 0x5a) = (short)((int)puVar8 - (int)puVar7 >> 1);
      }
      uVar10 = uVar10 + 1;
      puVar7 = puVar8;
    } while (uVar10 != 3);
    uVar10 = 0;
    if (uVar9 != 0) {
      iVar5 = *(int *)(param_1 + 0xc);
      iVar2 = iVar5;
      do {
        *(undefined2 *)(iVar2 + 0x38) = 0;
        uVar1 = *(ushort *)(iVar2 + 0x42) & 0xfffc;
        iVar6 = iVar5 + *(short *)(iVar2 + 0x40) * 0x100;
        *(ushort *)(iVar2 + 0x42) = uVar1;
        if (-1 < *(short *)(iVar2 + 0x40)) {
          *(ushort *)(iVar2 + 0x42) = uVar1 | 2;
          iVar3 = iVar5 + (uint)*(ushort *)(iVar6 + 0x38) * 0x100;
          *(ushort *)(iVar6 + 0x42) = *(ushort *)(iVar6 + 0x42) | 1;
          if (*(ushort *)(iVar6 + 0x38) != 0) {
            *(ushort *)(iVar3 + 0x42) = *(ushort *)(iVar3 + 0x42) & 0xfffd;
          }
          *(short *)(iVar6 + 0x38) = (short)uVar10;
        }
        uVar10 = uVar10 + 1;
        iVar2 = iVar2 + 0x100;
      } while (uVar10 != uVar9);
    }
  }
  return;
}

