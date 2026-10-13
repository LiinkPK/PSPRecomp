/* Entry 0x08871288 | file offset 0x0006E260 | Package_FilenameHash_casefold_CRC32_MSB | bytes 144 */

uint Package_FilenameHash_casefold_CRC32_MSB(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0xffffffff;
  cVar1 = *param_1;
  while (iVar3 = (int)cVar1, iVar3 != 0) {
    param_1 = param_1 + 1;
    if (((&DAT_089cf591)[iVar3] & 1) != 0) {
      iVar3 = iVar3 + 0x20;
    }
    uVar2 = uVar2 ^ iVar3 << 0x18;
    iVar3 = 0;
    do {
      uVar4 = uVar2 & 0x80000000;
      uVar2 = uVar2 << 1;
      if (uVar4 != 0) {
        uVar2 = uVar2 ^ 0x4c11db7;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    cVar1 = *param_1;
  }
  return ~uVar2;
}

