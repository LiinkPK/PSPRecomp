/* Entry 0x08859060 | file offset 0x00056038 | FUN_08859060 | bytes 36 */

undefined4 * FUN_08859060(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 5);
  return param_1;
}

