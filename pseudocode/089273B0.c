/* Entry 0x089273B0 | file offset 0x00124388 | FUN_089273b0 | bytes 104 */

int FUN_089273b0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (param_3 != 0) {
    psVar1 = (short *)(iVar2 + 0x10);
    iVar3 = 0;
    iVar4 = 1;
    if (0 < *psVar1) {
      do {
        if (*(char *)(iVar2 + 0x17) == param_2) {
          if (iVar4 == param_3) {
            return (int)*(char *)(iVar2 + 0x14);
          }
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 8;
      } while (iVar3 < *psVar1);
    }
  }
  return -1;
}

