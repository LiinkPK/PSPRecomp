/* Entry 0x0898BA6C | file offset 0x00188A44 | FUN_0898ba6c | bytes 1300 */

undefined4 FUN_0898ba6c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_4 == 0) {
    return 0;
  }
  local_40 = param_1;
  local_3c = param_3;
  local_38 = param_4;
  FUN_0898a448(param_1,param_3);
  local_c = (**(code **)(*(int *)(local_38 + 4) + 0x34))
                      (local_38 + *(short *)(*(int *)(local_38 + 4) + 0x30));
  local_10 = *local_40;
  iVar2 = FUN_08971134(*(undefined4 *)(local_10 + 0x18),0x200,&local_60,1);
  if (iVar2 != 0) {
    iVar4 = local_10 + (uint)*(ushort *)(*(int *)(*(int *)(local_10 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_60;
  }
  local_40[0xb] = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  local_14 = *local_40;
  iVar2 = FUN_08971134(*(undefined4 *)(local_14 + 0x18),0x200,&local_5c,1);
  if (iVar2 != 0) {
    iVar4 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_5c;
  }
  local_40[0xd] = iVar2;
  if (iVar2 == 0) {
LAB_0898bbe0:
    uVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(local_3c + 0xb6);
    local_18 = 0;
    local_20 = *local_40;
    if (bVar1 < 5) {
      if (bVar1 == 0) {
        local_18 = 2;
      }
      else if (bVar1 == 1) {
        local_18 = 3;
      }
      else if (bVar1 == 2) {
        local_18 = 5;
      }
      else if (bVar1 == 3) {
        local_18 = 9;
      }
      else {
        if (bVar1 != 4) goto LAB_0898bbe0;
        local_18 = 0x11;
      }
    }
    local_1c = local_c * local_18 * 0x10;
    iVar2 = FUN_08971134(*(undefined4 *)(local_20 + 0x18),local_1c,&local_58,1);
    if (iVar2 != 0) {
      iVar4 = local_20 + (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_58;
    }
    local_40[3] = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      local_24 = *local_40;
      iVar2 = FUN_08971134(*(undefined4 *)(local_24 + 0x18),local_1c,&local_54,1);
      if (iVar2 != 0) {
        iVar4 = local_24 + (uint)*(ushort *)(*(int *)(*(int *)(local_24 + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_54;
      }
      local_40[5] = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        local_28 = *local_40;
        iVar2 = FUN_08971134(*(undefined4 *)(local_28 + 0x18),local_1c,&local_50,1);
        if (iVar2 != 0) {
          iVar4 = local_28 +
                  (uint)*(ushort *)(*(int *)(*(int *)(local_28 + 0x88) + 0x1c8) + 0x18) * 4;
          *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_50;
        }
        local_40[4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          local_2c = *local_40;
          iVar2 = FUN_08971134(*(undefined4 *)(local_2c + 0x18),local_1c,&local_4c,1);
          if (iVar2 != 0) {
            iVar4 = local_2c +
                    (uint)*(ushort *)(*(int *)(*(int *)(local_2c + 0x88) + 0x1c8) + 0x18) * 4;
            *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_4c;
          }
          local_40[6] = iVar2;
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            local_30 = *local_40;
            iVar2 = FUN_08971134(*(undefined4 *)(local_30 + 0x18),local_1c,&local_48,1);
            if (iVar2 != 0) {
              iVar4 = local_30 +
                      (uint)*(ushort *)(*(int *)(*(int *)(local_30 + 0x88) + 0x1c8) + 0x18) * 4;
              *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_48;
            }
            local_40[7] = iVar2;
            if (iVar2 == 0) {
              uVar3 = 0;
            }
            else {
              local_34 = *local_40;
              if (*(char *)(local_3c + 0xb0) == '\0') {
                iVar2 = local_18 * 2 + 2;
              }
              else {
                iVar2 = local_18 * 6 + 6;
              }
              if (*(char *)(local_3c + 0xb7) == '\0') {
                iVar2 = iVar2 * local_c * 0x10;
              }
              else {
                iVar2 = iVar2 * local_c * 0x18;
              }
              iVar2 = FUN_08971134(*(undefined4 *)(local_34 + 0x18),iVar2,&local_44,1);
              if (iVar2 != 0) {
                local_34 = local_34 +
                           (uint)*(ushort *)(*(int *)(*(int *)(local_34 + 0x88) + 0x1c8) + 0x18) * 4
                ;
                *(int *)(local_34 + 0xb4) = *(int *)(local_34 + 0xb4) + local_44;
              }
              local_40[9] = iVar2;
              if (iVar2 == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}

