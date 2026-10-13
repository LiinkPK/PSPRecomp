/* Entry 0x0885CC70 | file offset 0x00059C48 | FUN_0885cc70 | bytes 152 */

void FUN_0885cc70(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  cVar1 = DAT_089d4e30;
  while ((cVar1 == '\0' || (iVar2 == 0))) {
    if (DAT_089d4e20 != (code *)0x0) {
      iVar2 = (*DAT_089d4e20)(DAT_089d4e24);
      cVar1 = DAT_089d4e30;
    }
  }
  if (DAT_089d4e28 != (code *)0x0) {
    (*DAT_089d4e28)(DAT_089d4e2c);
  }
  return;
}

