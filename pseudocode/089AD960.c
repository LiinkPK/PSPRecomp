/* Entry 0x089AD960 | file offset 0x001AA938 | FUN_089ad960 | bytes 88 */

undefined4 FUN_089ad960(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 != param_1) && ((param_3 & 0xe1) != 0)) {
      FUN_089ad89c(*(undefined4 *)(param_2 + 4),*(undefined2 *)(param_2 + 8),param_3 & 0xfffffffe);
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

