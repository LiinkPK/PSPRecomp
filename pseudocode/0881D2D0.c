/* Entry 0x0881D2D0 | file offset 0x0001A2A8 | FUN_0881d2d0 | bytes 424 */

undefined4 FUN_0881d2d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = FUN_08899300();
  iVar2 = FUN_088988b4(uVar1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = FUN_08842100(iVar2 << 3);
    *(int *)(param_1 + 0x140) = iVar3;
    if (iVar3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar5 = 0;
      iVar3 = 0;
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          iVar6 = 0;
          iVar7 = 0;
          while (iVar7 = FUN_0881cb80(iVar7), iVar7 != 0) {
            iVar4 = FUN_0881d6f0(param_1,iVar7,iVar5);
            if (iVar4 == 1) {
              iVar6 = iVar6 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          *(int *)(*(int *)(param_1 + 0x140) + iVar8) = iVar6;
          *(int *)(*(int *)(param_1 + 0x140) + iVar8 + 4) = iVar3;
          iVar3 = iVar6 + iVar3;
          iVar8 = iVar8 + 8;
        } while (iVar5 < iVar2);
      }
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        iVar3 = FUN_08842100(iVar3 << 2);
        *(int *)(param_1 + 0x144) = iVar3;
        if (iVar3 == 0) {
          uVar1 = 0xfffffffe;
        }
        else {
          iVar3 = 0;
          if (0 < iVar2) {
            iVar5 = 0;
            do {
              iVar8 = 0;
              while (iVar8 = FUN_0881cb80(iVar8), iVar8 != 0) {
                iVar7 = FUN_0881d6f0(param_1,iVar8,iVar3);
                if (iVar7 == 1) {
                  *(int *)(*(int *)(param_1 + 0x144) + iVar5) = iVar8;
                  iVar5 = iVar5 + 4;
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar2);
          }
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

