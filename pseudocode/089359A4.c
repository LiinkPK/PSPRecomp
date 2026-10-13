/* Entry 0x089359A4 | file offset 0x0013297C | FUN_089359a4 | bytes 68 */

char * FUN_089359a4(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  pcVar2 = param_1;
  *param_1 = cVar1;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    cVar1 = *param_2;
    *param_1 = cVar1;
  }
  return pcVar2;
}

