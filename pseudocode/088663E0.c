/* Entry 0x088663E0 | file offset 0x000633B8 | FUN_088663e0 | bytes 140 */

void FUN_088663e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d5ec0;
  if ((*(char *)(DAT_089d5ec0 + 0x2ccc) != '\0') && (*(int *)(DAT_089d5ec0 + 0x2cc8) < 0x80)) {
    FUN_08935bb4(DAT_089d5ec0 + *(int *)(DAT_089d5ec0 + 0x2cc8) * 0x24 + 0x1ac8,param_1,0x20);
    iVar2 = *(int *)(iVar1 + 0x2cc8);
    *(undefined4 *)(iVar1 + iVar2 * 0x24 + 0x1ae8) = param_2;
    *(int *)(iVar1 + 0x2cc8) = iVar2 + 1;
  }
  return;
}

