/* Entry 0x089B04D8 | file offset 0x001AD4B0 | FUN_089b04d8 | bytes 228 */

/* WARNING: Removing unreachable block (ram,0x089b0428) */

void FUN_089b04d8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x22);
    iVar8 = 0;
    if (uVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      while( true ) {
        iVar1 = iVar1 + iVar8 * 0x10;
        uVar4 = (uint)*(ushort *)(iVar1 + 8);
        if (uVar4 != 0) {
          iVar6 = 0;
          do {
            iVar7 = *(int *)(iVar1 + 4) + iVar6 * 0x40;
            iVar3 = *(int *)(iVar7 + 0x34);
            if (iVar3 != 0) {
              do {
                iVar5 = *(int *)(iVar3 + 4);
                FUN_089ac3dc(iVar3,1);
                iVar3 = iVar5;
              } while (iVar5 != 0);
              uVar4 = (uint)*(ushort *)(iVar1 + 8);
            }
            iVar6 = iVar6 + 1;
            *(undefined4 *)(iVar7 + 0x34) = 0;
          } while (iVar6 < (int)uVar4);
          uVar2 = (uint)*(ushort *)(param_1 + 0x22);
        }
        iVar8 = iVar8 + 1;
        if ((int)uVar2 <= iVar8) break;
        iVar1 = *(int *)(param_1 + 0x10);
      }
    }
  }
  return;
}

