/* Entry 0x08884770 | file offset 0x00081748 | FUN_08884770 | bytes 116 */

undefined4 FUN_08884770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  iVar2 = param_1;
  while( true ) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      return 1;
    }
    if ((int)*(short *)(*(int *)(iVar2 + 0xc) + 0xc) !=
        (uint)*(ushort *)(&DAT_089c9f72 + *(int *)(param_1 + 0x18) * 0xc + iVar1)) break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 6;
    if (1 < iVar3) {
      return 1;
    }
  }
  return 0;
}

