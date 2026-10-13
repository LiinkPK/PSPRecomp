/* Entry 0x089BBC88 | file offset 0x001B8C60 | FUN_089bbc88 | bytes 204 */

undefined4 FUN_089bbc88(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  if (param_2 != param_1) {
    iVar1 = FUN_089bb67c(param_2,1);
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = param_3 | 2;
    }
    uVar2 = uVar2 & 0xfffffffe;
    if (iVar1 != 0) {
      FUN_089bbbc4(*(undefined4 *)(param_2 + 0xc),1,uVar2,param_4);
      FUN_089bbae0(*(undefined4 *)(param_2 + 0x10),1,uVar2,param_4);
      FUN_089bb6d8(*(undefined4 *)(param_2 + 0x14),*(byte *)(param_2 + 0x18) + 1,uVar2,param_4);
      return 1;
    }
  }
  return 1;
}

