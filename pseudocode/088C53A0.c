/* Entry 0x088C53A0 | file offset 0x000C2378 | FUN_088c53a0 | bytes 92 */

void FUN_088c53a0(undefined4 *param_1)

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
  } while (iVar2 < 0x20);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x21] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x20);
  iVar2 = 0;
  do {
    param_1[0x41] = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 2);
  return;
}

