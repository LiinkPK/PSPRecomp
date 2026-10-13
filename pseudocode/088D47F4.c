/* Entry 0x088D47F4 | file offset 0x000D17CC | FUN_088d47f4 | bytes 88 */

void FUN_088d47f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x10) = iVar1;
    }
    else if (*(int *)(param_1 + 0x10) + iVar2 <= iVar1) {
      iVar3 = 0;
      if (iVar2 <= iVar1) {
        iVar3 = (iVar1 - iVar2) + 1;
      }
      *(int *)(param_1 + 0x10) = iVar3;
    }
  }
  return;
}

