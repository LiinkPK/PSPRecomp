/* Entry 0x08806320 | file offset 0x000032F8 | FUN_08806320 | bytes 56 */

void FUN_08806320(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x604);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (iVar2 < 0x10);
  return;
}

