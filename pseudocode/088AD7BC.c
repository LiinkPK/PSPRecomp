/* Entry 0x088AD7BC | file offset 0x000AA794 | FUN_088ad7bc | bytes 156 */

uint FUN_088ad7bc(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = &DAT_089d70fc;
  uVar2 = 0;
  uVar4 = DAT_089d70fc;
  while (uVar4 != 0xffffffff) {
    uVar3 = puVar5[1];
    bVar1 = false;
    if (uVar3 == 0xffffffff) {
      bVar1 = true;
    }
    else if ((*(uint *)(DAT_089d726c + (uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) != 0) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = uVar2 | 1 << (uVar4 & 0x1f) & 0xffU;
    }
    puVar5 = puVar5 + 3;
    uVar4 = *puVar5;
  }
  return uVar2;
}

