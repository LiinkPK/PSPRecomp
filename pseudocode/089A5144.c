/* Entry 0x089A5144 | file offset 0x001A211C | FUN_089a5144 | bytes 80 */

undefined4 FUN_089a5144(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if ((DAT_09af7178 != 0) && (uVar1 = 0x80420012, param_2 != 0)) {
    uVar1 = __sceSasSetPitch(&DAT_09b6fec0,param_1,param_2);
  }
  return uVar1;
}

