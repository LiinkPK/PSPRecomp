/* Entry 0x089ADCF8 | file offset 0x001AACD0 | FUN_089adcf8 | bytes 140 */

undefined4 FUN_089adcf8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar2 = FUN_089adc5c();
    if ((iVar2 != 0) && (FUN_089acef0(param_2,param_4), 0 < param_2)) {
      iVar2 = 1;
      do {
        bVar1 = param_2 != iVar2;
        iVar2 = iVar2 + 1;
      } while (bVar1);
    }
    return 1;
  }
  return 0;
}

