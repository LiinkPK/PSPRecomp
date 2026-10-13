/* Entry 0x08890B5C | file offset 0x0008DB34 | FUN_08890b5c | bytes 64 */

void FUN_08890b5c(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[8] = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 2);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}

