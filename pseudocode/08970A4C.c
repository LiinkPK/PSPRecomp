/* Entry 0x08970A4C | file offset 0x0016DA24 | FUN_08970a4c | bytes 244 */

void FUN_08970a4c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0897034c(1);
  iVar2 = DAT_09b6f8bc;
  if (iVar1 != 0) {
    FUN_089703c8(DAT_09b6f8bc);
    while (iVar1 = DAT_09b6f8bc, iVar2 != 0) {
      if (*(byte *)(iVar2 + 8) == 0) {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else if (*(byte *)(iVar2 + 8) < 2) {
        FUN_08949e2c(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                     *(undefined4 *)(iVar2 + 0x14),0);
        iVar2 = *(int *)(iVar2 + 4);
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if ((*(byte *)(iVar1 + 8) != 0) && (*(byte *)(iVar1 + 8) < 2)) {
        FUN_08949e2c(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
                     *(undefined4 *)(iVar1 + 0x14),1);
      }
    }
  }
  return;
}

