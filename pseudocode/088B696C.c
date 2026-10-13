/* Entry 0x088B696C | file offset 0x000B3944 | FUN_088b696c | bytes 64 */

undefined2 FUN_088b696c(int param_1)

{
  undefined2 uVar1;
  
  if (DAT_089d7338 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_1 < 0) || (3 < param_1)) {
      param_1 = 0;
    }
    uVar1 = *(undefined2 *)(DAT_089d7338 + param_1 * 2 + 4);
  }
  return uVar1;
}

