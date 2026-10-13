/* Entry 0x0884722C | file offset 0x00044204 | FUN_0884722c | bytes 84 */

void FUN_0884722c(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0xff;
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  do {
    param_1[iVar2 + 0x20] = 0xff;
    param_1[iVar2 + 0x30] = 0xff;
    param_1[iVar2 + 0x40] = 0xff;
    param_1[iVar2 + 0x50] = 0xff;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

