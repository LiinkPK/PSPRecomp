/* Entry 0x08842164 | file offset 0x0003F13C | FUN_08842164 | bytes 136 */

int FUN_08842164(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_089d4958;
  iVar3 = 0;
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x1114);
    }
    if (iVar3 == 0) break;
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x544) + 0x144))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x544) + 0x140));
    if (iVar2 != 0) {
      return iVar3;
    }
  }
  return 0;
}

