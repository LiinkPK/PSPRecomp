/* Entry 0x0892C758 | file offset 0x00129730 | FUN_0892c758 | bytes 112 */

void FUN_0892c758(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[1] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[3] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    *(undefined2 *)(puVar2 + 5) = 0xffff;
    *(undefined2 *)((int)puVar2 + 0x16) = 0xffff;
    *(undefined2 *)(puVar2 + 6) = 0xffff;
    *(undefined2 *)((int)puVar2 + 0x1a) = 0xffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 2);
  param_1[9] = 0;
  return;
}

