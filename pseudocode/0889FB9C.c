/* Entry 0x0889FB9C | file offset 0x0009CB74 | FUN_0889fb9c | bytes 244 */

void FUN_0889fb9c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    iVar4 = DAT_09b4cee8;
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 + 0x20);
    }
    if (iVar4 == 0) break;
    FUN_0889f9c4(iVar4);
    iVar2 = FUN_0889f980(iVar4);
    iVar3 = DAT_09b4cee8;
    iVar5 = iVar4;
    if (iVar2 == 1) {
      if ((DAT_09b4cee8 != 0) && (DAT_09b4ceec != 0)) {
        iVar2 = *(int *)(iVar4 + 0x20);
        if (iVar4 == DAT_09b4cee8) {
          iVar3 = 0;
          DAT_09b4cee8 = iVar2;
        }
        else {
          iVar1 = *(int *)(DAT_09b4cee8 + 0x20);
          if (*(int *)(DAT_09b4cee8 + 0x20) == iVar4) {
            *(int *)(DAT_09b4cee8 + 0x20) = iVar2;
          }
          else {
            do {
              iVar3 = iVar1;
              iVar1 = *(int *)(iVar3 + 0x20);
            } while (*(int *)(iVar3 + 0x20) != iVar4);
            *(int *)(iVar3 + 0x20) = iVar2;
          }
        }
        if (iVar4 == DAT_09b4ceec) {
          DAT_09b4ceec = iVar3;
        }
        *(undefined4 *)(iVar4 + 0x20) = 0;
      }
      if (*(code **)(iVar4 + 0x18) != (code *)0x0) {
        (**(code **)(iVar4 + 0x18))(*(undefined4 *)(iVar4 + 0x1c));
      }
    }
  }
  return;
}

