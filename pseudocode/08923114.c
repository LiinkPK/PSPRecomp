/* Entry 0x08923114 | file offset 0x001200EC | FUN_08923114 | bytes 148 */

undefined4 FUN_08923114(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 + 0x74) != 0) {
      iVar1 = FUN_089227d8();
      if ((0 < iVar1) && (iVar1 < 4)) {
        return *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 + 0x74);
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    if (0xf < iVar3) {
      return 0;
    }
  } while( true );
}

