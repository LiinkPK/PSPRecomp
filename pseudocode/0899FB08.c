/* Entry 0x0899FB08 | file offset 0x0019CAE0 | FUN_0899fb08 | bytes 220 */

void FUN_0899fb08(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  if (DAT_09af6d28 != (code *)0x0) {
    (*DAT_09af6d28)();
  }
  DAT_09af680c = param_1;
  DAT_09af6810 = param_5;
  DAT_09af6818 = param_4;
  DAT_09af6824 = param_2;
  DAT_09af6828 = param_3;
  sceDisplaySetMode(0,param_2,param_3);
  if (DAT_09af67f0 == 1) {
    sceDisplaySetFrameBuf(DAT_09af67fc + DAT_09af6818,param_5,param_1,1);
  }
  return;
}

