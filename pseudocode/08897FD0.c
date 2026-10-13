/* Entry 0x08897FD0 | file offset 0x00094FA8 | FUN_08897fd0 | bytes 272 */

int FUN_08897fd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 8);
    iVar4 = iVar3;
    iVar1 = -1;
    for (; iVar6 = iVar3 / 2, iVar1 != iVar6; iVar3 = iVar3 + iVar6) {
      iVar1 = FUN_08935970(*(undefined4 *)(*(int *)(param_1 + 100) + iVar6 * 4),param_2);
      if (iVar1 == 0) {
        return (int)*(short *)(*(int *)(*(int *)(param_1 + 100) + iVar6 * 4) + 0x22);
      }
      iVar5 = iVar6;
      iVar3 = iVar2;
      if (iVar1 < 0) {
        iVar2 = iVar6;
        iVar5 = iVar4;
        iVar3 = iVar4;
      }
      iVar4 = iVar5;
      iVar1 = iVar6;
    }
  }
  return -1;
}

