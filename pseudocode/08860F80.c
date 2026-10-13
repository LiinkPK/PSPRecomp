/* Entry 0x08860F80 | file offset 0x0005DF58 | FUN_08860f80 | bytes 100 */

void FUN_08860f80(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = 0;
  puVar1 = param_1 + 0x404;
  do {
    FUN_088611e8(puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x18;
  } while (iVar2 < 2);
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  return;
}

