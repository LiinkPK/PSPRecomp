/* Entry 0x08884BC0 | file offset 0x00081B98 | FUN_08884bc0 | bytes 176 */

void FUN_08884bc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x14) * 10;
    if ((int)*(short *)(iVar2 + 0xc) == (uint)*(ushort *)(&DAT_089c9f8a + iVar1)) {
      FUN_088d9f5c(iVar2,*(undefined2 *)(&DAT_089c9f8c + iVar1),1);
    }
    else {
      if (iVar2 != 0) {
        FUN_088da060();
        *(undefined4 *)(param_1 + 4) = 0;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_0887ba5c();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_0887ba5c();
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}

