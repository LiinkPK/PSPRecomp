/* Entry 0x088EA884 | file offset 0x000E785C | FUN_088ea884 | bytes 132 */

void FUN_088ea884(int *param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    iVar1 = 0;
    do {
      if (-1 < *param_1) {
        FUN_088a0dfc(DAT_089d6c80,*param_1);
        *param_1 = -1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < 8);
  }
  return;
}

