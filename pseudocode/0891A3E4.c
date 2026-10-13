/* Entry 0x0891A3E4 | file offset 0x001173BC | FUN_0891a3e4 | bytes 104 */

void FUN_0891a3e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = 0;
  puVar1 = param_1 + 2;
  do {
    FUN_0891a724(puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x1a;
  } while (iVar2 < 2);
  FUN_0891a77c(param_1 + 0x36);
  FUN_0891a7e4(param_1 + 0x7e);
  return;
}

