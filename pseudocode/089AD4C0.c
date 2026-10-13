/* Entry 0x089AD4C0 | file offset 0x001AA498 | FUN_089ad4c0 | bytes 232 */

undefined4 FUN_089ad4c0(int param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  if (param_2 != param_1) {
    uVar5 = 1;
    if ((int)param_3 < 0) {
      uVar5 = 2;
    }
    if ((param_3 & 0x81) != 0) {
      uVar1 = *(ushort *)(param_2 + 0x1c);
      uVar2 = *(ushort *)(param_2 + 0x1e);
      uVar3 = *(ushort *)(param_2 + 0xc);
      uVar4 = 0x60;
      if (*(int *)(param_2 + 0x10) == 0) {
        uVar4 = 0;
      }
      FUN_089ab938(param_4,uVar5,4,uVar4);
      FUN_089ab938(param_4,uVar5,4,(uint)uVar3 << 2);
      FUN_089ab938(param_4,uVar5,4,(uint)uVar1 * (uint)uVar2);
      return 1;
    }
  }
  return 1;
}

