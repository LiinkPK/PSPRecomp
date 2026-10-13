/* Entry 0x089A5350 | file offset 0x001A2328 | FUN_089a5350 | bytes 148 */

int FUN_089a5350(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = -0x7fbdff00;
  if (DAT_09af7178 != 0) {
    if (DAT_09af7178 == 1) {
      iVar2 = __sceSasGetOutputmode(&DAT_09b6fec0);
    }
    bVar1 = iVar2 != 1;
    iVar2 = -0x7fbdffdc;
    if (bVar1) {
      iVar2 = __sceSasRevEVOL(&DAT_09b6fec0,param_1,param_2);
    }
  }
  return iVar2;
}

