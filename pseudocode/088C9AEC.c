/* Entry 0x088C9AEC | file offset 0x000C6AC4 | FUN_088c9aec | bytes 1088 */

undefined4 FUN_088c9aec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = param_1 + 0xa180;
  iVar8 = *(int *)(param_1 + 0xbda0);
  iVar1 = FUN_088c83fc();
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    iVar1 = param_2 + 0xc;
    if ((iVar8 < 1) || (*(int *)(param_1 + 0xa198) <= *(int *)(param_1 + 0xbde4))) {
      iVar9 = 0;
      if (0 < iVar8) {
        iVar4 = *(int *)(param_1 + 0xbde4);
        iVar2 = 0;
        iVar10 = iVar6;
        do {
          if (iVar4 == *(int *)(iVar10 + 0x18)) {
            iVar6 = iVar6 + iVar2;
            FUN_089a34c0(iVar6,param_2);
            FUN_089a34c0(iVar6 + 0xc,iVar1);
            *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_2 + 0x18);
            *(undefined2 *)(iVar6 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
            iVar1 = 0;
            *(undefined2 *)(iVar6 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
            *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(param_2 + 0x20);
            iVar8 = param_2;
            do {
              iVar9 = iVar1 + iVar6;
              iVar1 = iVar1 + 1;
              *(undefined1 *)(iVar9 + 0x21) = *(undefined1 *)(iVar8 + 0x21);
              iVar8 = iVar1 + param_2;
            } while (iVar1 < 3);
            *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(param_1 + 0xbde4);
            return 1;
          }
          if (((iVar9 < iVar8 + -1) && (*(int *)(iVar10 + 0x18) < iVar4)) &&
             (iVar4 < *(int *)(iVar10 + 0x3c))) {
            if (iVar9 + 1 < iVar8) {
              iVar2 = iVar6 + iVar8 * 0x24;
              iVar6 = iVar6 + iVar8 * 0x24;
              do {
                iVar7 = iVar6 + -0x24;
                FUN_089a34c0(iVar2,iVar7);
                FUN_089a34c0(iVar2 + 0xc,iVar6 + -0x18);
                *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar6 + -0xc);
                *(undefined2 *)(iVar2 + 0x1c) = *(undefined2 *)(iVar6 + -8);
                iVar4 = 0;
                *(undefined2 *)(iVar2 + 0x1e) = *(undefined2 *)(iVar6 + -6);
                *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar6 + -4);
                iVar6 = iVar7;
                do {
                  iVar5 = iVar4 + iVar2;
                  iVar4 = iVar4 + 1;
                  *(undefined1 *)(iVar5 + 0x21) = *(undefined1 *)(iVar6 + 0x21);
                  iVar6 = iVar4 + iVar7;
                } while (iVar4 < 3);
                iVar8 = iVar8 + -1;
                iVar2 = iVar2 + -0x24;
                iVar6 = iVar7;
              } while (iVar9 + 1 < iVar8);
            }
            FUN_089a34c0(iVar10 + 0x24,param_2);
            FUN_089a34c0(iVar10 + 0x30,iVar1);
            *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(param_2 + 0x18);
            iVar1 = 0;
            *(undefined2 *)(iVar10 + 0x40) = *(undefined2 *)(param_2 + 0x1c);
            *(undefined2 *)(iVar10 + 0x42) = *(undefined2 *)(param_2 + 0x1e);
            *(undefined1 *)(iVar10 + 0x44) = *(undefined1 *)(param_2 + 0x20);
            iVar8 = param_2;
            do {
              iVar6 = iVar1 + iVar10 + 0x24;
              iVar1 = iVar1 + 1;
              *(undefined1 *)(iVar6 + 0x21) = *(undefined1 *)(iVar8 + 0x21);
              iVar8 = iVar1 + param_2;
            } while (iVar1 < 3);
            *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(param_1 + 0xbde4);
            *(int *)(param_1 + 0xbda0) = *(int *)(param_1 + 0xbda0) + 1;
            return 1;
          }
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + 0x24;
          iVar10 = iVar10 + 0x24;
        } while (iVar9 < iVar8);
      }
      iVar9 = iVar6 + iVar8 * 0x24;
      FUN_089a34c0(iVar9,param_2);
      FUN_089a34c0(iVar9 + 0xc,iVar1);
      *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      iVar10 = 0;
      *(undefined2 *)(iVar9 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
      *(undefined2 *)(iVar9 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
      *(undefined1 *)(iVar9 + 0x20) = *(undefined1 *)(param_2 + 0x20);
      iVar1 = param_2;
      do {
        iVar2 = iVar10 + iVar9;
        iVar10 = iVar10 + 1;
        *(undefined1 *)(iVar2 + 0x21) = *(undefined1 *)(iVar1 + 0x21);
        iVar1 = iVar10 + param_2;
      } while (iVar10 < 3);
      uVar3 = 0;
      if (iVar8 != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0xbde4);
      }
      *(undefined4 *)(iVar6 + iVar8 * 0x24 + 0x18) = uVar3;
      uVar3 = 1;
      *(int *)(param_1 + 0xbda0) = *(int *)(param_1 + 0xbda0) + 1;
    }
    else {
      if (0 < iVar8) {
        iVar8 = iVar8 * 0x24;
        iVar10 = iVar6 + iVar8;
        iVar9 = iVar6 + iVar8;
        do {
          iVar4 = iVar9 + -0x24;
          FUN_089a34c0(iVar10,iVar4);
          FUN_089a34c0(iVar10 + 0xc,iVar9 + -0x18);
          *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar9 + -0xc);
          *(undefined2 *)(iVar10 + 0x1c) = *(undefined2 *)(iVar9 + -8);
          iVar2 = 0;
          *(undefined2 *)(iVar10 + 0x1e) = *(undefined2 *)(iVar9 + -6);
          *(undefined1 *)(iVar10 + 0x20) = *(undefined1 *)(iVar9 + -4);
          iVar9 = iVar4;
          do {
            iVar7 = iVar2 + iVar10;
            iVar2 = iVar2 + 1;
            *(undefined1 *)(iVar7 + 0x21) = *(undefined1 *)(iVar9 + 0x21);
            iVar9 = iVar2 + iVar4;
          } while (iVar2 < 3);
          iVar8 = iVar8 + -0x24;
          iVar10 = iVar10 + -0x24;
          iVar9 = iVar4;
        } while (0 < iVar8);
      }
      FUN_089a34c0(iVar6,param_2);
      FUN_089a34c0(param_1 + 0xa18c,iVar1);
      *(undefined4 *)(param_1 + 0xa198) = *(undefined4 *)(param_2 + 0x18);
      iVar1 = 0;
      *(undefined2 *)(param_1 + 0xa19c) = *(undefined2 *)(param_2 + 0x1c);
      *(undefined2 *)(param_1 + 0xa19e) = *(undefined2 *)(param_2 + 0x1e);
      *(undefined1 *)(param_1 + 0xa1a0) = *(undefined1 *)(param_2 + 0x20);
      iVar8 = param_2;
      do {
        iVar9 = iVar1 + iVar6;
        iVar1 = iVar1 + 1;
        *(undefined1 *)(iVar9 + 0x21) = *(undefined1 *)(iVar8 + 0x21);
        iVar8 = iVar1 + param_2;
      } while (iVar1 < 3);
      *(undefined4 *)(param_1 + 0xa198) = 0;
      uVar3 = 1;
      *(int *)(param_1 + 0xbda0) = *(int *)(param_1 + 0xbda0) + 1;
    }
  }
  return uVar3;
}

