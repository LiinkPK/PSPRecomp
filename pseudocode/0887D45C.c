/* Entry 0x0887D45C | file offset 0x0007A434 | FUN_0887d45c | bytes 216 */

undefined4 FUN_0887d45c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = FUN_0887cfdc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = 0;
    pcVar4 = (char *)0x0;
    do {
      iVar3 = param_1 + iVar1 * 0x14;
      if ((*(char *)(iVar3 + 4) != '\0') && (*(int *)(iVar3 + 0x10) == param_2)) {
        pcVar4 = (char *)(iVar3 + 4);
        if (*(char *)(iVar3 + 0x14) == '\0') {
          return 0xfffffffd;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    FUN_0887b944(param_2);
    pcVar4[0x10] = '\0';
    uVar2 = 0;
  }
  return uVar2;
}

