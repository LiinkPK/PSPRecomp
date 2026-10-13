/* Entry 0x088062CC | file offset 0x000032A4 | FUN_088062cc | bytes 84 */

void FUN_088062cc(int param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 0x584);
  do {
    if ((*pcVar1 != '\0') && ((byte)pcVar1[2] == param_2)) {
      *pcVar1 = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 8;
  } while (iVar2 < 0x10);
  return;
}

