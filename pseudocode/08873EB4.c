/* Entry 0x08873EB4 | file offset 0x00070E8C | FUN_08873eb4 | bytes 92 */

undefined4 FUN_08873eb4(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_09b47b50;
  iVar2 = 0;
  while ((*(int *)(puVar1 + 0x234) == 0 && (*(float *)(puVar1 + 0xc) == 0.0))) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x240;
    if (2 < iVar2) {
      return 0;
    }
  }
  return 1;
}

