/* Entry 0x08806C8C | file offset 0x00003C64 | FUN_08806c8c | bytes 72 */

/* WARNING: Removing unreachable block (ram,0x08806ca4) */

void FUN_08806c8c(int param_1,undefined1 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x66);
  *(undefined1 *)(param_1 + ((uint)*(byte *)(param_1 + 0x65) + (uint)bVar1 & 0x3f) + 0x1c) = param_2
  ;
  *(byte *)(param_1 + 0x66) = bVar1 + 1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}

