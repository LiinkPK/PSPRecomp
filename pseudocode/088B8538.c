/* Entry 0x088B8538 | file offset 0x000B5510 | FUN_088b8538 | bytes 252 */

void FUN_088b8538(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *puVar1 = 0xffff;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar1 + 3) | 5;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x2ab);
  iVar2 = 0;
  puVar1 = param_1 + 0x556;
  do {
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *puVar1 = 0xffff;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar1 + 3) | 5;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x276);
  iVar2 = 0;
  puVar1 = param_1 + 0xa42;
  do {
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(undefined1 *)puVar1 = 0xff;
    *(undefined1 *)((int)puVar1 + 1) = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar1 + 3) | 1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x40);
  iVar2 = 0;
  puVar1 = param_1 + 0xac2;
  do {
    *(undefined1 *)puVar1 = 0xff;
    *(undefined1 *)((int)puVar1 + 1) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x32);
  iVar2 = 0;
  puVar1 = param_1 + 0xb02;
  do {
    *puVar1 = 0xffff;
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 2);
  *(undefined4 *)(param_1 + 0xaf4) = 0;
  *(undefined4 *)(param_1 + 0xaf6) = 0;
  *(undefined4 *)(param_1 + 0xaf8) = 0;
  *(undefined4 *)(param_1 + 0xafa) = 0;
  *(undefined4 *)(param_1 + 0xafc) = 0;
  *(undefined4 *)(param_1 + 0xafe) = 0;
  *(undefined4 *)(param_1 + 0xb00) = 0;
  return;
}

