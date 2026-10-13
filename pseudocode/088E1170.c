/* Entry 0x088E1170 | file offset 0x000DE148 | FUN_088e1170 | bytes 924 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088e1170(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + 0x1634);
  if (4 < uVar3) {
    return;
  }
  if (uVar3 == 1) {
LAB_088e1224:
    iVar5 = 0;
    iVar6 = param_1;
    do {
      if (-1 < *(int *)(iVar6 + 0x1638)) {
        iVar4 = 0;
        iVar7 = param_1;
        do {
          if (*(int *)(iVar7 + 0x53c) == 0) {
            uVar1 = FUN_088443a0(DAT_089d4960,*(int *)(iVar6 + 0x1638),
                                 *(undefined4 *)(param_1 + 0x162c),*(undefined4 *)(param_1 + 0x1630)
                                );
            *(undefined4 *)(iVar7 + 0x53c) = uVar1;
            break;
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar4 < 0x20);
      }
      *(undefined4 *)(iVar6 + 0x1638) = 0xffffffff;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < 0x10);
    if (*(char *)(DAT_089d4960 + 0x60) != '\0') {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x1678);
    *(int *)(param_1 + 0x1634) = *(int *)(param_1 + 0x1634) + 1;
LAB_088e12cc:
    if (-1 < iVar6) {
      *(undefined1 *)(param_1 + 0x17b3) = 1;
      iVar6 = FUN_08893cf8(DAT_089d6ac8);
      if (iVar6 != 0) {
        if (*(char *)(DAT_089d6ac8 + 0x6b2) != '\0') {
          *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 0;
          FUN_088e0814(param_1);
          *(undefined1 *)(param_1 + 0x17be) = 2;
          return;
        }
        *(char *)(param_1 + 0x17be) = *(char *)(param_1 + 0x17be) + -1;
        if ('\0' < *(char *)(param_1 + 0x17be)) {
          return;
        }
        FUN_088e0888(param_1,0);
        return;
      }
      FUN_08893c94(DAT_089d6ac8,*(undefined4 *)(param_1 + 0x1678));
      if (-1 < *(int *)(param_1 + 0x167c)) {
        FUN_08893cc0(DAT_089d6ac8,*(int *)(param_1 + 0x167c));
      }
      func_0x08b53890(_DAT_08b54330);
      if (*(char *)(param_1 + 0x17b0) != '\0') {
        uVar1 = FUN_08899300();
        FUN_08899178(uVar1,*(undefined4 *)(param_1 + 0x162c),*(undefined4 *)(param_1 + 0x1630));
        *(undefined1 *)(param_1 + 0x17b2) = 1;
        *(undefined1 *)(param_1 + 0x17b0) = 0;
      }
      FUN_088e8914(param_1 + 0x1270,*(undefined4 *)(param_1 + 0x162c),
                   *(undefined4 *)(param_1 + 0x1630));
      FUN_08893d04(DAT_089d6ac8,*(undefined4 *)(param_1 + 0x162c),*(undefined4 *)(param_1 + 0x1630),
                   0x8b53830);
      *(undefined1 *)(param_1 + 0x17b1) = 1;
      *(undefined4 *)(param_1 + 0x1678) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x167c) = 0xffffffff;
    }
    bVar2 = false;
    if ((*(int *)(DAT_089d6ac8 + 0x724) != 0) &&
       (bVar2 = false, *(int *)(DAT_089d6ac8 + 0x724) != 10)) {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
    iVar6 = FUN_08899300();
    bVar2 = false;
    if (*(int *)(iVar6 + 0x100) != 0) {
      iVar6 = FUN_08899300();
      bVar2 = false;
      if (*(int *)(iVar6 + 0x100) != 5) {
        bVar2 = true;
      }
    }
    if (bVar2) {
      return;
    }
    *(int *)(param_1 + 0x1634) = *(int *)(param_1 + 0x1634) + 1;
  }
  else {
    if (uVar3 == 2) {
      iVar6 = *(int *)(param_1 + 0x1678);
      goto LAB_088e12cc;
    }
    if (uVar3 != 3) {
      if (uVar3 == 4) goto LAB_088e14c0;
      FUN_088eadec(param_1 + 0x12d8);
      if (*(int *)(param_1 + 0x12f8) != 0) {
        return;
      }
      if (*(char *)(param_1 + 0x17af) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x17af) = 0;
      *(int *)(param_1 + 0x1634) = *(int *)(param_1 + 0x1634) + 1;
      goto LAB_088e1224;
    }
  }
  FUN_088e878c(param_1 + 0x1270);
  bVar2 = false;
  if ((*(int *)(param_1 + 0x1288) != 0) && (bVar2 = false, *(int *)(param_1 + 0x1288) != 5)) {
    bVar2 = true;
  }
  if (bVar2) {
    return;
  }
  if (*(char *)(param_1 + 0x17b3) != '\0') {
    FUN_088e07b0(param_1);
    *(undefined1 *)(param_1 + 0x17b3) = 0;
  }
  *(int *)(param_1 + 0x1634) = *(int *)(param_1 + 0x1634) + 1;
LAB_088e14c0:
  FUN_088e6a98(param_1 + 0x12b0);
  if (*(int *)(param_1 + 0x12c4) == 0) {
    *(undefined4 *)(param_1 + 0x1634) = 0;
  }
  return;
}

