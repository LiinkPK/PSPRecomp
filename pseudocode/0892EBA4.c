/* Entry 0x0892EBA4 | file offset 0x0012BB7C | FUN_0892eba4 | bytes 100 */

void FUN_0892eba4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 6);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x13] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  param_1[0x22] = 0;
  iVar2 = 0;
  do {
    param_1[0x33] = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 0x10);
  return;
}

