/* Entry 0x0891F7E0 | file offset 0x0011C7B8 | FUN_0891f7e0 | bytes 488 */

void FUN_0891f7e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  uVar1 = FUN_088fe7c8(&DAT_089ce7c0,0);
  iVar2 = FUN_0885c6cc(param_1[1],uVar1,0x40,0,1,0);
  uVar1 = FUN_088fe708(&DAT_089ce7c0,iVar2,uVar1,0);
  FUN_088fe944(&DAT_089ce7c0,iVar2,uVar1);
  FUN_08935970(iVar2,&DAT_089ce7dc);
  iVar6 = *(int *)(iVar2 + 0xc);
  if (200 < iVar6) {
    iVar6 = 200;
  }
  iVar8 = *param_1;
  puVar7 = (undefined4 *)(iVar2 + 0x10);
  if (iVar8 < 1) {
    if (-1 < iVar8) {
      iVar8 = 0;
      *(int *)param_1[2] = iVar6;
      iVar9 = 0;
      if (0 < iVar6) {
        do {
          puVar13 = (undefined4 *)(param_1[2] + iVar9 + 4);
          iVar12 = 0;
          iVar5 = 0x11;
          uVar1 = *puVar7;
          puVar4 = puVar7;
          puVar10 = puVar13;
          do {
            uVar3 = puVar4[1];
            *puVar10 = uVar1;
            iVar12 = iVar12 + 8;
            puVar10[1] = uVar3;
            puVar4 = (undefined4 *)((int)puVar7 + iVar12);
            iVar5 = iVar5 + -1;
            uVar1 = *puVar4;
            puVar10 = (undefined4 *)((int)puVar13 + iVar12);
          } while (iVar5 != 0);
          *puVar10 = uVar1;
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x8c;
          puVar7 = puVar7 + 0x23;
        } while (iVar8 < iVar6);
      }
    }
  }
  else if (iVar8 < 2) {
    iVar8 = 0;
    *(int *)param_1[3] = iVar6;
    if (0 < iVar6) {
      iVar9 = 0;
      do {
        uVar1 = puVar7[1];
        iVar5 = param_1[3] + iVar9;
        uVar3 = puVar7[2];
        uVar14 = puVar7[4];
        *(undefined4 *)(iVar5 + 0x90) = *puVar7;
        uVar11 = puVar7[3];
        *(undefined4 *)(iVar5 + 0x94) = uVar1;
        *(undefined4 *)(iVar5 + 0x98) = uVar3;
        *(undefined4 *)(iVar5 + 0x9c) = uVar11;
        *(undefined4 *)(iVar5 + 0xa0) = uVar14;
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 0x23;
        iVar9 = iVar9 + 0x14;
      } while (iVar8 < iVar6);
    }
  }
  FUN_0885c538(param_1[1],iVar2,0x40);
  return;
}

