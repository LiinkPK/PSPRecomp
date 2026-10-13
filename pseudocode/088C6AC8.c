/* Entry 0x088C6AC8 | file offset 0x000C3AA0 | FUN_088c6ac8 | bytes 44 */

undefined2 FUN_088c6ac8(int param_1)

{
  undefined2 uVar1;
  
  if (DAT_089d7730 == 0) {
    uVar1 = 100;
  }
  else {
    uVar1 = *(undefined2 *)(DAT_089d7730 + param_1 * 2);
  }
  return uVar1;
}

