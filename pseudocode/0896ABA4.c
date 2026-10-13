/* Entry 0x0896ABA4 | file offset 0x00167B7C | FUN_0896aba4 | bytes 796 */

undefined4 FUN_0896aba4(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_40;
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
  int *local_14;
  
  *param_1 = param_4;
  param_1[5] = 0;
  *(bool *)(param_1 + 6) = *(char *)(param_3 + 0x25) != '\0';
  cVar1 = *(char *)(param_3 + 0x26);
  param_1[7] = 0;
  *(bool *)(param_1 + 0xd) = cVar1 != '\0';
  param_1[10] = param_5;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_24 = param_4 << 4;
  local_20 = param_5;
  local_1c = param_4;
  local_18 = param_2;
  local_14 = param_1;
  iVar2 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),local_24,&local_40,1);
  if (iVar2 != 0) {
    iVar4 = local_18 + (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_40;
  }
  local_14[1] = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_08935828(iVar2,0,local_24);
    local_28 = local_1c << 2;
    iVar2 = FUN_08971134(*(undefined4 *)(local_18 + 0x18),local_28,&local_3c,1);
    if (iVar2 != 0) {
      iVar4 = local_18 + (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_3c;
    }
    local_14[2] = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_08935828(iVar2,0,local_28);
      iVar2 = FUN_08971134(*(undefined4 *)(local_18 + 0x18),local_24,&local_38,1);
      if (iVar2 != 0) {
        iVar4 = local_18 + (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_38;
      }
      local_14[3] = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_08935828(iVar2,0,local_24);
        iVar2 = FUN_08971134(*(undefined4 *)(local_18 + 0x18),local_24,&local_34,1);
        if (iVar2 != 0) {
          iVar4 = local_18 +
                  (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4;
          *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_34;
        }
        local_14[4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          FUN_08935828(iVar2,0,local_24);
          local_2c = local_20 << 4;
          iVar2 = FUN_08971134(*(undefined4 *)(local_18 + 0x18),local_2c,&local_30,1);
          if (iVar2 != 0) {
            iVar4 = local_18 +
                    (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4;
            *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_30;
          }
          local_14[9] = iVar2;
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            FUN_08935828(iVar2,0,local_2c);
            uVar3 = 1;
          }
        }
      }
    }
  }
  return uVar3;
}

