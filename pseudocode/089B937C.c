/* Entry 0x089B937C | file offset 0x001B6354 | FUN_089b937c | bytes 144 */

void FUN_089b937c(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = 0;
  if (*(ushort *)(param_1 + 0x28) != 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar6 = 0;
    uVar1 = 0;
    do {
      uVar4 = (uint)*(ushort *)(iVar5 + 0xc);
      if (uVar4 != 0) {
        iVar2 = *(int *)(iVar5 + 4);
        uVar3 = 0;
        do {
          while( true ) {
            uVar3 = uVar3 + 1;
            if ((*(ushort *)(iVar2 + 2) & 0x100) != 0) break;
            uVar1 = uVar1 | *(ushort *)(iVar2 + 2) & 0x200;
            iVar2 = iVar2 + 0x10;
            if (uVar3 == uVar4) goto LAB_089b93e4;
          }
          uVar1 = uVar1 | 0x100;
          iVar2 = iVar2 + 0x10;
        } while (uVar3 != uVar4);
      }
LAB_089b93e4:
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x30;
    } while (uVar6 != *(ushort *)(param_1 + 0x28));
  }
  *(ushort *)(param_1 + 2) = uVar1 | *(ushort *)(param_1 + 2) & 0xfcff;
  return;
}

