/* Entry 0x08889E44 | file offset 0x00086E1C | FUN_08889e44 | bytes 144 */

int FUN_08889e44(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while ((iVar2 = *(int *)(DAT_089d6a10 + iVar3 + 0x38), iVar2 == 0 ||
         (iVar1 = (**(code **)(*(int *)(iVar2 + 0x544) + 0x144))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x140)), iVar1 == 0))) {
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    if (1 < iVar4) {
      return 0;
    }
  }
  return iVar2;
}

