/* Entry 0x088B6E14 | file offset 0x000B3DEC | FUN_088b6e14 | bytes 76 */

int FUN_088b6e14(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 8;
    pcVar1 = (char *)(*(int *)(param_1 + 8) + iVar2);
    do {
      if (*pcVar1 <= param_2) {
        return *(int *)(param_1 + 8) + iVar2;
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -8;
      pcVar1 = pcVar1 + -8;
    } while (-1 < iVar3);
  }
  return 0;
}

