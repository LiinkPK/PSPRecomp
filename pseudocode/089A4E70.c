/* Entry 0x089A4E70 | file offset 0x001A1E48 | FUN_089a4e70 | bytes 100 */

undefined4 FUN_089a4e70(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_09af7178 != 0) {
    uVar1 = 0x80420005;
    if ((param_1 != 0) && (uVar1 = 0x80420005, (param_1 & 0x3f) == 0)) {
      uVar1 = __sceSasCoreWithMix(&DAT_09b6fec0,param_1,param_2,param_3);
    }
  }
  return uVar1;
}

