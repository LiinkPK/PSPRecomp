/* Entry 0x0894300C | file offset 0x0013FFE4 | FUN_0894300c | bytes 120 */

undefined4 * FUN_0894300c(undefined4 *param_1)

{
  FUN_08970ee8(param_1 + 10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0xc;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_08935828(param_1 + 0x2d,0,0x34);
  return param_1;
}

