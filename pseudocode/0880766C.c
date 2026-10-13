/* Entry 0x0880766C | file offset 0x00004644 | FUN_0880766c | bytes 104 */

void FUN_0880766c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar1 = &DAT_09af84f0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar4 = 0;
    puVar3 = puVar1;
    do {
      puVar3[2] = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 3);
    *(undefined2 *)(puVar1 + 5) = 0xffff;
    *(undefined1 *)((int)puVar1 + 0x16) = 0;
    iVar2 = iVar2 + 1;
    *(undefined1 *)((int)puVar1 + 0x17) = 0;
    puVar1 = puVar1 + 6;
  } while (iVar2 < 0x20);
  return;
}

