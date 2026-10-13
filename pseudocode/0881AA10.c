/* Entry 0x0881AA10 | file offset 0x000179E8 | FUN_0881aa10 | bytes 636 */

undefined4 FUN_0881aa10(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  FUN_0881a284();
  uVar2 = FUN_08899300();
  iVar1 = DAT_089d4910;
  iVar3 = FUN_088988b4(uVar2);
  *(int *)(param_1 + 4) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_08842100(iVar3 << 2);
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar4) = 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
  }
  iVar3 = *(int *)(iVar1 + 0x94);
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_08842100(iVar3 * 0xc);
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      return 0xfffffffe;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        piVar7 = (int *)(*(int *)(iVar1 + 0x98) + iVar4);
        *(int *)(*(int *)(param_1 + 0x10) + iVar5) = piVar7[1];
        *(int *)(*(int *)(param_1 + 0x10) + iVar5 + 4) = *(int *)(iVar1 + 0xa0) + *piVar7 * 4;
        iVar3 = iVar3 + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar5 + 8) = 1;
        iVar4 = iVar4 + 8;
        iVar5 = iVar5 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
  }
  iVar3 = *(int *)(iVar1 + 0xa8);
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_08842100(iVar3 << 2);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 == 0) {
      return 0xfffffffd;
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar5 = 0;
      do {
        *(int *)(*(int *)(param_1 + 0x18) + iVar5) = *(int *)(iVar1 + 0xac) + iVar4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x10;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x14));
    }
  }
  iVar3 = *(int *)(iVar1 + 0xb4);
  *(int *)(param_1 + 0x1c) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_08842100(iVar3 * 0x14);
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar3 == 0) {
      return 0xfffffffc;
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar5 = 0;
      do {
        iVar6 = *(int *)(iVar1 + 0xb8) + iVar4;
        *(int *)(*(int *)(param_1 + 0x20) + iVar5) = iVar6;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5 + 4) = *(undefined4 *)(iVar6 + 0xc);
        *(int *)(*(int *)(param_1 + 0x20) + iVar5 + 8) =
             *(int *)(iVar1 + 0xc4) + *(int *)(iVar6 + 8) * 8;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5 + 0xc) = *(undefined4 *)(iVar6 + 0x14);
        *(int *)(*(int *)(param_1 + 0x20) + iVar5 + 0x10) =
             *(int *)(iVar1 + 0xd0) + *(int *)(iVar6 + 0x10) * 8;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
        iVar5 = iVar5 + 0x14;
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
  }
  *param_1 = 1;
  return 0;
}

