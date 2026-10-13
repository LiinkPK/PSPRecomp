/* Entry 0x08912498 | file offset 0x0010F470 | FUN_08912498 | bytes 272 */

void FUN_08912498(undefined2 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = 0;
  puVar2 = param_1;
  do {
    *puVar2 = 0xffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 5);
  param_1[5] = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    *(undefined4 *)(puVar2 + 8) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x20);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    *(undefined4 *)(puVar2 + 0x48) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x20);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    *(undefined4 *)(puVar2 + 0x98) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x20);
  FUN_089127c4(param_1);
  param_1[0x120] = 0xffff;
  param_1[0x121] = 0xffff;
  param_1[0xd8] = 0xffff;
  param_1[0xd9] = 0xffff;
  FUN_089a34e0(param_1 + 0xda);
  FUN_089a34e0(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe6) = 0;
  FUN_08912a6c(param_1);
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)((int)param_1 + 0x25d) = 0;
  return;
}

