/* Entry 0x089453F4 | file offset 0x001423CC | FUN_089453f4 | bytes 152 */

undefined4 FUN_089453f4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = *(ushort **)(param_3 + 0x24);
    iVar1 = 0;
    if (*(ushort *)(param_3 + 0x14) != 0) {
      do {
        if (DAT_089d9a88 <= (int)(uint)*puVar2) {
          return 0;
        }
        iVar3 = (uint)*puVar2 * 4;
        if (*(int *)(&DAT_089d9a98 + iVar3) != *(int *)(*(int *)(*(int *)(param_2 + 8) + 4) + iVar3)
           ) {
          return 0;
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(param_3 + 0x14));
    }
  }
  return 1;
}

