/* Entry 0x08835798 | file offset 0x00032770 | FUN_08835798 | bytes 32 */

undefined * FUN_08835798(int param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x310);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_09afe820;
  }
  return puVar1;
}

