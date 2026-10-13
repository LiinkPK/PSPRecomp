/* Entry 0x08927268 | file offset 0x00124240 | FUN_08927268 | bytes 100 */

short FUN_08927268(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  psVar1 = (short *)(iVar4 + 0x10);
  iVar3 = 0;
  if (0 < *psVar1) {
    do {
      if ((*(char *)(iVar4 + 0x16) == param_2) && (*(short *)(iVar4 + 0x1c) != -1)) {
        if (iVar3 == param_3) {
          return *(short *)(iVar4 + 0x1c);
        }
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x4e;
    } while (iVar2 < *psVar1);
  }
  return 0;
}

