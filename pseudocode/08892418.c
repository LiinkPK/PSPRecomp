/* Entry 0x08892418 | file offset 0x0008F3F0 | FUN_08892418 | bytes 68 */

void FUN_08892418(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x612);
  do {
    *puVar1 = 0xffff;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    *(undefined1 *)(puVar1 + 3) = 0xff;
    *(undefined1 *)(puVar1 + 4) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 5;
  } while (iVar2 < 0x10);
  return;
}

