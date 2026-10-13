/* Entry 0x089179B8 | file offset 0x00114990 | FUN_089179b8 | bytes 228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089179b8(void)

{
  int iVar1;
  
  iVar1 = FUN_0891705c(0xffffffff);
  if (*(int *)(DAT_089d83d8 + 0x50) < 0) {
    FUN_08933c00(DAT_089d85e8);
    if ((*(uint *)(iVar1 + 0x260) & 0x20) == 0) {
      func_0x08a88edc(_DAT_08a8b7a8,1,0xffffffff);
    }
    else {
      *(undefined4 *)(iVar1 + 0x264) = *(undefined4 *)(iVar1 + 0x264);
      *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) & 0xffffffdf;
      func_0x089e0bdc(_DAT_089e75c4,0);
    }
  }
  else {
    FUN_08917e04(DAT_089d83dc,*(int *)(DAT_089d83d8 + 0x50));
    FUN_08917e78(DAT_089d83dc);
  }
  return;
}

