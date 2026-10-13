/* Entry 0x088AD684 | file offset 0x000AA65C | FUN_088ad684 | bytes 84 */

int FUN_088ad684(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_089d6f58;
  iVar1 = -1;
  iVar4 = 0;
  iVar2 = DAT_089d6f58;
  while (iVar2 != -1) {
    if (param_1 == iVar4) {
      iVar1 = piVar3[2];
    }
    piVar3 = piVar3 + 3;
    iVar4 = iVar4 + 1;
    iVar2 = *piVar3;
  }
  return iVar1;
}

