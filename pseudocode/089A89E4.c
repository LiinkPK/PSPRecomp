/* Entry 0x089A89E4 | file offset 0x001A59BC | FUN_089a89e4 | bytes 56 */

void FUN_089a89e4(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x1c8;
  puVar1 = param_1;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (0 < iVar2);
  *(undefined4 *)(param_1 + 0x34) = 8;
  FUN_089a9604();
  return;
}

