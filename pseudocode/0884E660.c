/* Entry 0x0884E660 | file offset 0x0004B638 | FUN_0884e660 | bytes 552 */

void FUN_0884e660(void)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  uint *local_2c;
  
  local_30 = FUN_0884e888;
  iVar8 = 0;
  local_2c = &DAT_09b166f0;
  while (iVar8 = FUN_08841f84(iVar8), puVar2 = local_2c, iVar8 != 0) {
    uVar9 = 0;
    puVar10 = (undefined4 *)(iVar8 + 0x5d8);
    puVar6 = local_2c;
    do {
      uVar7 = 1 << (uVar9 & 0x1f);
      bVar1 = (*puVar2 & uVar7) != 0;
      if ((*(uint *)(iVar8 + 0x6d8) & uVar7) == 0) {
        if ((bVar1) && (uVar3 = puVar6[2], uVar3 != 0)) {
          *(uint *)(uVar3 + 0xdc) = *(uint *)(uVar3 + 0xdc) | 0x100;
          FUN_088a6aa4(puVar6[2]);
          puVar6[2] = 0;
          *puVar2 = *puVar2 & ~uVar7;
        }
      }
      else {
        if (((bVar1) && (puVar2[1] != (int)*(short *)(iVar8 + 0x180))) &&
           (uVar3 = puVar6[2], uVar3 != 0)) {
          *(uint *)(uVar3 + 0xdc) = *(uint *)(uVar3 + 0xdc) | 0x100;
          FUN_088a6aa4(puVar6[2]);
          puVar6[2] = 0;
          *puVar2 = *puVar2 & ~uVar7;
        }
        if (!bVar1) {
          iVar5 = puVar10[3];
          if (iVar5 == 0) {
            uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x390) + 0x5c);
            iVar5 = iVar8;
          }
          else {
            uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x390) + 0x5c);
          }
          local_3c = puVar10[3];
          local_38 = *puVar10;
          local_34 = puVar10[1];
          local_40 = iVar8;
          uVar3 = FUN_088a9e24(uVar4,local_30,&local_40,iVar5 + 0x4c8,0,0);
          puVar6[2] = uVar3;
          if (uVar3 != 0) {
            FUN_088a72e8(puVar10[2],puVar10[2]);
            *puVar2 = *puVar2 | uVar7;
            puVar2[1] = (int)*(short *)(iVar8 + 0x180);
          }
        }
      }
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 4;
    } while ((int)uVar9 < 0x10);
    local_2c = local_2c + 0x12;
  }
  return;
}

