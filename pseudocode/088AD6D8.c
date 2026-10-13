/* Entry 0x088AD6D8 | file offset 0x000AA6B0 | FUN_088ad6d8 | bytes 228 */

undefined4 FUN_088ad6d8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_088ad574();
  iVar3 = 0;
  uVar2 = 0;
  uVar5 = uVar1;
  do {
    if ((uVar5 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar5 = uVar5 >> 1;
  } while (uVar2 < 0x20);
  DAT_09b4d474 = DAT_09b4d474 * 0x343fd + 0x269ec3;
  iVar4 = 0;
  uVar5 = 0;
  do {
    if (iVar4 == (int)(DAT_09b4d474 >> 0x10 & 0x7fffU) % iVar3) {
      return (&DAT_089d6f60)[uVar5 * 3];
    }
    if ((uVar1 & 1) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = uVar5 + 1;
    uVar1 = uVar1 >> 1;
  } while (uVar5 < 0x20);
  return DAT_089d6f60;
}

