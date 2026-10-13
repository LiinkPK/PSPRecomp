/* Entry 0x088F8984 | file offset 0x000F595C | FUN_088f8984 | bytes 944 */

void FUN_088f8984(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x31968)) {
    do {
      iVar7 = param_1 + iVar4 * 0x1270;
      if (*(int *)(iVar7 + 0x15ee0) == 0) {
        *(undefined4 *)(iVar7 + 0x15ee0) = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x31968));
  }
  iVar4 = *(int *)(param_1 + 0x139f0);
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar9 = 0;
      bVar2 = false;
      iVar8 = param_1 + 0x13f0 + iVar7 * 0x1260;
      if (0 < *(int *)(param_1 + 0x31968)) {
        do {
          iVar6 = param_1 + iVar9 * 0x1270;
          iVar3 = FUN_088f5e80(iVar8 + 0x10,iVar6 + 0x14c80);
          if (iVar3 == 1) {
            FUN_088f5014(iVar6 + 0x14c80,iVar8 + 0x10);
            *(byte *)(iVar6 + 0x14ca7) = *(byte *)(iVar6 + 0x14ca7) & 0xdf;
            FUN_088f4d70(iVar6 + 0x14c80);
            *(undefined4 *)(iVar6 + 0x15ebc) = *(undefined4 *)(iVar8 + 0x124c);
            FUN_08935524(iVar6 + 0x15d28,iVar8 + 0x10b8,400);
            uVar5 = *(undefined4 *)(iVar8 + 8);
            *(undefined4 *)(iVar6 + 0x14c7c) = *(undefined4 *)(iVar8 + 0xc);
            *(undefined4 *)(iVar6 + 0x14c78) = uVar5;
            *(undefined1 *)(iVar6 + 0x15ec0) = *(undefined1 *)(iVar8 + 0x1250);
            *(undefined1 *)(iVar6 + 0x15ec4) = *(undefined1 *)(iVar8 + 0x1254);
            uVar1 = *(undefined2 *)(iVar8 + 0x124a);
            *(undefined2 *)(iVar6 + 0x15eb8) = *(undefined2 *)(iVar8 + 0x1248);
            *(undefined2 *)(iVar6 + 0x15eba) = uVar1;
            FUN_08935524(iVar6 + 0x15ec1,iVar8 + 0x1251,3);
            *(undefined4 *)(iVar6 + 0x15ee0) = 0;
            *(undefined1 *)(iVar6 + 0x15ee4) = 1;
            bVar2 = true;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x31968));
      }
      if (!bVar2) {
        iVar9 = FUN_088f7ef4(param_1,iVar8 + 8);
        iVar9 = param_1 + iVar9 * 0x1270;
        FUN_088f4cf0(iVar9 + 0x14c80);
        *(undefined4 *)(iVar9 + 0x14c9c) = *(undefined4 *)(iVar9 + 0x14c98);
        *(byte *)(iVar9 + 0x14ca7) = *(byte *)(iVar9 + 0x14ca7) | 0x10;
        uVar5 = *(undefined4 *)(iVar8 + 8);
        *(undefined4 *)(iVar9 + 0x14c7c) = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)(iVar9 + 0x14c78) = uVar5;
        *(undefined1 *)(iVar9 + 0x15ec0) = *(undefined1 *)(iVar8 + 0x1250);
        *(undefined1 *)(iVar9 + 0x15ec4) = *(undefined1 *)(iVar8 + 0x1254);
        uVar1 = *(undefined2 *)(iVar8 + 0x124a);
        *(undefined2 *)(iVar9 + 0x15eb8) = *(undefined2 *)(iVar8 + 0x1248);
        *(undefined2 *)(iVar9 + 0x15eba) = uVar1;
        FUN_08935524(iVar9 + 0x15ec1,iVar8 + 0x1251,3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  iVar7 = 0;
  iVar4 = DAT_089d712c + 0x1fde4;
  if (0 < *(int *)(param_1 + 0x31968)) {
    do {
      iVar3 = 0;
      iVar8 = param_1 + iVar7 * 0x1270;
      iVar9 = *(int *)(iVar8 + 0x15ebc);
      if (0 < iVar9) {
        do {
          iVar10 = iVar8 + 0x14c78 + iVar3 * 0x10;
          iVar6 = FUN_088f5ea0(iVar4,iVar10 + 0x10b0);
          if (iVar6 == 1) {
            FUN_088f676c(auStack_40,iVar8 + 0x14c80,(int)*(short *)(iVar10 + 0x10bc),
                         (int)*(short *)(iVar10 + 0x10be));
            iVar9 = FUN_088f6554(auStack_40,&local_3c,iVar8 + 0x14c80);
            if (iVar9 == 1) {
              *(undefined4 *)(iVar8 + 0x15ed0) = local_3c;
              *(undefined4 *)(iVar8 + 0x15ed4) = local_38;
              *(undefined4 *)(iVar8 + 0x15ed8) = local_34;
              *(undefined4 *)(iVar8 + 0x15edc) = local_30;
            }
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar9);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x31968));
  }
  return;
}

