/* Entry 0x08924AD8 | file offset 0x00121AB0 | FUN_08924ad8 | bytes 524 */

void FUN_08924ad8(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *(int *)(param_1 + 0x10);
  bVar2 = false;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  do {
    iVar7 = (int)*(short *)(iVar5 + iVar9 + 0x1a);
    if (iVar7 == -1) {
      uVar1 = *param_1;
      sVar6 = *(short *)(iVar5 + 0x12);
      goto LAB_08924c10;
    }
    uVar3 = func_0x08b45b44(param_2,iVar7);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar8 + 0x74) = uVar3;
    iVar5 = FUN_089227d8(uVar3);
    if (iVar5 < 9) {
      if (6 < iVar5) {
        if (iVar5 < 8) goto LAB_08924be4;
        iVar7 = 0;
        iVar5 = 0;
        do {
          iVar4 = FUN_08922820(uVar3);
          if (*(short *)(iVar4 + iVar5) == -1) {
            bVar2 = true;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 6;
        } while (iVar7 < 1);
      }
    }
    else if ((0x12 < iVar5) && (iVar5 < 0x15)) {
LAB_08924be4:
      *param_1 = *param_1 | 1;
    }
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 2;
    iVar8 = iVar8 + 4;
    iVar5 = *(int *)(param_1 + 0x10);
  } while (iVar10 < 0x10);
  uVar1 = *param_1;
  sVar6 = *(short *)(iVar5 + 0x12);
LAB_08924c10:
  if (sVar6 < 4) {
    if (sVar6 < 3) goto LAB_08924c4c;
LAB_08924c38:
    *param_1 = uVar1 | 2;
    uVar1 = *param_1;
    sVar6 = *(short *)(iVar5 + 0x12);
  }
  else {
    if (sVar6 == 5) goto LAB_08924c38;
LAB_08924c4c:
    *param_1 = uVar1 & 0xfffd;
    uVar1 = *param_1;
    sVar6 = *(short *)(iVar5 + 0x12);
  }
  if (sVar6 < 4) {
    if (sVar6 < 3) {
LAB_08924c94:
      *param_1 = uVar1 & 0xfffb;
      goto LAB_08924ca0;
    }
  }
  else if (sVar6 != 5) goto LAB_08924c94;
  *param_1 = uVar1 | 4;
LAB_08924ca0:
  if (bVar2) {
    param_1[1] = 3;
    param_1[2] = 0;
  }
  return;
}

