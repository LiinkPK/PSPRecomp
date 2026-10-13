/* Entry 0x088E0970 | file offset 0x000DD948 | FUN_088e0970 | bytes 60 */

void FUN_088e0970(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[6] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 2);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}

