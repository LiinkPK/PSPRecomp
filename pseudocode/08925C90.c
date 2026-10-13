/* Entry 0x08925C90 | file offset 0x00122C68 | FUN_08925c90 | bytes 96 */

int FUN_08925c90(int param_1,char param_2,short param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  psVar1 = (short *)(iVar2 + 0x10);
  iVar3 = 0;
  if (0 < *psVar1) {
    do {
      if ((*(char *)(iVar2 + 0x16) == param_2) && (*(short *)(iVar2 + 0x1a) == param_3)) {
        return iVar2 + 0x14;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x4e;
    } while (iVar3 < *psVar1);
  }
  return 0;
}

