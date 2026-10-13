/* Entry 0x089AB15C | file offset 0x001A8134 | FUN_089ab15c | bytes 180 */

undefined4 FUN_089ab15c(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((param_3 != 0) && (uVar6 = 0, *param_1 != '\0')) {
    uVar6 = 1;
    pcVar3 = param_1;
    while ((pcVar3 = pcVar3 + 1, uVar6 < param_3 && (*pcVar3 != '\0'))) {
      uVar6 = uVar6 + 1;
    }
  }
  uVar5 = 0;
  if ((param_3 != 0) && (*param_2 != '\0')) {
    uVar5 = 1;
    pcVar3 = param_2;
    while ((pcVar3 = pcVar3 + 1, uVar5 < param_3 && (*pcVar3 != '\0'))) {
      uVar5 = uVar5 + 1;
    }
  }
  uVar4 = 1;
  if ((uVar6 == uVar5) && (uVar4 = 0, uVar6 != 0)) {
    cVar2 = *param_1;
    while( true ) {
      cVar1 = *param_2;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar4 = 1;
      if (cVar2 != cVar1) break;
      if (uVar6 == 0) {
        return 0;
      }
      cVar2 = *param_1;
    }
  }
  return uVar4;
}

