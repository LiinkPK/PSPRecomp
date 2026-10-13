/* Entry 0x089ACDFC | file offset 0x001A9DD4 | FUN_089acdfc | bytes 100 */

short * FUN_089acdfc(short *param_1)

{
  short sVar1;
  
  if ((param_1 != (short *)0x0) &&
     (sVar1 = *param_1, *param_1 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    FUN_089acd20();
    thunk_FUN_089abeac(0,param_1);
    return param_1;
  }
  return param_1;
}

