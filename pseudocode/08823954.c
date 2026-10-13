/* Entry 0x08823954 | file offset 0x0002092C | FUN_08823954 | bytes 272 */

void FUN_08823954(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  
  iVar4 = 0;
  iVar5 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  if (0 < iVar5) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x28) + iVar3;
      if ((*(byte *)(iVar2 + 299) & 2) == 0) {
        FUN_089a38fc(auStack_40,iVar2 + 0x30,iVar2 + 0x80);
        FUN_089a3868(iVar2 + 0x80,iVar2 + 0x30);
        iVar1 = FUN_08822d30(param_1);
        if (iVar1 == 1) {
          local_3c = 0;
        }
        FUN_089a3f68(iVar2 + 0xb0,param_2,auStack_40);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x130;
    } while (iVar4 < iVar5);
  }
  return;
}

