/* Entry 0x08920074 | file offset 0x0011D04C | FUN_08920074 | bytes 100 */

void FUN_08920074(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[7] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x20);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((int)param_1 + 0xaa) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

