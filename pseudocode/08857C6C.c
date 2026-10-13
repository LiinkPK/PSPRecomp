/* Entry 0x08857C6C | file offset 0x00054C44 | FUN_08857c6c | bytes 184 */

char * FUN_08857c6c(int param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 0x20);
  do {
    if (*pcVar1 == '\0') {
      pcVar1[0x50] = param_2;
      pcVar1[0x51] = '\0';
      *pcVar1 = '\x01';
      pcVar1[1] = '\0';
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      *(float *)(pcVar1 + 0x54) = (float)(int)((DAT_09afb89c >> 0x10 & 0x7fffU) % 7 - 3);
      return pcVar1;
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x60;
  } while (iVar2 < 0x28);
  return (char *)0x0;
}

