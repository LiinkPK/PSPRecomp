/* Entry 0x0890E9BC | file offset 0x0010B994 | FUN_0890e9bc | bytes 92 */

int FUN_0890e9bc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = 1 << (uVar2 & 0x1f);
    if ((DAT_09b6b3d8 & uVar1) == 0) {
      DAT_09b6b3d8 = DAT_09b6b3d8 | uVar1;
      return uVar2 + 100;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x20);
  return -1;
}

