/* Entry 0x0887D2A8 | file offset 0x0007A280 | FUN_0887d2a8 | bytes 136 */

undefined4 FUN_0887d2a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_0887cfdc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 0;
    pcVar3 = (char *)(param_1 + 4);
    do {
      if (*pcVar3 != '\0') {
        FUN_0887d160(param_1,*(undefined4 *)(pcVar3 + 4),*(undefined4 *)(pcVar3 + 8));
      }
      iVar1 = iVar1 + 1;
      pcVar3 = pcVar3 + 0x14;
    } while (iVar1 < 10);
    uVar2 = 0;
  }
  return uVar2;
}

