/* Entry 0x08935E90 | file offset 0x00132E68 | FUN_08935e90 | bytes 56 */

int FUN_08935e90(short *param_1)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      psVar2 = psVar2 + 1;
    } while (*psVar2 != 0);
    iVar1 = (int)psVar2 - (int)param_1;
  }
  return iVar1 / 2;
}

