/* Entry 0x08993118 | file offset 0x001900F0 | FUN_08993118 | bytes 300 */

void FUN_08993118(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  
  ppuVar12 = &PTR_FUN_089c60b0;
  iVar3 = 0;
  bVar1 = false;
  ppuVar4 = ppuVar12;
  puVar7 = PTR_FUN_089c60b0;
  while (puVar7 != (undefined *)0x0) {
    if (ppuVar4[1] == (undefined *)0x0) {
      ppuVar4[1] = (undefined *)0x10000;
    }
    else {
      bVar1 = true;
    }
    ppuVar4 = ppuVar4 + 2;
    iVar3 = iVar3 + 1;
    puVar7 = *ppuVar4;
  }
  pcVar2 = (code *)PTR_FUN_089c60b0;
  if (bVar1) {
    while (iVar3 = iVar3 + -1, pcVar2 = (code *)PTR_FUN_089c60b0, -1 < iVar3) {
      iVar9 = 0;
      if (0 < iVar3) {
        ppuVar6 = &PTR_FUN_089c60b0;
        ppuVar8 = ppuVar12;
        ppuVar4 = ppuVar12;
        do {
          ppuVar5 = ppuVar4 + 2;
          if ((int)ppuVar8[3] < (int)ppuVar8[1]) {
            puVar7 = *ppuVar6;
            puVar10 = ppuVar6[1];
            puVar11 = ppuVar4[3];
            *ppuVar6 = *ppuVar5;
            ppuVar6[1] = puVar11;
            *ppuVar5 = puVar7;
            ppuVar4[3] = puVar10;
          }
          iVar9 = iVar9 + 1;
          ppuVar8 = ppuVar8 + 2;
          ppuVar6 = ppuVar6 + 2;
          ppuVar4 = ppuVar5;
        } while (iVar9 < iVar3);
      }
    }
  }
  while (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    ppuVar12 = ppuVar12 + 2;
    pcVar2 = (code *)*ppuVar12;
  }
  return;
}

