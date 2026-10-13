/* Entry 0x088DD21C | file offset 0x000DA1F4 | FUN_088dd21c | bytes 1004 */

byte * FUN_088dd21c(int param_1,byte *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  
  local_44 = 0;
  local_50 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar8 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    local_3c = 0x10;
  }
  else {
    local_3c = 0xc;
  }
  local_48 = 4;
  local_40 = 0;
  local_38 = param_3;
  local_34 = param_4;
  local_30 = param_5;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      iVar7 = local_3c;
      iVar1 = local_44;
      if (*(int *)(param_1 + 0x1c) == 1) {
        uVar9 = (uint)*(short *)param_2;
        local_4c = (uint)*(short *)(param_2 + 2);
      }
      else {
        uVar9 = (uint)*param_2;
        local_4c = (uint)param_2[1];
      }
      iVar6 = uVar9 + local_44;
      iVar2 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = *(int *)(param_1 + 0xc) + iVar5;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        if (*(int *)(param_1 + 0x1c) == 1) {
          *(char *)(*(int *)(param_1 + 0xc) + iVar5) = (char)*(undefined2 *)param_2;
          *(char *)(*(int *)(param_1 + 0xc) + iVar5 + 1) = (char)*(undefined2 *)(param_2 + 2);
          *(short *)(*(int *)(param_1 + 0xc) + iVar5 + 2) = (short)*(undefined4 *)(param_2 + 4);
          *(undefined2 *)(*(int *)(param_1 + 0xc) + iVar5 + 4) = *(undefined2 *)(param_2 + 8);
          *(undefined2 *)(*(int *)(param_1 + 0xc) + iVar5 + 6) = *(undefined2 *)(param_2 + 10);
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 + 8) = *(undefined4 *)(param_2 + 0xc);
          iVar2 = *(int *)(param_1 + 0xc);
        }
        else {
          FUN_08935524(*(int *)(param_1 + 0xc) + iVar5,param_2,local_3c);
          iVar2 = *(int *)(param_1 + 0xc);
        }
      }
      param_2 = param_2 + iVar7;
      if (iVar2 != 0) {
        *(int *)(iVar2 + iVar5 + 0xc) = *(int *)(param_1 + 0x10) + iVar1 * 8;
      }
      iVar7 = 0;
      iVar1 = 0;
      local_44 = iVar6;
      if (0 < (int)uVar9) {
        do {
          if (*(int *)(param_1 + 0x1c) == 1) {
            uVar4 = (uint)*(short *)(param_2 + 2);
          }
          else {
            uVar4 = (uint)param_2[1];
          }
          iVar2 = 0;
          if (*(int *)(param_1 + 0x10) != 0) {
            iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar5 + 0xc);
            if (*(int *)(param_1 + 0x1c) == 1) {
              *(char *)(iVar2 + iVar1) = (char)*(undefined2 *)param_2;
              *(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 + 0xc) + iVar1 + 1) =
                   (char)*(undefined2 *)(param_2 + 2);
              iVar2 = *(int *)(param_1 + 0x10);
            }
            else {
              FUN_08935524(iVar2 + iVar1,param_2,local_48);
              iVar2 = *(int *)(param_1 + 0x10);
            }
          }
          param_2 = param_2 + 4;
          if (iVar2 == 0) {
            uVar3 = 0;
            iVar2 = *(int *)(param_1 + 0x1c);
          }
          else {
            *(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 + 0xc) + iVar1 + 4) =
                 *(int *)(param_1 + 0x14) + iVar8;
            iVar2 = *(int *)(param_1 + 0x1c);
            uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 + 0xc) + iVar1 + 4);
          }
          if (iVar2 == 1) {
            iVar6 = FUN_088dd608(param_1,param_2,uVar3,(int)(short)uVar4);
            iVar2 = uVar4 * 100;
            iVar8 = iVar8 + iVar6;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x50);
            if (*(int *)(param_1 + 0x14) != 0) {
              FUN_08935524(*(undefined4 *)
                            (*(int *)(*(int *)(param_1 + 0xc) + iVar5 + 0xc) + iVar1 + 4),param_2,
                           iVar2);
              iVar2 = *(int *)(param_1 + 0x50);
            }
          }
          param_2 = param_2 + iVar2;
          iVar7 = iVar7 + 1;
          iVar1 = iVar1 + 8;
        } while (iVar7 < (int)uVar9);
      }
      iVar1 = 0;
      if (0 < (int)local_4c) {
        do {
          FUN_08935524(&local_50,param_2,4);
          iVar7 = 0;
          param_2 = param_2 + 4;
          if (0 < local_50) {
            do {
              iVar7 = iVar7 + 1;
              param_2 = param_2 + 8;
            } while (iVar7 < local_50);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)local_4c);
      }
      iVar1 = *(int *)(param_1 + 0x2c);
      local_40 = local_40 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (local_40 < iVar1);
  }
  if (local_38 != (int *)0x0) {
    *local_38 = iVar1 * 0x1c;
  }
  if (local_34 != (int *)0x0) {
    *local_34 = local_44 * 8;
  }
  if (local_30 != (int *)0x0) {
    *local_30 = iVar8;
  }
  return param_2;
}

