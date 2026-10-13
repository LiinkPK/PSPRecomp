/* Entry 0x0888318C | file offset 0x00080164 | FUN_0888318c | bytes 56 */

undefined4 FUN_0888318c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_089d69c0 + 0x1e00) + -1;
  if (*(int *)(DAT_089d69c0 + 0x1e00) < 1) {
    uVar1 = 0;
  }
  else {
    *(int *)(DAT_089d69c0 + 0x1e00) = iVar2;
    uVar1 = *(undefined4 *)(DAT_089d69c0 + iVar2 * 4 + 0x1d00);
  }
  return uVar1;
}

