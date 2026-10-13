/* Entry 0x08927214 | file offset 0x001241EC | FUN_08927214 | bytes 84 */

int FUN_08927214(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  psVar1 = (short *)(iVar3 + 0x10);
  iVar2 = 0;
  if (0 < *psVar1) {
    do {
      if ((*(char *)(iVar3 + 0x16) == param_2) && (*(short *)(iVar3 + 0x1c) != -1)) {
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x4e;
    } while (iVar4 < *psVar1);
  }
  return iVar2;
}

