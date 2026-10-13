/* Entry 0x0887A6A0 | file offset 0x00077678 | FUN_0887a6a0 | bytes 352 */

void FUN_0887a6a0(ushort *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  ushort uVar14;
  
  sVar1 = FUN_0887a898();
  iVar2 = FUN_0887a8f0(param_1);
  iVar3 = FUN_0887a918(param_1);
  uVar6 = 0;
  if (0 < sVar1) {
    puVar7 = param_1 + 4;
    puVar8 = puVar7;
    puVar9 = param_1;
    do {
      puVar9 = puVar9 + 1;
      if (iVar2 == 0) {
        if (iVar3 == 0) {
          iVar12 = (uint)*puVar9 * 2;
        }
        else {
          iVar12 = (uint)*puVar8 * 2;
        }
      }
      else {
        iVar12 = *(int *)puVar7 << 2;
      }
      if (iVar12 != 0) {
        puVar10 = (uint *)((int)param_1 + iVar12);
        if (iVar2 == 0) {
          puVar13 = (ushort *)((int)puVar10 + 2);
          uVar11 = (ushort)*puVar10 / 2;
        }
        else {
          uVar11 = *puVar10 >> 1;
          puVar13 = (ushort *)((int)param_1 + iVar12 + 4);
        }
        uVar5 = 0;
        uVar4 = uVar6;
        if (uVar11 != 0) {
          do {
            if ((int)uVar4 < 0) {
              uVar14 = (&DAT_089d68aa)[-(-uVar4 & 0xf)];
            }
            else {
              uVar14 = (&DAT_089d68aa)[uVar4 & 0xf];
            }
            *puVar13 = *puVar13 ^ uVar14;
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar5 < uVar11);
        }
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 1;
    } while ((int)uVar6 < (int)sVar1);
  }
  return;
}

