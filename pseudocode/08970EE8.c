/* Entry 0x08970EE8 | file offset 0x0016DEC0 | FUN_08970ee8 | bytes 24 */

undefined4 * FUN_08970ee8(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  return param_1;
}

