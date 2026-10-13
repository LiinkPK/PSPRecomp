/* Entry 0x089A504C | file offset 0x001A2024 | FUN_089a504c | bytes 88 */

undefined4 FUN_089a504c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_09af7178 != 0) {
    uVar1 = 0x80420010;
    if (param_1 < 0x20) {
      uVar1 = __sceSasSetPause(&DAT_09b6fec0,1 << (param_1 & 0x1f),param_2);
    }
  }
  return uVar1;
}

