/* Entry 0x088B3584 | file offset 0x000B055C | FUN_088b3584 | bytes 88 */

undefined4 FUN_088b3584(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_089d72e0 == 0) {
    uVar1 = 0;
  }
  else if ((param_1 < 0) || (*(int *)(DAT_089d72e0 + 8) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_089d72e4 + param_1 * 4);
  }
  return uVar1;
}

