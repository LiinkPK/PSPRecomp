/* Entry 0x089B2CCC | file offset 0x001AFCA4 | FUN_089b2ccc | bytes 124 */

undefined4 FUN_089b2ccc(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      param_2 = FUN_089b0f98(iVar1 + param_2 * 0x100);
      param_2 = param_2 & 0xfff;
      if (param_2 == 0xfff) {
        return 0;
      }
      if (param_3 == param_2) break;
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return 1;
}

