/* Entry 0x08888C44 | file offset 0x00085C1C | FUN_08888c44 | bytes 92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08888c44(void)

{
  bool bVar1;
  
  func_0x08b05dec(_DAT_08b0cf20);
  if ((*(int *)(_DAT_08b0cf20 + 0xb0) == 0) || (bVar1 = false, *(int *)(_DAT_08b0cf20 + 0xb0) == 4))
  {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0888a7e0();
  }
  return;
}

