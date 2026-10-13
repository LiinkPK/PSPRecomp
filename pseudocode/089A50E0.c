/* Entry 0x089A50E0 | file offset 0x001A20B8 | FUN_089a50e0 | bytes 100 */

undefined4
FUN_089a50e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_09af7178 != 0) {
    uVar1 = __sceSasSetVolume(&DAT_09b6fec0,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

