/* Entry 0x0883E054 | file offset 0x0003B02C | FUN_0883e054 | bytes 88 */

undefined4 * FUN_0883e054(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[9] = 0;
  FUN_0880ab38(param_1 + 10);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  return param_1;
}

