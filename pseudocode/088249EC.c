/* Entry 0x088249EC | file offset 0x000219C4 | FUN_088249ec | bytes 188 */

void FUN_088249ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [16];
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
    do {
      iVar1 = *(int *)(param_1 + 0x28) + iVar2;
      FUN_089a38fc(auStack_20,iVar1 + 0x30,iVar1 + 0x80);
      iVar1 = *(int *)(param_1 + 0x28) + iVar2;
      FUN_089a3868(iVar1 + 0x80,iVar1 + 0x30);
      iVar1 = *(int *)(param_1 + 0x28) + iVar2 + 0x90;
      FUN_089a38c4(iVar1,iVar1,auStack_20);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x130;
    } while (iVar3 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
  }
  return;
}

