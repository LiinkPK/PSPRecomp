/* Entry 0x089B02F0 | file offset 0x001AD2C8 | FUN_089b02f0 | bytes 268 */

undefined4 FUN_089b02f0(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = 0;
  if ((param_1 != 0) && (uVar2 = 1, (param_2 & 4) != 0)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x22);
    iVar8 = 0;
    if (uVar4 == 0) {
      uVar2 = 1;
    }
    else {
      do {
        iVar6 = *(int *)(param_1 + 0x10) + iVar8 * 0x10;
        if (*(short *)(iVar6 + 8) != 0) {
          iVar7 = 0;
          do {
            iVar5 = *(int *)(iVar6 + 4) + iVar7 * 0x40;
            iVar3 = FUN_089b1230(iVar5,1,0);
            iVar7 = iVar7 + 1;
            iVar5 = *(int *)(iVar5 + 4);
            if ((iVar3 == 0) && (iVar5 != 0)) {
              FUN_089ad730(iVar5,1,0x80000001,param_3);
              uVar1 = *(ushort *)(iVar6 + 8);
            }
            else {
              uVar1 = *(ushort *)(iVar6 + 8);
            }
          } while (iVar7 < (int)(uint)uVar1);
          uVar4 = (uint)*(ushort *)(param_1 + 0x22);
        }
        iVar8 = iVar8 + 1;
        uVar2 = 1;
      } while (iVar8 < (int)uVar4);
    }
  }
  return uVar2;
}

