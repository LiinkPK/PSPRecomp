/* Entry 0x08841680 | file offset 0x0003E658 | FUN_08841680 | bytes 108 */

void FUN_08841680(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d4958;
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x14);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1114);
    }
    if (iVar2 == 0) break;
    (**(code **)(*(int *)(iVar2 + 0x544) + 0x24))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x20));
  }
  return;
}

