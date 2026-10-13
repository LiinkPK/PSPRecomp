/* Entry 0x0894C8C8 | file offset 0x001498A0 | FUN_0894c8c8 | bytes 112 */

undefined4 FUN_0894c8c8(undefined4 param_1,int param_2,short *param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  
  if (*(int *)(param_2 + 0x1e4) != 0) {
    iVar2 = 0;
    uVar1 = (uint)*(ushort *)(*(int *)(param_2 + 0x1cc) + 0x14);
    if (uVar1 != 0) {
      psVar3 = *(short **)(*(int *)(param_2 + 0x1cc) + 0x24);
      do {
        if (*psVar3 == *param_3) {
          return *(undefined4 *)(*(int *)(param_2 + 0x1e4) + iVar2 * 4);
        }
        iVar2 = iVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  return 0;
}

