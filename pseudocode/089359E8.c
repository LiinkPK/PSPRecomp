/* Entry 0x089359E8 | file offset 0x001329C0 | FUN_089359e8 | bytes 36 */

int FUN_089359e8(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return (int)pcVar2 - (int)param_1;
}

