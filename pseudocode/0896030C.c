/* Entry 0x0896030C | file offset 0x0015D2E4 | FUN_0896030c | bytes 364 */

undefined4 FUN_0896030c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  uVar5 = *(byte *)(param_3 + 0xc) + 1;
  param_1[1] = uVar5;
  param_1[2] = *(byte *)(param_3 + 0xd) + 1;
  uVar3 = 5;
  if (3 < uVar5) {
    uVar3 = uVar5;
  }
  param_1[3] = uVar3;
  local_14 = param_2;
  local_10 = param_1;
  iVar1 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),uVar5 * param_1[2] * 0x20,&local_20,1);
  if (iVar1 != 0) {
    iVar4 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_20;
  }
  *local_10 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = local_10[3] * (local_10[2] + -1);
    local_18 = iVar1 * 0x28;
    iVar1 = FUN_08971134(*(undefined4 *)(local_14 + 0x18),iVar1 * 0x50,&local_1c,1);
    if (iVar1 != 0) {
      iVar4 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_1c;
    }
    local_10[4] = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      local_10[5] = iVar1 + local_18;
      local_10[6] = 0;
      FUN_08960ebc(local_10,local_14);
      uVar2 = 1;
    }
  }
  return uVar2;
}

