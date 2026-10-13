/* Entry 0x088419EC | file offset 0x0003E9C4 | FUN_088419ec | bytes 408 */

void FUN_088419ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_089d4958;
  iVar3 = 0;
  iVar4 = 0;
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x1114);
    }
    if (iVar3 == 0) break;
    iVar2 = FUN_08837990(iVar3);
    if ((iVar2 == 0) && ((*(uint *)(iVar3 + 0x380) & 0x200000) != 0)) {
      iVar2 = 0;
      do {
        if (iVar2 == 0) {
          iVar2 = *(int *)(iVar1 + 0x44);
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x4a0);
        }
      } while ((iVar2 != 0) && (iVar2 != iVar3));
      if (iVar2 == 0) {
        (**(code **)(*(int *)(iVar3 + 0x544) + 100))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x544) + 0x60));
      }
    }
  }
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar1 + 0x1c);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xb54);
    }
    if (iVar4 == 0) break;
    iVar3 = FUN_08837990(iVar4);
    if ((iVar3 == 0) && ((*(uint *)(iVar4 + 0x380) & 0x200000) != 0)) {
      iVar3 = 0;
      do {
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar1 + 0x44);
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x4a0);
        }
      } while ((iVar3 != 0) && (iVar3 != iVar4));
      if (iVar3 == 0) {
        (**(code **)(*(int *)(iVar4 + 0x544) + 100))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x544) + 0x60));
      }
    }
  }
  return;
}

