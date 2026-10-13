/* Entry 0x089A50A4 | file offset 0x001A207C | FUN_089a50a4 | bytes 60 */

undefined4 FUN_089a50a4(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_09af7178 != 0) {
    uVar1 = __sceSasGetPauseFlag(&DAT_09b6fec0);
  }
  return uVar1;
}

