/* Entry 0x088CB164 | file offset 0x000C813C | FUN_088cb164 | bytes 136 */

undefined * FUN_088cb164(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_088cb3b4(param_2);
  if (iVar1 < 0) {
    if (DAT_09aefaf8 == 0) {
      DAT_09aefaf8 = 1;
      FUN_088cb9e8(&DAT_09aefafc);
    }
    puVar2 = &DAT_09aefafc;
  }
  else {
    puVar2 = (undefined *)(param_1 + iVar1 * 0x778);
  }
  return puVar2;
}

