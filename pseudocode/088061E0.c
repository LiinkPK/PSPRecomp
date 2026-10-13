/* Entry 0x088061E0 | file offset 0x000031B8 | FUN_088061e0 | bytes 180 */

void FUN_088061e0(int param_1,char param_2,char param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  if (param_4 < 1) {
    iVar2 = 0;
    pcVar1 = (char *)(param_1 + 0x604);
    do {
      if (*pcVar1 == '\0') {
        pcVar1[2] = param_2;
        pcVar1[3] = param_3;
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1[1] = '\x01';
        *pcVar1 = '\x01';
        return;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 8;
    } while (iVar2 < 0x10);
  }
  else {
    iVar2 = 0;
    pcVar1 = (char *)(param_1 + 0x584);
    do {
      if (*pcVar1 == '\0') {
        pcVar1[2] = param_2;
        pcVar1[3] = param_3;
        *(float *)(pcVar1 + 4) = (float)param_4;
        if (param_4 < 1) {
          pcVar1[1] = '\x01';
        }
        *pcVar1 = '\x01';
        return;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 8;
    } while (iVar2 < 0x10);
  }
  return;
}

