/* Entry 0x088D37B4 | file offset 0x000D078C | FUN_088d37b4 | bytes 316 */

void FUN_088d37b4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_088d3724();
    if (iVar2 == 0) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        sVar1 = *(short *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 4) * 0x1e + iVar2 + 6);
        if (sVar1 == -1) {
          return;
        }
        FUN_088da0a8(*(undefined4 *)(param_1 + 0x10),sVar1,auStack_60,auStack_20);
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar2);
        if (iVar3 != 0) {
          FUN_0887b778(iVar3,auStack_60);
          FUN_0887b828(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2),auStack_20);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < 6);
    }
    else {
      FUN_088da0a8(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x28),auStack_60,
                   auStack_20);
      if (**(int **)(param_1 + 0x14) != 0) {
        FUN_0887b778(**(int **)(param_1 + 0x14),auStack_60);
        FUN_0887b828(**(undefined4 **)(param_1 + 0x14),auStack_20);
      }
    }
  }
  return;
}

