/* Entry 0x0885697C | file offset 0x00053954 | FUN_0885697c | bytes 40 */

undefined4 * FUN_0885697c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0xe);
  return param_1;
}

