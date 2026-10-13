/* Entry 0x088B8E58 | file offset 0x000B5E30 | FUN_088b8e58 | bytes 96 */

void FUN_088b8e58(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)FUN_088b9044();
  if (pcVar2 != (char *)0x0) {
    pcVar2[3] = pcVar2[3] | 2;
    iVar3 = FUN_088c6ca4((int)*pcVar2);
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 8);
      pcVar2[2] = '\0';
      pcVar2[1] = cVar1;
    }
  }
  return;
}

