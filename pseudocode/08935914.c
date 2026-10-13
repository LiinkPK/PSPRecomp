/* Entry 0x08935914 | file offset 0x001328EC | FUN_08935914 | bytes 92 */

char * FUN_08935914(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (pcVar3 = pcVar2 + 1, cVar1 != '\0') {
    pcVar2 = pcVar3;
    cVar1 = *pcVar3;
  }
  cVar1 = *param_2;
  *pcVar2 = cVar1;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  }
  return param_1;
}

