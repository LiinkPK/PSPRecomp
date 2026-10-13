/* Entry 0x088CA9A8 | file offset 0x000C7980 | FUN_088ca9a8 | bytes 872 */

void FUN_088ca9a8(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  int local_30;
  undefined4 *local_2c;
  
  local_2c = param_2;
  switch(*(undefined4 *)(param_1 + 0xbdb8)) {
  case 0:
    *(undefined4 *)(param_1 + 0xbdb8) = 2;
    *(uint *)(DAT_089d6008 + 0x264) = *(uint *)(DAT_089d6008 + 0x264) | 1;
    iVar2 = 0;
    iVar11 = param_1 + 0x10000;
    iVar12 = param_1 + 0x10000;
    iVar13 = param_1 + 0x10000;
    local_34 = &DAT_089d7758;
    do {
      *(undefined4 *)(iVar11 + -0x4234) = 0;
      *(undefined4 *)(iVar12 + -0x422c) = 0;
      *(undefined4 *)(iVar13 + -0x4224) = 0;
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 4;
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 4;
    } while (iVar2 < 2);
    *(undefined4 *)(param_1 + 0xbde4) = 0;
    bVar1 = false;
    if ((*(uint *)(param_1 + 0xbde8) & 2) != 0) {
      FUN_088ff7cc();
      FUN_088ff868();
      bVar1 = (*(uint *)(param_1 + 0xbde8) & 2) != 0;
    }
    goto LAB_088cab00;
  case 2:
    bVar1 = (*(uint *)(param_1 + 0xbde8) & 2) != 0;
    local_34 = &DAT_089d7758;
LAB_088cab00:
    local_30 = param_1 + 0x10000;
    local_38 = param_1;
    if (bVar1) {
      iVar2 = FUN_088ca540(param_1);
      if (iVar2 == 0) {
        FUN_088ff8f8(0);
      }
      else {
        FUN_088ff8f8(1);
      }
    }
    iVar16 = 0;
    iVar13 = local_38 + 0x10000;
    iVar11 = local_38 + 0x10000;
    iVar15 = local_38 + 0x10000;
    iVar12 = local_38 + 0x10000;
    puVar14 = local_2c;
    iVar2 = local_38;
    do {
      iVar3 = *(int *)(iVar13 + -0x422c);
      if ((0 < iVar3) || (*(int *)(iVar11 + -0x4224) < *(int *)(iVar15 + -0x5e88))) {
        if (iVar3 < 1) {
          iVar3 = 0;
          iVar4 = 0;
          iVar5 = iVar2 + *(int *)(iVar11 + -0x4224) * 3;
          do {
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 * 0x100 + (uint)*(byte *)(iVar5 + 0x22e8);
            iVar5 = iVar5 + 1;
          } while (iVar4 < 3);
          local_40 = 0;
          local_3c = 0;
          FUN_088ca664(iVar3,&local_40,&local_3c);
          *(undefined4 *)(iVar12 + -0x4234) = local_40;
          iVar3 = *(int *)(iVar11 + -0x4224);
          *(int *)(iVar13 + -0x422c) = local_3c;
          *(int *)(iVar11 + -0x4224) = iVar3 + 1;
          iVar3 = local_3c;
        }
        uVar7 = 0;
        uVar6 = 0;
        *(int *)(iVar13 + -0x422c) = iVar3 + -1;
        uVar8 = 0;
        uVar10 = *puVar14;
        puVar9 = local_34;
        do {
          if ((*(uint *)(iVar12 + -0x4234) & 1 << (uVar8 & 0x1f)) != 0) {
            uVar7 = uVar7 | puVar9[1];
            uVar6 = uVar6 | *puVar9;
          }
          uVar8 = uVar8 + 1;
          puVar9 = puVar9 + 2;
        } while ((int)uVar8 < 0xf);
        FUN_08872970(uVar10,uVar7,uVar6,uVar7);
        if ((*(uint *)(iVar12 + -0x4234) & 0x8000) != 0) {
          FUN_08871bc4(uVar10);
          FUN_08871bd0(uVar10);
        }
      }
      iVar16 = iVar16 + 1;
      iVar13 = iVar13 + 4;
      iVar11 = iVar11 + 4;
      iVar15 = iVar15 + 4;
      iVar2 = iVar2 + 0x3f48;
      iVar12 = iVar12 + 4;
      puVar14 = puVar14 + 1;
    } while (iVar16 < 2);
    *(int *)(local_30 + -0x421c) = *(int *)(local_30 + -0x421c) + 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xbdb8) = 5;
    break;
  case 5:
    break;
  case 6:
  }
  return;
}

