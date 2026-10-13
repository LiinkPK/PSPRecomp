/* Entry 0x088B6BE0 | file offset 0x000B3BB8 | FUN_088b6be0 | bytes 60 */

undefined1 FUN_088b6be0(int param_1)

{
  undefined1 uVar1;
  
  if (DAT_089d7348 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_1 < 0) || (5 < param_1)) {
      param_1 = 0;
    }
    uVar1 = *(undefined1 *)(param_1 + DAT_089d7348);
  }
  return uVar1;
}

