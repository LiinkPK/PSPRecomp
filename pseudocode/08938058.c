/* Entry 0x08938058 | file offset 0x00135030 | FUN_08938058 | bytes 460 */

char * FUN_08938058(char *param_1,char *param_2,char *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  
  iVar1 = (int)param_3 - (int)param_2;
  iVar2 = iVar1 + 10;
  pcVar3 = &stack0xffffffe9 + (iVar2 - (iVar1 + 0x19U & 0xfffffff0)) + -10;
  iVar5 = 0;
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == (char *)0x0)) {
    return (char *)0x0;
  }
  iVar7 = 0;
  pcVar4 = param_2;
  pcVar8 = param_3;
  while ((pcVar4 <= param_3 && (iVar7 != 2))) {
    cVar6 = *pcVar4;
    if (cVar6 == 'e') {
      iVar7 = 2;
    }
    else if (cVar6 == 'E') {
      iVar7 = 2;
    }
    else if ((cVar6 == '.') && (pcVar8 = pcVar4, iVar7 == 0)) {
      iVar7 = 1;
    }
    pcVar4 = pcVar4 + 1;
  }
  if (iVar7 == 2) {
    return param_2;
  }
  cVar6 = *param_3;
  if (param_2 < param_3) {
    do {
      *pcVar3 = cVar6;
      pcVar4 = pcVar3 + -1;
      if (param_3 <= pcVar8) {
        if (iVar5 % 3 == 0) {
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          else {
            *pcVar4 = ',';
            pcVar4 = pcVar3 + -2;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 1;
          }
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
      param_3 = param_3 + -1;
      cVar6 = *param_3;
      pcVar3 = pcVar4;
    } while (param_2 < param_3);
    iVar1 = iVar2 + -10;
  }
  *pcVar3 = cVar6;
  FUN_08935524(param_1,pcVar3,iVar1);
  *param_4 = iVar1;
  return param_1;
}

