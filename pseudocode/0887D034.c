/* Entry 0x0887D034 | file offset 0x0007A00C | FUN_0887d034 | bytes 300 */

undefined4 FUN_0887d034(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
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
      pcVar3 = (char *)(param_1 + iVar1 * 0x14 + 4);
      if (*pcVar3 != '\x01') break;
      iVar1 = iVar1 + 1;
      pcVar3 = (char *)0x0;
    } while (iVar1 < 10);
    if (pcVar3 == (char *)0x0) {
      uVar2 = 0xfffffffd;
    }
    else {
      iVar1 = FUN_0887ad78(param_2,0,param_3,0,0,0);
      if (iVar1 == 0) {
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_0887b944(iVar1);
        *pcVar3 = '\x01';
        *(int *)(pcVar3 + 4) = param_2;
        *(int *)(pcVar3 + 8) = param_3;
        *(int *)(pcVar3 + 0xc) = iVar1;
        pcVar3[0x10] = '\0';
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

