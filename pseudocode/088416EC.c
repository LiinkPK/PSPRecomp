/* Entry 0x088416EC | file offset 0x0003E6C4 | FUN_088416ec | bytes 172 */

void FUN_088416ec(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d4958;
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x4a0);
    }
    if (iVar2 == 0) break;
    if ((*(uint *)(iVar2 + 0x388) & 1) == 0) {
      (**(code **)(*(int *)(iVar2 + 0x544) + 0xfc))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0xf8));
    }
  }
  return;
}

