/* Entry 0x089B7C3C | file offset 0x001B4C14 | FUN_089b7c3c | bytes 376 */

undefined4 FUN_089b7c3c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 != 0) && (-1 < param_2)) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x28);
    iVar6 = *(int *)(param_1 + 0x1c);
    if ((int)uVar5 < param_2) {
      iVar1 = FUN_089ad0a0(param_2 + 1);
      if (iVar1 == 0) {
        return 0;
      }
      if (uVar5 != 0) {
        uVar2 = 0;
        iVar3 = iVar6;
        iVar4 = iVar1;
        do {
          uVar2 = uVar2 + 1;
          FUN_089aee80(iVar4,iVar3,0);
          iVar4 = iVar4 + 0x30;
          iVar3 = iVar3 + 0x30;
        } while (uVar5 != uVar2);
      }
      if (iVar6 != 0) {
        FUN_089aee80(iVar1 + param_2 * 0x30,iVar6 + uVar5 * 0x30,0);
      }
      FUN_089acc90(iVar6,uVar5 + 1);
      *(short *)(param_1 + 0x28) = (short)param_2;
      iVar6 = iVar1;
    }
    else {
      iVar1 = iVar6 + param_2 * 0x30;
      FUN_089aee80(iVar1,iVar6 + uVar5 * 0x30,0);
      FUN_089acc90(iVar1 + 0x30,uVar5 - param_2);
      *(short *)(param_1 + 0x28) = (short)param_2;
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    return 1;
  }
  return 0;
}

