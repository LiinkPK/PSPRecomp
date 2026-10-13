/* Entry 0x088C9938 | file offset 0x000C6910 | FUN_088c9938 | bytes 172 */

void FUN_088c9938(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbdb8);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        FUN_088ca564(param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 2);
      *(undefined4 *)(param_1 + 0xbdb8) = 3;
    }
  }
  else if (iVar1 < 3) {
    *(undefined4 *)(param_1 + 0xbdb8) = 4;
    *(uint *)(DAT_089d6008 + 0x264) = *(uint *)(DAT_089d6008 + 0x264) & 0xfffffffe;
  }
  return;
}

