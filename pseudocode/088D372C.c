/* Entry 0x088D372C | file offset 0x000D0704 | FUN_088d372c | bytes 136 */

void FUN_088d372c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x14) + iVar1) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 6);
  return;
}

