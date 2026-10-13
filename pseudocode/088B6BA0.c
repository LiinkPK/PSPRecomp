/* Entry 0x088B6BA0 | file offset 0x000B3B78 | FUN_088b6ba0 | bytes 64 */

undefined2 FUN_088b6ba0(int param_1)

{
  undefined2 uVar1;
  
  if (DAT_089d7344 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_1 < 0) || (5 < param_1)) {
      param_1 = 0;
    }
    uVar1 = *(undefined2 *)(DAT_089d7344 + param_1 * 2);
  }
  return uVar1;
}

