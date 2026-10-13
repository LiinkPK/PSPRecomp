/* Entry 0x08874848 | file offset 0x00071820 | FUN_08874848 | bytes 52 */

undefined4 FUN_08874848(void)

{
  undefined4 uVar1;
  
  if (DAT_09b48860 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (&DAT_09b487e0)[DAT_09b48860 + -1];
    DAT_09b48860 = DAT_09b48860 + -1;
  }
  return uVar1;
}

