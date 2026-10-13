/* Entry 0x089ADB40 | file offset 0x001AAB18 | FUN_089adb40 | bytes 88 */

undefined4 FUN_089adb40(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 != param_1) && ((param_3 & 0x301) != 0)) {
      FUN_089ada7c(*(undefined4 *)(param_2 + 8),*(undefined2 *)(param_2 + 0xc),param_3 & 0xfffffffe)
      ;
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

