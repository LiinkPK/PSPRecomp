/* Entry 0x088C1A5C | file offset 0x000BEA34 | FUN_088c1a5c | bytes 140 */

uint FUN_088c1a5c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_088c7e98((int)*(short *)(*(int *)(param_1 + 4) + 0x30 + iVar2));
      if (iVar1 != 0) {
        param_2 = param_2 & ~*(uint *)(iVar1 + 0x20);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 2;
    } while (iVar3 < 2);
  }
  return param_2;
}

