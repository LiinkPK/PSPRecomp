/* Entry 0x08857A3C | file offset 0x00054A14 | FUN_08857a3c | bytes 192 */

void FUN_08857a3c(int param_1)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  
  fVar1 = DAT_089d5eac;
  pcVar2 = (char *)(param_1 + 0x20);
  iVar3 = 0;
  do {
    if (*pcVar2 != '\0') {
      if (pcVar2[1] == '\0') {
        pcVar2[0x51] = pcVar2[0x51] + '\x01';
        if (0xf < (byte)pcVar2[0x51]) {
          pcVar2[0x51] = '\0';
        }
        *(float *)(pcVar2 + 0x58) = *(float *)(pcVar2 + 0x58) + fVar1;
      }
      else {
        *pcVar2 = '\0';
      }
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x60;
  } while (iVar3 < 0x28);
  return;
}

