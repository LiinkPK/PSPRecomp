/* Entry 0x0881AC8C | file offset 0x00017C64 | FUN_0881ac8c | bytes 704 */

void FUN_0881ac8c(int param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40;
  int local_3c;
  
  iVar7 = *(int *)(param_1 + 0x1c);
  local_3c = 0;
  if (0 < iVar7) {
    local_40 = 0;
    do {
      iVar9 = 0;
      iVar8 = 0;
      bVar1 = false;
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          piVar5 = *(int **)(*(int *)(param_1 + 0x20) + local_40);
          piVar4 = (int *)(*(int *)(param_1 + 0x20) + iVar7);
          if ((*piVar5 == *(int *)*piVar4) && (piVar5[1] == ((int *)*piVar4)[1])) {
            if (!bVar1) {
              iVar6 = 0;
              iVar8 = 0;
              if (0 < piVar4[1]) {
                do {
                  iVar2 = FUN_0881a934(param_1,piVar4[2] + iVar8,param_2);
                  piVar4 = (int *)(*(int *)(param_1 + 0x20) + iVar7);
                  if (iVar2 == 1) {
                    bVar1 = true;
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  iVar8 = iVar8 + 8;
                } while (iVar6 < piVar4[1]);
              }
            }
            if (!bVar1) {
              iVar6 = 0;
              iVar8 = 0;
              if (0 < piVar4[3]) {
                do {
                  iVar2 = FUN_0881a934(param_1,piVar4[4] + iVar8,param_2);
                  piVar4 = (int *)(*(int *)(param_1 + 0x20) + iVar7);
                  if (iVar2 == 1) {
                    bVar1 = true;
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  iVar8 = iVar8 + 8;
                } while (iVar6 < piVar4[3]);
              }
            }
            iVar6 = 0;
            iVar8 = 1;
            if (0 < piVar4[1]) {
              iVar2 = 0;
              do {
                iVar3 = FUN_0881a9c8(param_1,piVar4[2] + iVar2);
                if (iVar3 == 0) {
                  iVar8 = 0;
                  break;
                }
                iVar6 = iVar6 + 1;
                piVar4 = (int *)(*(int *)(param_1 + 0x20) + iVar7);
                iVar2 = iVar2 + 8;
              } while (iVar6 < piVar4[1]);
            }
            if (iVar8 == 1) {
              iVar3 = 0;
              iVar6 = *(int *)(param_1 + 0x20) + iVar7;
              iVar2 = 0;
              if (0 < *(int *)(iVar6 + 0xc)) {
                do {
                  iVar6 = FUN_0881a9c8(param_1,*(int *)(iVar6 + 0x10) + iVar2);
                  if (iVar6 == 1) {
                    iVar8 = 0;
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  iVar6 = *(int *)(param_1 + 0x20) + iVar7;
                  iVar2 = iVar2 + 8;
                } while (iVar3 < *(int *)(iVar6 + 0xc));
              }
            }
            if (iVar8 == 1) break;
          }
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 0x14;
        } while (iVar9 < *(int *)(param_1 + 0x1c));
      }
      if (bVar1) {
        FUN_0881a6ac(param_1,*(undefined4 *)(*(int *)(param_1 + 0x20) + local_40),iVar8,param_3,1);
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      local_40 = local_40 + 0x14;
      local_3c = local_3c + 1;
    } while (local_3c < iVar7);
  }
  return;
}

