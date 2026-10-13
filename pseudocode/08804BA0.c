/* Entry 0x08804BA0 | file offset 0x00001B78 | FUN_08804ba0 | bytes 244 */

void FUN_08804ba0(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 0x604);
  do {
    if (*pcVar1 != '\0') {
      FUN_08831cec(param_1,pcVar1[2],pcVar1[3]);
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 8;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 0x584);
  do {
    if ((*pcVar1 != '\0') && (FUN_08831cec(param_1,pcVar1[2],pcVar1[3]), pcVar1[1] == '\0')) {
      fVar3 = (float)FUN_08838300(param_1);
      fVar4 = *(float *)(pcVar1 + 4);
      *(float *)(pcVar1 + 4) = fVar4 - fVar3;
      if (fVar4 - fVar3 <= 0.0) {
        *pcVar1 = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
      }
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 8;
  } while (iVar2 < 0x10);
  return;
}

