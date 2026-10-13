/* Entry 0x0899F468 | file offset 0x0019C440 | FUN_0899f468 | bytes 316 */

int FUN_0899f468(void)

{
  int iVar1;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  
  iVar1 = -0x7fffffe0;
  if (DAT_09af67e8 == 0) {
    DAT_09af67fc = sceGeEdramGetAddr();
    FUN_089a21ac();
    iVar1 = sceKernelCreateEventFlag("SceGuSignal",0x200,1,0);
    if (-1 < iVar1) {
      local_28 = &LAB_089a2178;
      local_30 = &LAB_089a20f8;
      local_2c = &DAT_09af67b8;
      local_24 = &DAT_09af67b8;
      DAT_09af67e4 = iVar1;
      iVar1 = sceGeSetCallback(&local_30);
      if (iVar1 < 0) {
        sceKernelDeleteEventFlag(DAT_09af67e4,0,0xffffffff,0);
      }
      else {
        DAT_09af6808 = iVar1;
        iVar1 = sceGeListEnQueue(&DAT_089d1510);
        if (-1 < iVar1) {
          DAT_09af6800 = iVar1;
          sceGeListSync(iVar1);
          sceGeDrawSync(0);
          DAT_09af67e8 = 1;
          return 0;
        }
        sceKernelDeleteEventFlag(DAT_09af67e4,0);
        sceGeUnsetCallback(DAT_09af6808);
        DAT_09af6808 = 0xffffffff;
      }
      DAT_09af67e4 = 0xffffffff;
    }
  }
  return iVar1;
}

