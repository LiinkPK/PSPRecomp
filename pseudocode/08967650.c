/* Entry 0x08967650 | file offset 0x00164628 | FUN_08967650 | bytes 524 */

undefined4 FUN_08967650(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  *(undefined1 *)(param_1 + 2) = 1;
  local_14 = (int)*(short *)(param_2 + 0xc);
  local_18 = DAT_09b6f478;
  local_1c = local_14 << 5;
  local_10 = param_1;
  iVar1 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_1c,&local_30,1);
  if (iVar1 != 0) {
    iVar3 = local_18 + (uint)*(ushort *)(*(int *)(*(int *)(local_18 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_30;
  }
  *local_10 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_08935828(iVar1,0,local_1c,local_14,1);
    local_20 = DAT_09b6f478;
    iVar1 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_1c,&local_2c,1);
    if (iVar1 != 0) {
      iVar3 = local_20 + (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_2c;
    }
    local_10[1] = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_08935828(iVar1,0,local_1c,local_14,1);
      local_10[3] = 0;
      local_10[4] = 0;
      local_10[5] = 0;
      local_10[6] = 0;
      local_10[7] = 0;
      local_10[8] = 0;
      local_10[9] = 0;
      local_10[10] = 0;
      local_10[0xb] = 1;
      local_10[0xc] = local_14;
      local_24 = DAT_09b6f478;
      iVar1 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_14 << 3,&local_28,1);
      uVar2 = 1;
      if (iVar1 != 0) {
        local_24 = local_24 +
                   (uint)*(ushort *)(*(int *)(*(int *)(local_24 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(local_24 + 0xb4) = *(int *)(local_24 + 0xb4) + local_28;
      }
      local_10[0xd] = iVar1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

