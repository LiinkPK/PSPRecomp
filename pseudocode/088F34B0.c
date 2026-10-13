/* Entry 0x088F34B0 | file offset 0x000F0488 | FUN_088f34b0 | bytes 160 */

void FUN_088f34b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 0xd8);
  *puVar1 = 0;
  iVar2 = 0;
  do {
    iVar4 = 0;
    puVar3 = puVar1;
    do {
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      iVar4 = iVar4 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    } while (iVar4 < 4);
    iVar4 = 0;
    puVar3 = puVar1;
    do {
      *(undefined2 *)(puVar3 + 3) = 0xffff;
      iVar4 = iVar4 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    } while (iVar4 < 10);
    *(undefined1 *)(puVar1 + 8) = 0xff;
    iVar4 = 0;
    puVar3 = puVar1;
    do {
      *(undefined1 *)((int)puVar3 + 0x21) = 0xff;
      *(undefined1 *)((int)puVar3 + 0x22) = 0;
      iVar4 = iVar4 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    } while (iVar4 < 5);
    *(undefined1 *)((int)puVar1 + 0x2b) = 0xff;
    *(undefined1 *)(puVar1 + 0xb) = 1;
    iVar2 = iVar2 + 1;
    puVar1 = (undefined4 *)((int)puVar1 + 0x2a);
  } while (iVar2 < 5);
  return;
}

