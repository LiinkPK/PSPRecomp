/* Entry 0x088CF550 | file offset 0x000CC528 | FUN_088cf550 | bytes 380 */

void FUN_088cf550(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(DAT_089d7830 + 0x22) == '\0') {
    if (*(char *)(DAT_089d7830 + 0x21) == '\0') {
      DAT_089d7834 = 0x3f800000;
    }
    else {
      DAT_089d7834 = *(undefined4 *)(DAT_089d69e0 + 0x18);
    }
  }
  else {
    DAT_089d7834 = 0;
  }
  while (iVar2 = iVar3, iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x24);
    if ((bVar1 & 0xc) == 0) {
      if (*(char *)(iVar2 + 0x17) == '\0') {
        if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
          FUN_088da828();
        }
      }
      else {
        *(char *)(iVar2 + 0x17) = *(char *)(iVar2 + 0x17) + '\x01';
        if (2 < *(byte *)(iVar2 + 0x17)) {
          FUN_088cf330(param_1,iVar2);
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x30);
  while (iVar2 = iVar3, iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x24);
    if ((bVar1 & 0xc) == 0) {
      if (*(char *)(iVar2 + 0x17) == '\0') {
        if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
          FUN_088da828();
        }
      }
      else {
        *(char *)(iVar2 + 0x17) = *(char *)(iVar2 + 0x17) + '\x01';
        if (2 < *(byte *)(iVar2 + 0x17)) {
          FUN_088cf330(param_1,iVar2);
        }
      }
    }
  }
  return;
}

