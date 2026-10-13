/* Entry 0x089AD89C | file offset 0x001AA874 | FUN_089ad89c | bytes 196 */

undefined4 FUN_089ad89c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (((param_3 & 0xc1) != 0) && (FUN_089acfa4(param_2,param_4), 0 < param_2)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_089ad7f4(0,param_1,param_3,param_4);
        param_1 = param_1 + 0x40;
      } while (param_2 != iVar1);
    }
    return 1;
  }
  return 0;
}

