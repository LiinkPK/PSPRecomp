/* Entry 0x089A5FFC | file offset 0x001A2FD4 | FUN_089a5ffc | bytes 108 */

void FUN_089a5ffc(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_3 != 0) && (*param_2 != '\0')) {
    uVar3 = 1;
    pcVar1 = param_2;
    while ((pcVar1 = pcVar1 + 1, uVar3 < param_3 && (*pcVar1 != '\0'))) {
      uVar3 = uVar3 + 1;
    }
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 < uVar3);
  }
  param_1[-(uint)(uVar2 == param_3)] = '\0';
  return;
}

