/* Entry 0x0891EAE0 | file offset 0x0011BAB8 | FUN_0891eae0 | bytes 88 */

void FUN_0891eae0(undefined1 *param_1)

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
  } while (iVar2 < 5);
  param_1[10] = 0;
  iVar2 = 0;
  do {
    param_1[iVar2 + 0xb] = 0xff;
    param_1[iVar2 + 0xf] = 0xff;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  return;
}

