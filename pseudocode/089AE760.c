/* Entry 0x089AE760 | file offset 0x001AB738 | FUN_089ae760 | bytes 284 */

undefined4 FUN_089ae760(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 != param_1) && (iVar2 = FUN_089ad3c4(param_2,1), iVar2 != 0)) {
      uVar3 = param_3 | 2;
      if (param_3 == 0) {
        uVar3 = 0;
      }
      FUN_089ab938(param_4,0,4,(uint)*(ushort *)(param_2 + 0x20) << 1);
      uVar3 = uVar3 & 0xfffffffe;
      FUN_089ad66c(*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0x20),uVar3,param_4);
      FUN_089ad9b8(*(undefined4 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x22),uVar3,param_4);
      FUN_089adb98(*(undefined4 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x24),uVar3,param_4);
      FUN_089adcf8(*(undefined4 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x26),uVar3,param_4);
      FUN_089ae69c(*(undefined4 *)(param_2 + 0x1c),*(ushort *)(param_2 + 0x28) + 1,uVar3,param_4);
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

