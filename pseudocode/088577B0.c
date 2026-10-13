/* Entry 0x088577B0 | file offset 0x00054788 | FUN_088577b0 | bytes 40 */

undefined4 * FUN_088577b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  param_1[4] = 0;
  return param_1;
}

