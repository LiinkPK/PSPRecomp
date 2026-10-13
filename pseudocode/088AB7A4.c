/* Entry 0x088AB7A4 | file offset 0x000A877C | FUN_088ab7a4 | bytes 28 */

undefined4 FUN_088ab7a4(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 1) {
    *(undefined1 *)(param_1 + 0xec0) = 0;
    *(int *)(param_1 + 0xebc) = param_3;
  }
  return 0;
}

