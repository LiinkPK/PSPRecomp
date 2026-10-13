/* Entry 0x088FBF8C | file offset 0x000F8F64 | FUN_088fbf8c | bytes 132 */

void FUN_088fbf8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xe;
  iVar1 = 0x38;
  do {
    FUN_088fc87c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0xef0));
    if (*(int *)(*(int *)(param_1 + 0x30) + iVar1 + 0xef0) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0xef0) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x13);
  return;
}

