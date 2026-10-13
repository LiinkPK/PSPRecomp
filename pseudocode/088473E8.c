/* Entry 0x088473E8 | file offset 0x000443C0 | FUN_088473e8 | bytes 160 */

void FUN_088473e8(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    if (cVar1 != -1) {
      if (pcVar2[1] == '\0') {
        FUN_088372d0(param_2,cVar1);
      }
      else {
        FUN_088372b0(param_2,cVar1);
      }
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 2;
  } while (iVar3 < 0x10);
  FUN_0884722c(param_1);
  return;
}

