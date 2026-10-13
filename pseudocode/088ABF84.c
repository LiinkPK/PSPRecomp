/* Entry 0x088ABF84 | file offset 0x000A8F5C | FUN_088abf84 | bytes 176 */

int FUN_088abf84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar2 = param_1 + 0x8a4;
  if (*(int *)(param_1 + 0x868) != 0) {
    do {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        iVar1 = FUN_08935b50(iVar3,iVar2,0x14);
        if (iVar1 == 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar4 < 0x14);
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x48;
    } while (uVar5 < *(uint *)(param_1 + 0x868));
  }
  return -1;
}

