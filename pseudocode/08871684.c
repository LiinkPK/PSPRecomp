/* Entry 0x08871684 | file offset 0x0006E65C | FUN_08871684 | bytes 68 */

undefined * FUN_08871684(undefined4 param_1,uint param_2)

{
  undefined *puVar1;
  
  if (((int)param_2 < 0) || (DAT_09b26bc8 - 1U < param_2)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_09b26bd0 + param_2 * 0xc;
  }
  return puVar1;
}

