/* Entry 0x08898654 | file offset 0x0009562C | FUN_08898654 | bytes 296 */

int FUN_08898654(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar6 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 0x14);
    iVar1 = -1;
    iVar4 = iVar3;
    for (; iVar2 = iVar3 / 2, iVar1 != iVar2; iVar3 = iVar3 + iVar2) {
      iVar1 = FUN_08935970(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 4),param_2 + 4);
      if (iVar1 == 0) {
        return (int)(((((int)*(short *)(*(int *)(*(int *)(param_1 + 0x74) + iVar2 * 4) + 0x24) &
                       0xfff0U) >> 4 ^ 0x800) - 0x800) * 0x10000) >> 0x10;
      }
      iVar5 = iVar2;
      iVar3 = iVar6;
      if (iVar1 < 0) {
        iVar5 = iVar4;
        iVar6 = iVar2;
        iVar3 = iVar4;
      }
      iVar1 = iVar2;
      iVar4 = iVar5;
    }
  }
  return -1;
}

