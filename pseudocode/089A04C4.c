/* Entry 0x089A04C4 | file offset 0x0019D49C | FUN_089a04c4 | bytes 36 */

uint FUN_089a04c4(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((int)param_1 < 0x16) {
    uVar1 = DAT_09af682c >> (param_1 & 0x1f) & 1;
  }
  return uVar1;
}

