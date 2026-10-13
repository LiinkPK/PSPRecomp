/* Entry 0x08866214 | file offset 0x000631EC | FUN_08866214 | bytes 160 */

undefined4 FUN_08866214(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_089d5ec0;
  iVar5 = 0;
  if (0 < *(int *)(DAT_089d5ec0 + 0x1ac4)) {
    iVar3 = DAT_089d5ec0 + 0x8c4;
    iVar4 = DAT_089d5ec0;
    do {
      iVar2 = FUN_08935970(iVar3,param_1);
      if (iVar2 == 0) {
        return *(undefined4 *)(iVar4 + 0x8e4);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x24;
      iVar3 = iVar3 + 0x24;
    } while (iVar5 < *(int *)(iVar1 + 0x1ac4));
  }
  return 0;
}

