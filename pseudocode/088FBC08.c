/* Entry 0x088FBC08 | file offset 0x000F8BE0 | FUN_088fbc08 | bytes 184 */

void FUN_088fbc08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 4;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar3 + 0xef0);
    if (iVar1 != 0) {
      FUN_088fc87c(param_1,iVar1);
      if (*(int *)(*(int *)(param_1 + 0x30) + iVar3 + 0xef0) != 0) {
        FUN_0887ba5c();
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 + 0xef0) = 0;
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0xc);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(undefined2 *)(*(int *)(param_1 + 0x30) + iVar2 + 0xf6a) = 0xffff;
    iVar2 = iVar2 + 2;
  } while (iVar3 < 9);
  return;
}

