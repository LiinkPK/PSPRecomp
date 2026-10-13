/* Entry 0x089AE5F8 | file offset 0x001AB5D0 | FUN_089ae5f8 | bytes 164 */

undefined4 FUN_089ae5f8(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 != param_1) && ((param_3 & 0x1803) != 0)) {
      FUN_089ab938(param_4,0,4,(uint)*(ushort *)(param_2 + 0xc) << 1);
      FUN_089ae584(*(undefined4 *)(param_2 + 4),*(undefined2 *)(param_2 + 0xc),param_3 & 0xfffffffe,
                   param_4);
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

