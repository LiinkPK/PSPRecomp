/* Entry 0x088242EC | file offset 0x000212C4 | FUN_088242ec | bytes 228 */

void FUN_088242ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [16];
  
  iVar3 = 0;
  iVar4 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  if (0 < iVar4) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x28) + iVar2;
      if ((*(byte *)(iVar1 + 299) & 2) == 0) {
        FUN_089a3ebc(auStack_60);
        FUN_089a4124(*(undefined4 *)(iVar1 + 0x118),auStack_60,auStack_60);
        FUN_089a3fb8(auStack_60,auStack_60,iVar1);
        FUN_089a3868(auStack_30,iVar1 + 0x90);
        FUN_089a3fb8(iVar1 + 0x40,*(undefined4 *)(param_1 + 0x24),auStack_60);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x130;
    } while (iVar3 < iVar4);
  }
  return;
}

