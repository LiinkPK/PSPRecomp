/* Entry 0x088C82E0 | file offset 0x000C52B8 | FUN_088c82e0 | bytes 284 */

void FUN_088c82e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0x20081106;
  iVar2 = 0;
  puVar1 = param_1 + 0x4000;
  do {
    puVar1[-0x17a2] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 2);
  FUN_08935828(param_1 + 0x8ba,0,0x7e90);
  iVar2 = 0;
  puVar1 = param_1 + 0x2860;
  do {
    FUN_089a34e0(puVar1);
    FUN_089a34e0(puVar1 + 3);
    *(undefined1 *)((int)puVar1 + 0x23) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    puVar1[6] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (iVar2 < 200);
  param_1[0x2f68] = 0;
  param_1[0x2f69] = 0;
  param_1[0x2f6a] = 0;
  param_1[0x2f6b] = 0;
  *(undefined1 *)(param_1 + 0x2f6c) = 0;
  param_1[0x2f6d] = 0;
  FUN_088ff7b8();
  return;
}

