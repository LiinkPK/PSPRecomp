/* Entry 0x089AAE10 | file offset 0x001A7DE8 | FUN_089aae10 | bytes 100 */

void FUN_089aae10(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = FUN_089ab27c(param_1,0x400);
  iVar2 = 0;
  pcVar3 = param_1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + 1;
      if ((byte)(*pcVar3 + 0x9fU) < 0x1a) {
        *pcVar3 = *pcVar3 + -0x20;
      }
      pcVar3 = param_1 + iVar2;
    } while (iVar2 < iVar1);
  }
  return;
}

