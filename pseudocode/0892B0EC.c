/* Entry 0x0892B0EC | file offset 0x001280C4 | FUN_0892b0ec | bytes 120 */

void FUN_0892b0ec(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 1);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[2] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 7);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[9] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x3a) = 0xffff;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x3e) = 0xffff;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  return;
}

