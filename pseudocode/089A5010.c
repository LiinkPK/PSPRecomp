/* Entry 0x089A5010 | file offset 0x001A1FE8 | FUN_089a5010 | bytes 60 */

undefined4 FUN_089a5010(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_09af7178 != 0) {
    uVar1 = __sceSasSetKeyOff(&DAT_09b6fec0,param_1);
  }
  return uVar1;
}

