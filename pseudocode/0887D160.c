/* Entry 0x0887D160 | file offset 0x0007A138 | FUN_0887d160 | bytes 328 */

undefined4 FUN_0887d160(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = FUN_0887cfdc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_3 < 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = 0;
    do {
      iVar3 = param_1 + iVar1 * 0x14;
      pcVar4 = (char *)(iVar3 + 4);
      if ((((*pcVar4 != '\0') && (*(int *)(iVar3 + 8) == param_2)) &&
          (*(int *)(iVar3 + 0xc) == param_3)) && (*(char *)(iVar3 + 0x14) != '\x01')) break;
      iVar1 = iVar1 + 1;
      pcVar4 = (char *)0x0;
    } while (iVar1 < 10);
    if (pcVar4 == (char *)0x0) {
      uVar2 = 0xfffffffd;
    }
    else {
      if (*(int *)(pcVar4 + 0xc) != 0) {
        FUN_0887ba5c(*(undefined4 *)(pcVar4 + 0xc));
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
      }
      *pcVar4 = '\0';
      pcVar4[4] = '\0';
      pcVar4[5] = '\0';
      pcVar4[6] = '\0';
      pcVar4[7] = '\0';
      pcVar4[8] = -1;
      pcVar4[9] = -1;
      pcVar4[10] = -1;
      pcVar4[0xb] = -1;
      pcVar4[0xc] = '\0';
      pcVar4[0xd] = '\0';
      pcVar4[0xe] = '\0';
      pcVar4[0xf] = '\0';
      pcVar4[0x10] = '\0';
      uVar2 = 0;
    }
  }
  return uVar2;
}

