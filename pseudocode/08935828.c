/* Entry 0x08935828 | file offset 0x00132800 | FUN_08935828 | bytes 52 */

undefined1 * FUN_08935828(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

