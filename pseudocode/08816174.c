/* Entry 0x08816174 | file offset 0x0001314C | FUN_08816174 | bytes 1488 */

undefined4 FUN_08816174(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_0881baa8();
    iVar4 = FUN_0881c48c(uVar3);
    FUN_0881608c(param_1);
    FUN_08834df4(0x3f800000,param_1);
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
    iVar2 = DAT_089d4910;
    iVar6 = *(int *)(param_1 + 0x568);
    iVar8 = *(int *)(DAT_089d4910 + 0x44);
    iVar7 = 0;
    iVar9 = param_1 + 0x570;
    if (0 < *(int *)(iVar6 + 0x60)) {
      do {
        FUN_088372b0(param_1,*(undefined4 *)(iVar8 + (*(int *)(iVar6 + 100) + iVar7) * 0x20));
        iVar6 = *(int *)(param_1 + 0x568);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar6 + 0x60));
    }
    *(int *)(param_1 + 0x304) = param_2;
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 2;
    *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) & 0xffffff0f | 0x10;
    FUN_08824e24(iVar9);
    FUN_08822740(iVar9,param_2);
    iVar6 = *(int *)(param_1 + 0x178);
    bVar1 = iVar6 != 0;
    if (((*(int *)(*(int *)(param_1 + 0x568) + 0x50) == 0) && (param_2 != 0)) &&
       (*(float *)(param_2 + 0x84) < *(float *)(param_1 + 0x84))) {
      param_3 = 0x3eb;
    }
    if (((*(int *)(*(int *)(param_1 + 0x568) + 4) == 2) && (param_3 == 1000)) &&
       ((iVar4 == 0 && (bVar1)))) {
      iVar7 = FUN_08934944(0x3e9,iVar6 + 8,*(undefined4 *)(iVar6 + 4),8,&LAB_08814b08);
      iVar6 = *(int *)(param_1 + 0x178);
      bVar1 = iVar6 != 0;
      if (iVar7 != 0) {
        param_3 = 0x3e9;
      }
    }
    if ((bVar1) &&
       (iVar6 = FUN_08934944(param_3,iVar6 + 8,*(undefined4 *)(iVar6 + 4),8,&LAB_08814b08),
       iVar6 != 0)) {
      iVar6 = param_1 + 0x130;
      if (iVar4 == 0) {
        *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xefffffff;
      }
      else {
        *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x10000000;
      }
      FUN_0886b240(*(undefined4 *)(param_1 + 0x394));
      FUN_0882fa10(0,0,iVar6,param_3,0);
      *(undefined4 *)(param_1 + 0x318) = 0;
      FUN_0882f784(iVar6);
      FUN_08830444(0,iVar6);
      FUN_08831994(param_1);
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xfffffffe;
      FUN_0886ab1c(*(undefined4 *)(param_1 + 0x394),param_1 + 0x164,0);
      FUN_088226bc(iVar9);
      if (iVar4 == 1) {
        FUN_0882f784(iVar6);
        uVar11 = FUN_0882fc20(iVar6,0xffffffff);
        FUN_08830444(uVar11,iVar6);
        FUN_0886ab1c(*(undefined4 *)(param_1 + 0x394),param_1 + 0x164,0);
        FUN_088227d0(iVar9);
        iVar6 = 1;
        do {
          FUN_08822d08(iVar9,iVar6);
          FUN_08822458(0x43960000,iVar9);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
        FUN_08822d08(iVar9,0);
      }
      *(bool *)(param_1 + 0x4ec) = iVar4 == 0;
    }
    iVar4 = *(int *)(param_1 + 0x568);
    if ((-1 < *(int *)(iVar4 + 0x54)) &&
       (iVar6 = *(int *)(*(int *)(param_1 + 0x390) + 0x5c), iVar6 != 0)) {
      iVar4 = FUN_088a9de8(iVar6,*(int *)(iVar4 + 0x54),param_1 + 0x4c8,0,0);
      if (iVar4 != 0) {
        FUN_088a7284(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                     *(undefined4 *)(param_1 + 0x88),iVar4);
      }
      iVar4 = *(int *)(param_1 + 0x568);
    }
    if ((-1 < *(int *)(iVar4 + 0x58)) && (*(int *)(DAT_089d6ae0 + 8) != 0)) {
      iVar4 = FUN_088a9de8(*(int *)(DAT_089d6ae0 + 8),*(int *)(iVar4 + 0x58),param_1 + 0x4c8,0,0);
      if (iVar4 != 0) {
        FUN_088a6a38(0xbf800000,iVar4,1,param_1 + 0x4c8,0xffffffff,0xffffffff);
      }
    }
    piVar5 = (int *)FUN_0881ba98(uVar3);
    iVar6 = *(int *)(*(int *)(param_1 + 0x568) + 0x20);
    iVar4 = *piVar5 * 0x343fd + 0x269ec3;
    iVar6 = (int)(iVar4 >> 0x10 & 0x7fffU) %
            ((*(int *)(*(int *)(param_1 + 0x568) + 0x24) - iVar6) + 1) + iVar6;
    *piVar5 = iVar4;
    if ((0 < iVar6) && (iVar4 = 0, 0 < *(int *)(*(int *)(param_1 + 0x568) + 0x60))) {
      iVar7 = *(int *)(param_1 + 0x568);
      do {
        iVar8 = *(int *)(iVar7 + 0x60);
        iVar9 = *piVar5 * 0x343fd + 0x269ec3;
        *piVar5 = iVar9;
        if (((float)(iVar9 >> 0x10 & 0x7fff) * 3.051851e-05 <= (float)iVar6 / (float)(iVar8 - iVar4)
            ) && (uVar10 = *(int *)(iVar7 + 100) + iVar4, uVar10 < *(uint *)(iVar2 + 0x40))) {
          iVar8 = *(int *)(iVar2 + 0x44);
          iVar7 = 0;
          do {
            iVar7 = FUN_08835134(param_1,0xd,iVar7);
            if (iVar7 == 0) break;
          } while ((uint)*(ushort *)(iVar7 + 6) != *(uint *)(iVar8 + uVar10 * 0x20));
          if (iVar7 != 0) {
            FUN_0881591c(param_1,param_2,iVar7,1);
            iVar6 = iVar6 + -1;
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0x568) + 0x60);
        }
        iVar4 = iVar4 + 1;
        if (iVar8 <= iVar4) break;
        iVar7 = *(int *)(param_1 + 0x568);
      } while( true );
    }
    uVar3 = 0;
  }
  return uVar3;
}

