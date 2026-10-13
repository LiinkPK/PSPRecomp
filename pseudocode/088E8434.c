/* Entry 0x088E8434 | file offset 0x000E540C | FUN_088e8434 | bytes 700 */

void FUN_088e8434(int *param_1,ushort *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = DAT_089d4938;
  uVar4 = (uint)*param_2;
  if (uVar4 - 0x1f7 < 5) {
    if (uVar4 == 0x1f8) {
      *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 0;
    }
    else if (uVar4 == 0x1f9) {
      if (*param_1 != 0) {
        *(undefined1 *)*param_1 = 1;
      }
      iVar2 = FUN_088954c4(0x48);
      iVar3 = 0;
      if (iVar2 != 0) {
        FUN_08895528(iVar2);
        iVar3 = iVar2;
      }
      *param_1 = iVar3;
      piVar1 = DAT_089d6ad0;
      if (DAT_089d6ad0[1] == 0) {
        DAT_089d6ad0[1] = iVar3;
        *piVar1 = iVar3;
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      else {
        *(int *)(DAT_089d6ad0[1] + 4) = iVar3;
        *(undefined4 *)(iVar3 + 4) = 0;
        piVar1[1] = iVar3;
      }
      iVar3 = FUN_0889547c(*param_1);
      iVar2 = FUN_088954a0(*param_1);
      iVar7 = *(int *)(param_2 + 4);
      iVar8 = *(int *)(param_2 + 6);
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined4 *)(param_2 + 10);
      iVar10 = *(int *)(param_2 + 0xc);
      iVar9 = *param_1;
      *(int *)(iVar9 + 0x1c) = iVar7;
      *(int *)(iVar9 + 0x20) = iVar8;
      *(int *)(iVar9 + 0x24) = iVar3 + iVar7 * -2;
      *(int *)(iVar9 + 0x28) = iVar2 + iVar8 * -2;
      iVar3 = *param_1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x1e0;
      *(undefined4 *)(iVar3 + 0x18) = 0x110;
      if (iVar10 < 2) {
        if (-1 < iVar10) {
          if (iVar10 < 1) {
            iVar3 = *param_1;
            *(undefined4 *)(iVar3 + 0x30) = 0;
            *(undefined4 *)(iVar3 + 0x34) = 2;
            *(undefined4 *)(iVar3 + 0x38) = 10;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            *(undefined4 *)(iVar3 + 0x40) = uVar6;
          }
          else {
            iVar3 = *param_1;
            *(undefined4 *)(iVar3 + 0x30) = 1;
            *(undefined4 *)(iVar3 + 0x34) = 2;
            *(undefined4 *)(iVar3 + 0x38) = 10;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            *(undefined4 *)(iVar3 + 0x40) = uVar6;
          }
        }
      }
      else if (iVar10 < 3) {
        iVar3 = *param_1;
        *(undefined4 *)(iVar3 + 0x30) = 2;
        *(undefined4 *)(iVar3 + 0x34) = 2;
        *(undefined4 *)(iVar3 + 0x38) = 10;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x40) = uVar6;
      }
      else if (iVar10 < 4) {
        iVar3 = *param_1;
        *(undefined4 *)(iVar3 + 0x30) = 0;
        *(undefined4 *)(iVar3 + 0x34) = 3;
        *(undefined4 *)(iVar3 + 0x38) = 10;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x40) = uVar6;
      }
      *(undefined4 *)(*param_1 + 0x2c) = uVar5;
      *(undefined1 *)(*param_1 + 0x45) = 0;
    }
    else if (uVar4 == 0x1fa) {
      if (*param_1 != 0) {
        *(undefined1 *)*param_1 = 1;
      }
      *param_1 = 0;
    }
    else if (uVar4 == 0x1fb) {
      FUN_08828c98(DAT_089d4938,param_1[0x11],param_1[*(int *)(param_2 + 4) * 2 + 1],
                   param_1[*(int *)(param_2 + 4) * 2 + 2]);
      FUN_08828dd8(uVar5);
      FUN_08828c50(uVar5);
    }
    else {
      *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 1;
    }
  }
  return;
}

