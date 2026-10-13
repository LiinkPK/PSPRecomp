/* Entry 0x088846AC | file offset 0x00081684 | FUN_088846ac | bytes 144 */

undefined4 FUN_088846ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  iVar3 = param_1;
  do {
    iVar2 = *(int *)(iVar3 + 0xc);
    if (iVar2 != 0) {
      if ((int)*(short *)(iVar2 + 0xc) !=
          (uint)*(ushort *)(&DAT_089c9f74 + *(int *)(param_1 + 0x18) * 0xc + iVar1)) {
        return 1;
      }
      if ((*(ushort *)(iVar2 + 0x20) & 0x20) == 0) {
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 6;
    if (1 < iVar4) {
      return 0;
    }
  } while( true );
}

