/* Entry 0x089B04E0 | file offset 0x001AD4B8 | FUN_089b04e0 | bytes 576 */

undefined4 FUN_089b04e0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = 0;
  if (param_1 != 0) {
    if ((param_2 & 4) != 0) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x22);
      iVar9 = 0;
      if (uVar6 != 0) {
        do {
          iVar7 = *(int *)(param_1 + 0x10);
          while (iVar7 = iVar9 * 0x10 + iVar7, *(short *)(iVar7 + 8) != 0) {
            iVar8 = 0;
            do {
              iVar5 = *(int *)(iVar7 + 4);
              while( true ) {
                iVar5 = iVar8 * 0x40 + iVar5;
                iVar4 = FUN_089b1230(iVar5,1,0);
                if (iVar4 != 0) break;
                if (*(int *)(iVar5 + 4) == 0) goto LAB_089b0580;
                iVar8 = iVar8 + 1;
                iVar4 = FUN_089af1e8(*(int *)(iVar5 + 4),1,0x80000001,param_3);
                *(undefined2 *)(iVar4 + 0xe) = 1;
                FUN_089b126c(iVar5,iVar4);
                FUN_089b12f4(iVar5,*(undefined4 *)(iVar4 + 8));
                if ((int)(uint)*(ushort *)(iVar7 + 8) <= iVar8) {
                  uVar2 = *(ushort *)(param_1 + 0x22);
                  goto LAB_089b0610;
                }
                iVar5 = *(int *)(iVar7 + 4);
              }
              *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
LAB_089b0580:
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)(uint)*(ushort *)(iVar7 + 8));
            uVar2 = *(ushort *)(param_1 + 0x22);
LAB_089b0610:
            uVar6 = (uint)uVar2;
            iVar9 = iVar9 + 1;
            if ((int)uVar6 <= iVar9) goto LAB_089b0628;
            iVar7 = *(int *)(param_1 + 0x10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar6);
      }
    }
LAB_089b0628:
    uVar3 = 1;
    if (((param_2 & 10) != 0) && (uVar6 = (uint)*(ushort *)(param_1 + 0x26), uVar6 != 0)) {
      uVar3 = 1;
      iVar7 = 0;
      uVar1 = (param_2 & 3) >> 1;
      iVar9 = *(int *)(param_1 + 0x18);
      do {
        iVar9 = iVar7 * 0x10 + iVar9;
        if (iVar9 == 0) {
          uVar3 = 0;
        }
        else {
          iVar9 = *(int *)(iVar9 + 4);
          if (iVar9 != 0) {
            if ((param_2 & 8) == 0) {
              if (uVar1 == 0) {
                uVar3 = 0;
                goto LAB_089b068c;
              }
              iVar9 = FUN_089bcc84();
              uVar2 = *(ushort *)(param_1 + 0x26);
            }
            else {
              iVar9 = FUN_089bcc84(iVar9,uVar1 | 2);
              uVar2 = *(ushort *)(param_1 + 0x26);
            }
            uVar6 = (uint)uVar2;
            if (iVar9 != 0) goto LAB_089b068c;
          }
          uVar3 = 0;
        }
LAB_089b068c:
        iVar7 = iVar7 + 1;
        if ((int)uVar6 <= iVar7) {
          return uVar3;
        }
        iVar9 = *(int *)(param_1 + 0x18);
      } while( true );
    }
  }
  return uVar3;
}

