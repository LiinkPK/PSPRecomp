/* Entry 0x089B16D0 | file offset 0x001AE6A8 | FUN_089b16d0 | bytes 344 */

int FUN_089b16d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a0 [112];
  
  if (param_1 != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 8);
    iVar6 = uVar4 + 1;
    FUN_089ab7a0(auStack_a0);
    FUN_089acf1c(iVar6,auStack_a0);
    if (uVar4 != 0) {
      uVar5 = 0;
      iVar1 = iVar7;
      do {
        uVar5 = uVar5 + 1;
        FUN_089ad420(0,iVar1,1,auStack_a0);
        iVar1 = iVar1 + 0x40;
      } while (uVar4 != uVar5);
    }
    iVar1 = FUN_089abd28(auStack_a0);
    if (iVar1 != 0) {
      iVar1 = FUN_089ad124(iVar6,auStack_a0);
      if (uVar4 != 0) {
        uVar5 = 0;
        iVar2 = iVar7;
        iVar3 = iVar1;
        do {
          uVar5 = uVar5 + 1;
          FUN_089adfe0(iVar3,iVar2,1,auStack_a0);
          iVar3 = iVar3 + 0x40;
          iVar2 = iVar2 + 0x40;
        } while (uVar4 != uVar5);
      }
      FUN_089abca0(auStack_a0);
      FUN_089ac68c(iVar7,uVar4);
      iVar7 = iVar1 + uVar4 * 0x40;
      *(short *)(param_1 + 0xc) = (short)iVar6;
      *(int *)(param_1 + 8) = iVar1;
      FUN_089b1644(iVar7,param_2);
      return iVar7;
    }
  }
  return 0;
}

