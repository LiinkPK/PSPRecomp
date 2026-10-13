/* Entry 0x088AD858 | file offset 0x000AA830 | FUN_088ad858 | bytes 80 */

int FUN_088ad858(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_089d70fc;
  iVar3 = 0;
  iVar1 = DAT_089d70fc;
  while( true ) {
    if (iVar1 == -1) {
      return -1;
    }
    if (param_1 == iVar3) break;
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + 1;
    iVar1 = *piVar2;
  }
  return piVar2[2];
}

