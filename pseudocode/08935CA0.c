/* Entry 0x08935CA0 | file offset 0x00132C78 | FUN_08935ca0 | bytes 184 */

char * FUN_08935ca0(char *param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  
  if ((param_1 == (char *)0x0) && (param_1 = (char *)*param_3, (char *)*param_3 == (char *)0x0)) {
    return (char *)0x0;
  }
  do {
    pcVar1 = param_1;
    cVar4 = *param_2;
    pcVar5 = param_2;
    while( true ) {
      if (cVar4 == '\0') {
        pcVar5 = pcVar1 + 1;
        if (*pcVar1 == '\0') {
          *param_3 = 0;
          return (char *)0x0;
        }
        do {
          pcVar2 = pcVar5;
          cVar4 = *param_2;
          pcVar3 = param_2;
          while( true ) {
            pcVar3 = pcVar3 + 1;
            if (cVar4 == *pcVar2) {
              if (*pcVar2 != '\0') {
                *pcVar2 = '\0';
                *param_3 = pcVar2 + 1;
                return pcVar1;
              }
              *param_3 = 0;
              return pcVar1;
            }
            pcVar5 = pcVar2 + 1;
            if (cVar4 == '\0') break;
            cVar4 = *pcVar3;
          }
        } while( true );
      }
      pcVar5 = pcVar5 + 1;
      param_1 = pcVar1 + 1;
      if (*pcVar1 == cVar4) break;
      cVar4 = *pcVar5;
    }
  } while( true );
}

