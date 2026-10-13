/* Entry 0x08935AF8 | file offset 0x00132AD0 | FUN_08935af8 | bytes 88 */

char * FUN_08935af8(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = param_1;
  cVar1 = *param_1;
  while (iVar2 = param_3 + -1, cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  while( true ) {
    iVar4 = iVar2;
    if (param_3 == 0) {
      return pcVar3;
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    param_3 = iVar4;
    iVar2 = iVar4 + -1;
    if (iVar4 == 0) {
      *param_1 = '\0';
    }
  }
  return pcVar3;
}

