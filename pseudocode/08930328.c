/* Entry 0x08930328 | file offset 0x0012D300 | FUN_08930328 | bytes 136 */

void FUN_08930328(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[3] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    *(undefined2 *)(puVar2 + 7) = 0xffff;
    *(undefined2 *)((int)puVar2 + 0x1e) = 0xffff;
    *(undefined2 *)(puVar2 + 8) = 0xffff;
    *(undefined2 *)((int)puVar2 + 0x22) = 0xffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 5);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x11] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  param_1[0x13] = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  return;
}

