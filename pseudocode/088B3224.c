/* Entry 0x088B3224 | file offset 0x000B01FC | FUN_088b3224 | bytes 88 */

void FUN_088b3224(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x13);
  FUN_088b3004(param_1 + 0x13);
  FUN_088b312c(param_1 + 0x71b);
  FUN_088b31b4(param_1 + 0x8bf);
  param_1[0x990] = 0;
  return;
}

