/* Entry 0x088F049C | file offset 0x000ED474 | FUN_088f049c | bytes 200 */

void FUN_088f049c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  uVar2 = DAT_09afb89c >> 0x10;
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_088b6be0(iVar3);
    if ((iVar1 != 0) &&
       (iVar4 = iVar4 + iVar1, iVar1 = iVar3, (int)((uVar2 & 0x7fff) % 100) < iVar4)) break;
    iVar3 = iVar3 + 1;
    iVar1 = 0;
  } while (iVar3 < 6);
  FUN_088f145c(iVar1);
  return;
}

