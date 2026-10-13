/* Entry 0x08858758 | file offset 0x00055730 | FUN_08858758 | bytes 228 */

void FUN_08858758(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x334);
  if (iVar2 != 0) {
    iVar1 = 0;
    iVar3 = *(int *)(param_1 + 0x330);
    if (0 < iVar2) {
      do {
        iVar4 = param_1 + iVar3 * 0x50;
        FUN_08858ae0(param_1,iVar4 + 0x10);
        if ((*(char *)(iVar4 + 0x4d) == '\0') && (iVar3 == *(int *)(param_1 + 0x330))) {
          iVar4 = *(int *)(param_1 + 0x330) + 1;
          *(int *)(param_1 + 0x330) = iVar4;
          if (9 < iVar4) {
            *(undefined4 *)(param_1 + 0x330) = 0;
          }
          *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) + -1;
        }
        iVar3 = iVar3 + 1;
        if (9 < iVar3) {
          iVar3 = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  return;
}

