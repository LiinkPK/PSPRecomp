/* Entry 0x08935D58 | file offset 0x00132D30 | FUN_08935d58 | bytes 96 */

char * FUN_08935d58(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = param_1;
  cVar3 = *param_1;
  while (iVar1 = (int)cVar3, iVar1 != 0) {
    if (((&DAT_089cf591)[iVar1] & 2) != 0) {
      if (((&DAT_089cf591)[iVar1] & 2) != 0) {
        cVar3 = cVar3 + -0x20;
      }
      *param_1 = cVar3;
    }
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  }
  return pcVar2;
}

