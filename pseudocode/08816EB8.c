/* Entry 0x08816EB8 | file offset 0x00013E90 | FUN_08816eb8 | bytes 520 */

void FUN_08816eb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  
  FUN_08899300();
  iVar1 = FUN_0881baa8();
  local_34 = *(int *)(iVar1 + 0x140);
  iVar7 = *(int *)(iVar1 + 0x144);
  iVar1 = *(int *)(param_1 + 0x14);
  local_38 = 0;
  if (0 < iVar1) {
    local_3c = 0;
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x10) + local_3c);
      iVar4 = 0;
      piVar5 = (int *)(local_34 + iVar6 * 8);
      iVar2 = *piVar5;
      if (0 < iVar2) {
        iVar1 = piVar5[1];
        while( true ) {
          iVar3 = *(int *)(iVar7 + (iVar1 + iVar4) * 4);
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar6 * 0x40 + 0x10);
          if (*(int *)(iVar3 + 0x4c) != 0) {
            if ((((*(int *)(*(int *)(iVar3 + 0x4c) + 8) == 2) && (*(int *)(iVar3 + 0x14) != 0)) &&
                (iVar2 = *(int *)(*(int *)(iVar3 + 0x14) + 0x46c), iVar2 != 0)) &&
               (((iVar1 != 0 && (*(int *)(iVar1 + 0x478) != 0)) &&
                (iVar2 = FUN_0883e9e4(*(int *)(iVar1 + 0x478),iVar2), iVar2 == 0)))) {
              iVar2 = *piVar5;
            }
            else {
              local_40[0] = '\0';
              FUN_08819624(iVar3,local_40,0,iVar1,0,1000,1);
              if (local_40[0] != '\0') {
                iVar2 = FUN_08838074(iVar1);
                if (iVar2 == 0) {
                  *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 0x1000000;
                }
                else {
                  iVar1 = (**(code **)(*(int *)(iVar1 + 0x544) + 0x134))
                                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0x130));
                  *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 0x1000000;
                }
              }
              iVar2 = *piVar5;
            }
          }
          iVar4 = iVar4 + 1;
          if (iVar2 <= iVar4) break;
          iVar1 = piVar5[1];
        }
        iVar1 = *(int *)(param_1 + 0x14);
      }
      local_38 = local_38 + 1;
      local_3c = local_3c + 4;
    } while (local_38 < iVar1);
  }
  return;
}

