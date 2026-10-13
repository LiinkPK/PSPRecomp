/* Entry 0x089A4ED4 | file offset 0x001A1EAC | FUN_089a4ed4 | bytes 256 */

int FUN_089a4ed4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = -0x7fbdfeff;
  if ((DAT_09af7178 == 0) && (iVar1 = __sceSasInit(&DAT_09b6fec0,param_1,0x20,0,0xac44), iVar1 == 0)
     ) {
    iVar1 = 0;
    do {
      if (((DAT_09af7178 != 0) && (__sceSasSetPitch(&DAT_09b6fec0,iVar1,0x1000), DAT_09af7178 != 0))
         && (__sceSasSetSimpleADSR(&DAT_09b6fec0,iVar1,0xf,0x5fc0), DAT_09af7178 != 0)) {
        __sceSasSetVolume(&DAT_09b6fec0,iVar1,0,0,0,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
    DAT_09af7178 = 1;
    iVar1 = 0;
  }
  return iVar1;
}

