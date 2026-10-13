/* Entry 0x089B940C | file offset 0x001B63E4 | FUN_089b940c | bytes 344 */

void FUN_089b940c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x24);
    iVar9 = 0;
    if (uVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      while( true ) {
        iVar3 = iVar9 * 0x10 + iVar3;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xc);
        if (uVar7 != 0) {
          iVar8 = 0;
          iVar6 = *(int *)(iVar3 + 8);
          while( true ) {
            iVar6 = iVar6 + iVar8 * 0x40;
            uVar5 = *(uint *)(iVar6 + 0x20) & 0xff7fffff;
            *(uint *)(iVar6 + 0x20) = uVar5;
            if (*(int *)(iVar6 + 0x28) == 0) {
              uVar1 = FUN_089b0f00(param_1,*(undefined4 *)(iVar6 + 0x24));
              uVar1 = FUN_089b1828(uVar1);
              iVar2 = FUN_089bcd18(uVar1);
              uVar7 = (uint)*(ushort *)(iVar3 + 0xc);
              if (iVar2 != 0) {
                *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 0x800000;
              }
            }
            else {
              *(uint *)(iVar6 + 0x20) = uVar5 | 0x800000;
            }
            iVar8 = iVar8 + 1;
            if ((int)uVar7 <= iVar8) break;
            iVar6 = *(int *)(iVar3 + 8);
          }
          uVar5 = (uint)*(ushort *)(param_1 + 0x24);
        }
        iVar9 = iVar9 + 1;
        if ((int)uVar5 <= iVar9) break;
        iVar3 = *(int *)(param_1 + 0x14);
      }
    }
    uVar4 = 0;
    if (*(short *)(param_1 + 0x26) != 0) {
      iVar9 = 0;
      uVar4 = 0;
      do {
        iVar3 = iVar9 * 0x10;
        iVar9 = iVar9 + 1;
        iVar3 = FUN_089bcd58(*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x18) + 4));
        if (iVar3 != 0) {
          uVar4 = 0x400;
        }
      } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x26));
    }
    *(ushort *)(param_1 + 2) = uVar4 | *(ushort *)(param_1 + 2) & 0xfbff;
  }
  return;
}

