/* Entry 0x088831C4 | file offset 0x0008019C | FUN_088831c4 | bytes 88 */

void FUN_088831c4(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_089d69c0;
  bVar1 = false;
  if ((DAT_089d69c0 <= param_1) && (bVar1 = false, param_1 < DAT_089d69c0 + 0x1d00)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = *(int *)(DAT_089d69c0 + 0x1e00);
    *(int *)(DAT_089d69c0 + 0x1e00) = iVar3 + 1;
    *(uint *)(uVar2 + iVar3 * 4 + 0x1d00) = param_1;
  }
  return;
}

