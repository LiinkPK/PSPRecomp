/* Entry 0x0891A254 | file offset 0x0011722C | FUN_0891a254 | bytes 48 */

void FUN_0891a254(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0xffff;
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}

