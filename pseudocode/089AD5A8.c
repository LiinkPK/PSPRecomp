/* Entry 0x089AD5A8 | file offset 0x001AA580 | FUN_089ad5a8 | bytes 196 */

undefined4 FUN_089ad5a8(int param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 == param_1) || ((param_3 & 0x11) == 0)) {
      return 1;
    }
    uVar1 = *(ushort *)(param_2 + 0x1a);
    uVar2 = 0x40;
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar2 = 0;
    }
    FUN_089ab938(param_4,0,4,(uint)*(ushort *)(param_2 + 0x18) << 2);
    FUN_089ab938(param_4,0,0x10,(uint)uVar1 << 2);
    FUN_089ab938(param_4,0,0x40,uVar2);
    uVar2 = 1;
  }
  return uVar2;
}

