/* Entry 0x08935524 | file offset 0x001324FC | FUN_08935524 | bytes 64 */

undefined1 * FUN_08935524(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return puVar2;
}

