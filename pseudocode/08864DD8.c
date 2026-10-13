/* Entry 0x08864DD8 | file offset 0x00061DB0 | FUN_08864dd8 | bytes 152 */

void FUN_08864dd8(void)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  pfVar1 = DAT_089d5ea8;
  iVar2 = FUN_08864d84();
  if (iVar2 == 0) {
    DAT_089d5eac = *(undefined4 *)(DAT_089d69e0 + 0x18);
  }
  else {
    if ((0.0 < pfVar1[1]) && (fVar3 = pfVar1[1] - *pfVar1, pfVar1[1] = fVar3, fVar3 <= 0.0)) {
      FUN_08864cf0(pfVar1);
    }
    DAT_089d5eac = FUN_08864d64();
  }
  return;
}

