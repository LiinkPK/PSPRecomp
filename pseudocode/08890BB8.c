/* Entry 0x08890BB8 | file offset 0x0008DB90 | FUN_08890bb8 | bytes 604 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08890bb8(undefined1 *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d0 [12];
  ushort local_c4;
  ushort local_c2;
  undefined1 auStack_78 [44];
  short local_4c;
  short local_4a;
  
  FUN_08890b9c();
  if (param_2 < 2) {
    *(int *)(param_1 + 0x14) = param_3;
    if (param_3 == 0x19) {
      param_3 = -1;
      iVar6 = 0;
      iVar2 = FUN_088c6cc8();
      uVar4 = _DAT_08a22c70;
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          piVar1 = (int *)FUN_088c6ce8(iVar7);
          if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 10) != '\0')) {
            iVar6 = iVar6 + 1;
            fVar9 = (float)func_0x08a22c1c(uVar4);
            if (fVar9 * (float)iVar6 < 1.0) {
              param_3 = *piVar1;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      if (param_3 < 0) {
        return 0xfffffffd;
      }
      *(int *)(param_1 + 0x18) = param_3;
    }
    else {
      *(int *)(param_1 + 0x18) = param_3;
    }
    iVar2 = FUN_08891b8c(param_1,param_2,param_3);
    if (iVar2 == 1) {
      iVar2 = FUN_08891c18(param_1,auStack_d0,*(undefined4 *)(param_1 + 0x18));
      uVar4 = _DAT_08a22c70;
      if (iVar2 != 0) {
        return 0xfffffffc;
      }
      fVar9 = 0.0;
      iVar6 = 0;
      iVar2 = -1;
      if (local_c2 != 0) {
        iVar7 = iVar2;
        do {
          iVar3 = FUN_08891ca4(param_1,auStack_78,param_2,(uint)local_c4 + iVar6);
          iVar2 = iVar7;
          if (iVar3 == 0) {
            if (local_4c == 6) {
              iVar3 = (int)local_4a;
              fVar9 = (float)iVar3 + fVar9;
              fVar8 = (float)func_0x08a22c1c(uVar4);
              uVar5 = (uint)local_c2;
              iVar2 = iVar6;
              if ((float)iVar3 <= fVar8 * fVar9) {
                iVar2 = iVar7;
              }
            }
            else {
              uVar5 = (uint)local_c2;
            }
          }
          else {
            uVar5 = (uint)local_c2;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar2;
        } while (iVar6 < (int)uVar5);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
    *(uint *)(param_1 + 4) = param_2;
    *param_1 = 1;
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

