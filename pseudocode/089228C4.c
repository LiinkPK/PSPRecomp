/* Entry 0x089228C4 | file offset 0x0011F89C | FUN_089228c4 | bytes 60 */

void FUN_089228c4(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 0xffff;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}

