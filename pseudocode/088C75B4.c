/* Entry 0x088C75B4 | file offset 0x000C458C | FUN_088c75b4 | bytes 76 */

int FUN_088c75b4(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc30)) {
    iVar2 = 0;
    psVar1 = param_1;
    do {
      if (*psVar1 == param_2) {
        return (int)param_1 + iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x138;
      psVar1 = psVar1 + 0x9c;
    } while (iVar3 < *(int *)(param_1 + 0xc30));
  }
  return 0;
}

