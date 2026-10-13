/* Entry 0x089ADC5C | file offset 0x001AAC34 | FUN_089adc5c | bytes 156 */

undefined4 FUN_089adc5c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_3 & 0xf0401) == 0) {
    if (((param_3 & 2) == 0) || (iVar3 = 0, param_2 < 1)) {
      return 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 4);
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar1 = FUN_089bcd58(uVar2);
      if (iVar1 != 0) break;
      if (param_2 == iVar3) {
        return 0;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      param_1 = param_1 + 0x10;
    }
  }
  return 1;
}

