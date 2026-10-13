/* Entry 0x088D5E0C | file offset 0x000D2DE4 | FUN_088d5e0c | bytes 640 */

uint FUN_088d5e0c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  while( true ) {
    if ((&DAT_089d7be0)[iVar2 * 5] == -1) {
      return 0;
    }
    if ((&DAT_089d7be0)[iVar2 * 5] == param_1) break;
    iVar2 = iVar2 + 1;
  }
  bVar1 = true;
  if ((-1 < (int)(&DAT_089d7be4)[iVar2 * 5]) &&
     ((*(uint *)(DAT_089d726c + ((uint)(&DAT_089d7be4)[iVar2 * 5] >> 5) * 4) &
      1 << ((&DAT_089d7be4)[iVar2 * 5] & 0x1f)) == 0)) {
    bVar1 = false;
  }
  if (!bVar1) {
    return 0;
  }
  uVar3 = 2;
  if (((&DAT_089d7be8)[iVar2 * 5] != -1) &&
     ((*(uint *)(DAT_089d726c + ((uint)(&DAT_089d7be8)[iVar2 * 5] >> 5) * 4) &
      1 << ((&DAT_089d7be8)[iVar2 * 5] & 0x1f)) != 0)) {
    uVar3 = 6;
  }
  if (((&DAT_089d7bec)[iVar2 * 5] != -1) &&
     ((*(uint *)(DAT_089d726c + ((uint)(&DAT_089d7bec)[iVar2 * 5] >> 5) * 4) &
      1 << ((&DAT_089d7bec)[iVar2 * 5] & 0x1f)) != 0)) {
    uVar3 = uVar3 | 8;
  }
  if (DAT_089d5f1f != '\0') {
    return uVar3;
  }
  uVar4 = 4;
  do {
    iVar2 = FUN_088470dc(param_1,uVar4,0);
    if (iVar2 != 0) {
      uVar3 = uVar3 | 1 << (uVar4 & 0x1f) & 0xffffU;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0xd);
  return uVar3;
}

