/* Entry 0x08866340 | file offset 0x00063318 | FUN_08866340 | bytes 160 */

undefined4 FUN_08866340(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_089d5ec0;
  iVar5 = 0;
  if (0 < *(int *)(DAT_089d5ec0 + 0x2cc8)) {
    iVar3 = DAT_089d5ec0 + 0x1ac8;
    iVar4 = DAT_089d5ec0;
    do {
      iVar2 = FUN_08935970(iVar3,param_1);
      if (iVar2 == 0) {
        return *(undefined4 *)(iVar4 + 0x1ae8);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x24;
      iVar3 = iVar3 + 0x24;
    } while (iVar5 < *(int *)(iVar1 + 0x2cc8));
  }
  return 0;
}

