/* Entry 0x0887A940 | file offset 0x00077918 | FUN_0887a940 | bytes 396 */

undefined1 * FUN_0887a940(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *local_30;
  byte local_2c [4];
  byte *local_28;
  
  pbVar9 = &DAT_09b48c88;
  iVar8 = 0;
  bVar2 = true;
  local_30 = param_1;
LAB_0887a980:
  do {
    if ((!bVar2) || (bVar1 = *local_30, bVar1 == 0)) {
      *pbVar9 = 0;
      pbVar9[1] = 0;
      return &DAT_09b48c88;
    }
    if ((0xf < bVar1) && (bVar1 < 0x20)) {
      iVar3 = FUN_0887e7f4();
      iVar5 = iVar3 * 2 + 2;
      iVar6 = 0;
      iVar3 = iVar8;
      if (0 < iVar5) {
        do {
          iVar8 = iVar3 + 1;
          bVar1 = *local_30;
          local_30 = local_30 + 1;
          *pbVar9 = bVar1;
          bVar2 = iVar8 < 0x3fe;
          pbVar9 = &DAT_09b48c89 + iVar3;
          if (!bVar2) break;
          iVar6 = iVar6 + 1;
          iVar3 = iVar8;
        } while (iVar6 < iVar5);
      }
      goto LAB_0887a980;
    }
    uVar4 = FUN_0893fb08(&local_30);
    local_28 = local_2c;
    FUN_0893fa70(&local_28,uVar4);
    iVar3 = (((int)local_28 - (int)local_2c) / 2) * 2;
    iVar6 = 0;
    pbVar7 = local_2c;
    iVar5 = iVar8;
    if (0 < iVar3) {
      do {
        iVar8 = iVar5 + 1;
        *pbVar9 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar2 = iVar8 < 0x3fe;
        pbVar9 = &DAT_09b48c89 + iVar5;
        if (!bVar2) break;
        iVar6 = iVar6 + 1;
        iVar5 = iVar8;
      } while (iVar6 < iVar3);
    }
  } while( true );
}

