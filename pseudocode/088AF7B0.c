/* Entry 0x088AF7B0 | file offset 0x000AC788 | FUN_088af7b0 | bytes 184 */

int FUN_088af7b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = 0;
  iVar2 = 0;
  if (*(int *)(iVar1 + 0xe6c) != 0) {
    do {
      iVar4 = 0;
      iVar3 = 0;
      do {
        iVar1 = FUN_08935b50(iVar1 + iVar3,iVar1 + iVar2 + 0xea8,0x14);
        if (iVar1 == 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x14;
        iVar1 = *(int *)(param_1 + 0xc);
      } while (iVar4 < 100);
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x48;
    } while (uVar5 < *(uint *)(iVar1 + 0xe6c));
  }
  return -1;
}

