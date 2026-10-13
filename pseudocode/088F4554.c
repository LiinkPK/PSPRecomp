/* Entry 0x088F4554 | file offset 0x000F152C | FUN_088f4554 | bytes 136 */

undefined4 FUN_088f4554(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_088c50d4();
  if (DAT_089d5f20 == '\0') {
    iVar2 = FUN_08867894();
    if (iVar2 == 0) {
      if (*(char *)(iVar1 + 5) != '\0') {
        uVar3 = 1;
      }
    }
    else if (*(char *)(iVar1 + 4) != '\0') {
      uVar3 = 1;
    }
  }
  else if (*(char *)(iVar1 + 6) != '\0') {
    uVar3 = 1;
  }
  return uVar3;
}

