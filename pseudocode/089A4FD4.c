/* Entry 0x089A4FD4 | file offset 0x001A1FAC | FUN_089a4fd4 | bytes 60 */

undefined4 FUN_089a4fd4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_09af7178 != 0) {
    uVar1 = __sceSasSetKeyOn(&DAT_09b6fec0,param_1);
  }
  return uVar1;
}

