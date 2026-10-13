/* Entry 0x08874A70 | file offset 0x00071A48 | FUN_08874a70 | bytes 136 */

int FUN_08874a70(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08874848(0x24);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_088745b0(iVar1,1);
    iVar2 = iVar1;
  }
  if (iVar2 != 0) {
    if (DAT_09b4835c == 0) {
      DAT_09b48358 = iVar2;
      DAT_09b4835c = iVar2;
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    else {
      *(int *)(DAT_09b4835c + 0x20) = iVar2;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      DAT_09b4835c = iVar2;
    }
  }
  return iVar2;
}

