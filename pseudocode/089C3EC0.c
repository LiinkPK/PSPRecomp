/* Entry 0x089C3EC0 | file offset 0x001C0E98 | FUN_089c3ec0 | bytes 984 */

undefined4 FUN_089c3ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  iVar1 = DAT_09b6f478;
  if (*(int *)(param_2 + 0xc) < 0) {
    uVar10 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x34);
    if (iVar2 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(iVar2 + *(int *)(param_2 + 0xc) * 4) + 0x10);
    }
  }
  iVar2 = FUN_0897212c(*(undefined4 *)(DAT_09b6f478 + 0xa0),uVar10);
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_08971134(*(undefined4 *)(iVar1 + 0x18),iVar2 << 4,&local_40,1);
    if (iVar2 != 0) {
      iVar5 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_40;
    }
    *(int *)(param_1 + 0x50) = iVar2;
    iVar2 = FUN_08971134(*(undefined4 *)(iVar1 + 0x18),*(int *)(param_1 + 0x54) << 2,&local_3c,1);
    if (iVar2 != 0) {
      iVar5 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_3c;
    }
    *(int *)(param_1 + 0x58) = iVar2;
    iVar2 = FUN_08971134(*(undefined4 *)(iVar1 + 0x18),*(int *)(param_1 + 0x54) << 2,&local_38,1);
    if (iVar2 != 0) {
      iVar5 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_38;
    }
    *(int *)(param_1 + 0x5c) = iVar2;
    FUN_08972154(*(undefined4 *)(iVar1 + 0xa0),uVar10,*(undefined4 *)(param_1 + 0x58));
    uVar11 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar2 = 0;
      iVar5 = 0;
      do {
        piVar3 = *(int **)(**(int **)(iVar1 + 0xa4) + *(int *)(*(int *)(param_1 + 0x58) + iVar2) * 4
                          );
        iVar8 = *piVar3;
        if (iVar8 + *(int *)(iVar8 + 0x18) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar8 + *(int *)(iVar8 + 0x18) + 0x10;
        }
        *(int *)(*(int *)(param_1 + 0x50) + iVar5 + 0xc) = iVar8;
        *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar5) =
             *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x18));
        *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar5 + 4) =
             *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x18) + 4);
        iVar8 = *piVar3;
        piVar3 = (int *)(iVar8 + *(int *)(iVar8 + 0x18));
        if (piVar3 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar8 + *(int *)(iVar8 + 0x18) + 0x10;
        }
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else if (piVar3[1] == 0) {
          iVar8 = *piVar3 << 2;
        }
        else {
          iVar8 = *piVar3 * 2;
        }
        *(int *)(*(int *)(param_1 + 0x50) + iVar5 + 8) = iVar8;
        iVar8 = *(int *)(param_1 + 0x50) + iVar5;
        if (*(int *)(iVar8 + 0xc) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2) = 0;
          uVar4 = *(uint *)(param_1 + 0x54);
        }
        else {
          if (*(int *)(iVar8 + 4) == 0) {
            iVar8 = FUN_08971134(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar8 + 8),&local_34,
                                 1);
            if (iVar8 == 0) {
              iVar6 = *(int *)(param_1 + 0x5c);
            }
            else {
              iVar6 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4
              ;
              *(int *)(iVar6 + 0xb4) = *(int *)(iVar6 + 0xb4) + local_34;
              iVar6 = *(int *)(param_1 + 0x5c);
            }
            *(int *)(iVar6 + iVar2) = iVar8;
            iVar8 = *(int *)(param_1 + 0x50) + iVar5;
            uVar10 = *(undefined4 *)(iVar8 + 0xc);
            uVar7 = *(undefined4 *)(iVar8 + 8);
            uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2);
          }
          else {
            iVar8 = FUN_08971134(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar8 + 8),&local_30,
                                 1);
            if (iVar8 == 0) {
              iVar6 = *(int *)(param_1 + 0x5c);
            }
            else {
              iVar6 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4
              ;
              *(int *)(iVar6 + 0xb4) = *(int *)(iVar6 + 0xb4) + local_30;
              iVar6 = *(int *)(param_1 + 0x5c);
            }
            *(int *)(iVar6 + iVar2) = iVar8;
            iVar8 = *(int *)(param_1 + 0x50) + iVar5;
            uVar10 = *(undefined4 *)(iVar8 + 0xc);
            uVar7 = *(undefined4 *)(iVar8 + 8);
            uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2);
          }
          FUN_08935524(uVar9,uVar10,uVar7);
          uVar4 = *(uint *)(param_1 + 0x54);
        }
        uVar11 = uVar11 + 1;
        iVar2 = iVar2 + 4;
        iVar5 = iVar5 + 0x10;
      } while (uVar11 < uVar4);
    }
  }
  return 1;
}

