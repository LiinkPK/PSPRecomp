/* Entry 0x089272CC | file offset 0x001242A4 | FUN_089272cc | bytes 116 */

short FUN_089272cc(int param_1,int param_2,short param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  psVar1 = (short *)(iVar2 + 0x10);
  sVar4 = 0;
  if (0 < *psVar1) {
    do {
      if ((*(char *)(iVar2 + 0x16) == param_2) && (*(short *)(iVar2 + 0x1c) != -1)) {
        if (*(short *)(iVar2 + 0x1a) == param_3) {
          return sVar4;
        }
        sVar4 = sVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x4e;
    } while (iVar3 < *psVar1);
  }
  return 0;
}

