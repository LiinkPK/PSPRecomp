/* Entry 0x088D5CE8 | file offset 0x000D2CC0 | FUN_088d5ce8 | bytes 292 */

uint FUN_088d5ce8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int local_a0 [35];
  
  piVar4 = local_a0;
  uVar6 = 0;
  if ((*(uint *)(DAT_089d8140 + 0x1c) & 1) == 0) {
    if (DAT_089d5f20 == '\0') {
      piVar4 = &DAT_089d7be0;
      iVar2 = DAT_089d7be0;
      while (iVar2 != -1) {
        uVar5 = piVar4[1];
        bVar1 = true;
        if ((-1 < (int)uVar5) &&
           ((*(uint *)(DAT_089d726c + (uVar5 >> 5) * 4) & 1 << (uVar5 & 0x1f)) == 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          uVar6 = uVar6 | 1 << (iVar2 - 1U & 0x1f);
        }
        piVar4 = piVar4 + 5;
        iVar2 = *piVar4;
      }
    }
    else {
      uVar6 = 0x40000000;
    }
  }
  else {
    iVar2 = FUN_08900c90(DAT_089d8140,local_a0,0x23);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 | 1 << (*piVar4 - 1U & 0x1f);
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return uVar6;
}

