/* Entry 0x088E53EC | file offset 0x000E23C4 | FUN_088e53ec | bytes 1756 */

void FUN_088e53ec(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [64];
  undefined1 auStack_30 [4];
  
  iVar2 = *(int *)(param_1 + 0x36c);
  bVar1 = iVar2 == 0;
  if (!bVar1) {
    if ((int)*(short *)(param_1 + 0x36a) == *(int *)(param_1 + 0x378)) {
      if ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0) {
        if (iVar2 != 0) {
          FUN_088da060();
          *(undefined4 *)(param_1 + 0x36c) = 0;
        }
        *(short *)(param_1 + 0x36a) = (short)*(undefined4 *)(param_1 + 0x37c);
        iVar2 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x368) * 4 + 0x60),
                             (int)*(short *)(param_1 + 0x36a),0);
        bVar1 = iVar2 == 0;
        *(int *)(param_1 + 0x36c) = iVar2;
      }
    }
    else if (((int)*(short *)(param_1 + 0x36a) == *(int *)(param_1 + 0x380)) &&
            ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
      if (iVar2 != 0) {
        FUN_088da060();
        *(undefined4 *)(param_1 + 0x36c) = 0;
      }
      if (*(int *)(param_1 + *(int *)(param_1 + 0x688) * 4 + 0x604) != 0) {
        FUN_0887b944();
      }
      *(undefined2 *)(param_1 + 0x368) = 0xffff;
      iVar2 = 0;
      *(undefined2 *)(param_1 + 0x36a) = 0xffff;
      *(undefined4 *)(param_1 + 0x36c) = 0;
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_088da0a8(iVar2,0,auStack_1b0,auStack_170);
      if (*(int *)(param_1 + 0x678) == 0) {
        iVar2 = *(int *)(param_1 + *(int *)(param_1 + 0x688) * 4 + 0x604);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c);
        }
        if (iVar2 != 0) {
          FUN_0887ba04(iVar2);
          FUN_0887b828(iVar2,auStack_170);
          FUN_0887b778(iVar2,auStack_1b0);
          FUN_0887b98c(iVar2);
          FUN_0887b9c4(iVar2);
          iVar7 = (int)*(short *)(*(int *)(param_1 + 0x36c) + 0xc);
          iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x36c) + 0x24) + 0xc);
          uVar5 = uRam00000008;
          if (iVar7 < *(int *)(iVar3 + 0x2c)) {
            uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar7 * 0x1c + 8);
          }
          FUN_0887b900(iVar2,uVar5);
        }
      }
    }
    iVar3 = 0;
    iVar2 = param_1;
    do {
      iVar7 = *(int *)(iVar2 + 0x62c);
      if (iVar7 != 0) {
        FUN_088da0a8(*(undefined4 *)(param_1 + 0x36c),iVar3,auStack_160,auStack_120);
        FUN_0887ba04(iVar7);
        FUN_0887b828(iVar7,auStack_120);
        FUN_0887b778(iVar7,auStack_160);
        FUN_0887b98c(iVar7);
        FUN_0887b9c4(iVar7);
        iVar4 = (int)*(short *)(*(int *)(param_1 + 0x36c) + 0xc);
        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x36c) + 0x24) + 0xc);
        uVar5 = uRam00000008;
        if (iVar4 < *(int *)(iVar6 + 0x2c)) {
          uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0xc) + iVar4 * 0x1c + 8);
        }
        FUN_0887b900(iVar7,uVar5);
        FUN_0887b924(iVar7);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 4);
  }
  iVar2 = *(int *)(param_1 + 0x374);
  bVar1 = iVar2 == 0;
  if (!bVar1) {
    if ((int)*(short *)(param_1 + 0x372) == *(int *)(param_1 + 900)) {
      if ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0) {
        if (iVar2 != 0) {
          FUN_088da060(iVar2);
          *(undefined4 *)(param_1 + 0x374) = 0;
        }
        *(short *)(param_1 + 0x372) = (short)*(undefined4 *)(param_1 + 0x388);
        iVar2 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x370) * 4 + 0x60),
                             (int)*(short *)(param_1 + 0x372),0);
        bVar1 = iVar2 == 0;
        *(int *)(param_1 + 0x374) = iVar2;
      }
    }
    else if (((int)*(short *)(param_1 + 0x372) == *(int *)(param_1 + 0x38c)) &&
            ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
      if (iVar2 != 0) {
        FUN_088da060(iVar2);
        *(undefined4 *)(param_1 + 0x374) = 0;
      }
      if ((*(int *)(param_1 + 0x658) != 0) && (*(int *)(param_1 + 0x658) != 0)) {
        FUN_0887ba5c();
        *(undefined4 *)(param_1 + 0x658) = 0;
      }
      iVar3 = 0;
      iVar2 = param_1;
      do {
        if ((*(int *)(iVar2 + 0x65c) != 0) && (*(int *)(iVar2 + 0x65c) != 0)) {
          FUN_0887ba5c();
          *(undefined4 *)(iVar2 + 0x65c) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < 4);
      *(undefined2 *)(param_1 + 0x370) = 0xffff;
      iVar2 = 0;
      *(undefined2 *)(param_1 + 0x372) = 0xffff;
      *(undefined4 *)(param_1 + 0x374) = 0;
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_088da0a8(iVar2,4,auStack_110,auStack_d0);
      iVar2 = *(int *)(param_1 + 0x658);
      if (iVar2 != 0) {
        FUN_0887ba04(iVar2);
        FUN_0887b828(iVar2,auStack_d0);
        FUN_0887b778(iVar2,auStack_110);
        FUN_0887b98c(iVar2);
        FUN_0887b9c4(iVar2);
        iVar7 = (int)*(short *)(*(int *)(param_1 + 0x374) + 0xc);
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x374) + 0x24) + 0xc);
        uVar5 = uRam00000008;
        if (iVar7 < *(int *)(iVar3 + 0x2c)) {
          uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar7 * 0x1c + 8);
        }
        FUN_0887b900(iVar2,uVar5);
      }
    }
    iVar3 = 0;
    iVar2 = param_1;
    do {
      iVar7 = *(int *)(iVar2 + 0x65c);
      if (iVar7 != 0) {
        FUN_088da0a8(*(undefined4 *)(param_1 + 0x374),iVar3,auStack_c0,auStack_80);
        FUN_0887ba04(iVar7);
        FUN_0887b828(iVar7,auStack_80);
        FUN_0887b778(iVar7,auStack_c0);
        FUN_0887b98c(iVar7);
        FUN_0887b9c4(iVar7);
        iVar4 = (int)*(short *)(*(int *)(param_1 + 0x374) + 0xc);
        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x374) + 0x24) + 0xc);
        uVar5 = uRam00000008;
        if (iVar4 < *(int *)(iVar6 + 0x2c)) {
          uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0xc) + iVar4 * 0x1c + 8);
        }
        FUN_0887b900(iVar7,uVar5);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 4);
  }
  iVar2 = 0;
  piVar8 = (int *)(param_1 + 0x6a8);
  do {
    if (*(char *)((int)piVar8 + 0x42) != '\0') {
      if (*(char *)((int)piVar8 + 0x43) == '\0') {
        iVar3 = 0;
        piVar9 = piVar8;
        do {
          if (*piVar9 != 0) {
            if (*(int *)(*piVar9 + 4) != 0) {
              FUN_088d9cfc();
            }
            if (piVar9[8] != 0) {
              FUN_0887b944();
            }
          }
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar3 < 8);
      }
      else {
        iVar3 = 0;
        piVar9 = piVar8;
        do {
          if (*piVar9 != 0) {
            if (*(int *)(*piVar9 + 4) != 0) {
              FUN_088d9cd8();
            }
            iVar7 = piVar9[8];
            if (iVar7 != 0) {
              if (iVar7 != 0) {
                FUN_088da0a8(*(undefined4 *)(*piVar9 + 4),0,auStack_70,auStack_30);
                FUN_0887ba04(iVar7);
                FUN_0887b828(iVar7,auStack_30);
                FUN_0887b778(iVar7,auStack_70);
                FUN_0887b98c(iVar7);
                FUN_0887b9c4(iVar7);
                FUN_0887b944(iVar7);
              }
              FUN_0887b924(iVar7);
            }
          }
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar3 < 8);
      }
    }
    iVar2 = iVar2 + 1;
    piVar8 = piVar8 + 0x11;
  } while (iVar2 < 4);
  return;
}

