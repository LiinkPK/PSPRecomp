/* Entry 0x0891A7E4 | file offset 0x001177BC | FUN_0891a7e4 | bytes 44 */

void FUN_0891a7e4(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0xffff;
    puVar1[10] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  param_1[0x14] = 0;
  return;
}

