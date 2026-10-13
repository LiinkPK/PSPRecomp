/* Entry 0x08835778 | file offset 0x00032750 | FUN_08835778 | bytes 32 */

undefined * FUN_08835778(int param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x310);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_09afe820;
  }
  return puVar1;
}

