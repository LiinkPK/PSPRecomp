/* Entry 0x08888FBC | file offset 0x00085F94 | FUN_08888fbc | bytes 164 */

void FUN_08888fbc(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_089d6a10 + 0x740);
  if (iVar1 == 0) {
    FUN_088feb60(1);
  }
  else if (iVar1 == 1) {
    FUN_088feaec(1);
  }
  else if (iVar1 == 3) {
    FUN_088fec30(1);
  }
  else if (iVar1 == 2) {
    FUN_088fea84(1);
  }
  return;
}

