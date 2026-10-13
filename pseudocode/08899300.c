/* Entry 0x08899300 | file offset 0x000962D8 | FUN_08899300 | bytes 68 */

int FUN_08899300(void)

{
  int iVar1;
  
  iVar1 = FUN_088992b0();
  if (*(int *)(iVar1 + 0x210) == 0) {
    iVar1 = iVar1 + 0x108;
  }
  return iVar1;
}

