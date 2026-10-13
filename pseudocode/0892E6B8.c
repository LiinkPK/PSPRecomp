/* Entry 0x0892E6B8 | file offset 0x0012B690 | FUN_0892e6b8 | bytes 80 */

void FUN_0892e6b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0xffffffff;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[3] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 1);
  iVar2 = 0;
  do {
    param_1[4] = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 1);
  return;
}

