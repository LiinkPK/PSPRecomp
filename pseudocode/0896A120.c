/* Entry 0x0896A120 | file offset 0x001670F8 | FUN_0896a120 | bytes 596 */

undefined4 FUN_0896a120(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  *param_1 = param_4;
  param_1[5] = 0;
  cVar1 = *(char *)(param_3 + 0x23);
  param_1[7] = 0;
  *(bool *)(param_1 + 6) = cVar1 != '\0';
  local_1c = param_4 << 4;
  local_18 = param_4;
  local_14 = param_2;
  local_10 = param_1;
  iVar2 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),local_1c,&local_30,1);
  if (iVar2 != 0) {
    iVar4 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_30;
  }
  local_10[1] = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_08935828(iVar2,0,local_1c);
    local_20 = local_18 << 2;
    iVar2 = FUN_08971134(*(undefined4 *)(local_14 + 0x18),local_20,&local_2c,1);
    if (iVar2 != 0) {
      iVar4 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_2c;
    }
    local_10[2] = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_08935828(iVar2,0,local_20);
      iVar2 = FUN_08971134(*(undefined4 *)(local_14 + 0x18),local_1c,&local_28,1);
      if (iVar2 != 0) {
        iVar4 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_28;
      }
      local_10[3] = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_08935828(iVar2,0,local_1c);
        iVar2 = FUN_08971134(*(undefined4 *)(local_14 + 0x18),local_1c,&local_24,1);
        if (iVar2 != 0) {
          iVar4 = local_14 +
                  (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
          *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_24;
        }
        local_10[4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          FUN_08935828(iVar2,0,local_1c);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}

