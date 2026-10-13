/* Entry 0x088662B4 | file offset 0x0006328C | FUN_088662b4 | bytes 140 */

void FUN_088662b4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d5ec0;
  if ((*(char *)(DAT_089d5ec0 + 0x2ccc) != '\0') && (*(int *)(DAT_089d5ec0 + 0x1ac4) < 0x80)) {
    FUN_08935bb4(DAT_089d5ec0 + *(int *)(DAT_089d5ec0 + 0x1ac4) * 0x24 + 0x8c4,param_1,0x20);
    iVar2 = *(int *)(iVar1 + 0x1ac4);
    *(undefined4 *)(iVar1 + iVar2 * 0x24 + 0x8e4) = param_2;
    *(int *)(iVar1 + 0x1ac4) = iVar2 + 1;
  }
  return;
}

