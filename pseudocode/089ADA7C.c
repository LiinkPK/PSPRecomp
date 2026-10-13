/* Entry 0x089ADA7C | file offset 0x001AAA54 | FUN_089ada7c | bytes 196 */

undefined4 FUN_089ada7c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (((param_3 & 0x201) != 0) && (FUN_089acf1c(param_2,param_4), 0 < param_2)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_089ad420(0,param_1,param_3,param_4);
        param_1 = param_1 + 0x40;
      } while (param_2 != iVar1);
    }
    return 1;
  }
  return 0;
}

