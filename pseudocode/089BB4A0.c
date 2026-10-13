/* Entry 0x089BB4A0 | file offset 0x001B8478 | FUN_089bb4a0 | bytes 100 */

short * FUN_089bb4a0(short *param_1)

{
  short sVar1;
  
  if ((param_1 != (short *)0x0) &&
     (sVar1 = *param_1, *param_1 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    FUN_089bb3f8();
    thunk_FUN_089bb004(0,param_1);
    return param_1;
  }
  return param_1;
}

