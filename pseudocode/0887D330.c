/* Entry 0x0887D330 | file offset 0x0007A308 | FUN_0887d330 | bytes 300 */

undefined4 FUN_0887d330(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = FUN_0887cfdc();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((param_2 == 0) || (param_3 < 0)) {
    uVar2 = 0;
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
      uVar2 = 0;
    }
    else {
      pcVar4[0x10] = '\x01';
      FUN_0887b924(*(undefined4 *)(pcVar4 + 0xc));
      uVar2 = *(undefined4 *)(pcVar4 + 0xc);
    }
  }
  return uVar2;
}

