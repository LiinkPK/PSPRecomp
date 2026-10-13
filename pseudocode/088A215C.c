/* Entry 0x088A215C | file offset 0x0009F134 | FUN_088a215c | bytes 456 */

void FUN_088a215c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_088820d8(0x1804);
  puVar2 = &DAT_09b4cfa0;
  DAT_089d6c90 = 0;
  DAT_089d6c94 = iVar1;
  if (iVar1 != 0) {
    iVar4 = 0;
    *(undefined4 *)(iVar1 + 0x1800) = 0;
    do {
      *(int *)(iVar1 + iVar4 * 4 + 0x1700) = iVar1 + (0x3f - iVar4) * 0x5c;
      iVar4 = *(int *)(iVar1 + 0x1800) + 1;
      *(int *)(iVar1 + 0x1800) = iVar4;
      DAT_089d6c90 = iVar1;
    } while (iVar4 < 0x40);
  }
  iVar1 = 0;
  do {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar1 < 0x40);
  iVar4 = FUN_088820d8(0x604);
  iVar1 = 0;
  DAT_09b4d2a4 = iVar4;
  if (iVar4 != 0) {
    FUN_08993560(iVar4,0x40,0x14,&LAB_088a1c5c);
    iVar3 = 0;
    *(undefined4 *)(iVar4 + 0x600) = 0;
    do {
      *(int *)(iVar4 + iVar3 * 4 + 0x500) = iVar4 + (0x3f - iVar3) * 0x14;
      iVar3 = *(int *)(iVar4 + 0x600) + 1;
      *(int *)(iVar4 + 0x600) = iVar3;
      iVar1 = iVar4;
    } while (iVar3 < 0x40);
  }
  DAT_09b4d2a0 = iVar1;
  iVar4 = FUN_088820d8(0x504);
  iVar1 = 0;
  DAT_09b4d2ac = iVar4;
  if (iVar4 != 0) {
    FUN_08993560(iVar4,0x40,0x10,&LAB_088a1d14);
    iVar3 = 0;
    *(undefined4 *)(iVar4 + 0x500) = 0;
    do {
      *(int *)(iVar4 + iVar3 * 4 + 0x400) = iVar4 + (0x3f - iVar3) * 0x10;
      iVar3 = *(int *)(iVar4 + 0x500) + 1;
      *(int *)(iVar4 + 0x500) = iVar3;
      iVar1 = iVar4;
    } while (iVar3 < 0x40);
  }
  DAT_09b4d2a8 = iVar1;
  return;
}

