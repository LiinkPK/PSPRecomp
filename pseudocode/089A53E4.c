/* Entry 0x089A53E4 | file offset 0x001A23BC | FUN_089a53e4 | bytes 132 */

int FUN_089a53e4(undefined4 param_1)

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
      iVar2 = __sceSasRevType(&DAT_09b6fec0,param_1);
    }
  }
  return iVar2;
}

