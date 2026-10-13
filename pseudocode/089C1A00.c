/* Entry 0x089C1A00 | file offset 0x001BE9D8 | FUN_089c1a00 | bytes 304 */

undefined4 FUN_089c1a00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_09af7204 == 0) {
    DAT_09af849c = &DAT_09af720c;
    DAT_09af8498 = &DAT_09af727c;
    sceKernelMemset(&DAT_09af808c,0,0x200);
    sceKernelMemset(&DAT_09af828c,0,0x200);
    DAT_09af8490 = sceAudioChReserve(0xffffffff,0x1c0,0);
    if (-1 < DAT_09af8490) {
      iVar3 = 0;
      iVar2 = 0;
      while( true ) {
        iVar1 = sceAudioChReserve(0xffffffff,0x100,0);
        *(int *)((int)&DAT_09af84a4 + iVar2) = iVar1;
        if (iVar1 < 0) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar3 * 4;
        if (2 < iVar3) {
          DAT_09af7204 = 1;
          return 0;
        }
      }
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        sceAudioChRelease(iVar3);
      }
      sceAudioChRelease(DAT_09af8490);
    }
  }
  return 0x80440001;
}

