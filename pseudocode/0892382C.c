/* Entry 0x0892382C | file offset 0x00120804 | FUN_0892382c | bytes 336 */

void FUN_0892382c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_5c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xb4) != 0) {
    uVar1 = FUN_08925384();
    FUN_089a34f4(&local_20,uVar1,*(int *)(param_1 + 0x20) + 0x50);
    local_5c = local_1c;
    iVar2 = *(int *)(param_1 + 0x20);
    if (*(short *)(iVar2 + 0x16) == 0x53b) {
      local_5c = 0xc0100000;
    }
    if (*(int *)(iVar2 + 0xbc) != 0) {
      local_30 = local_20;
      local_2c = local_5c;
      local_28 = local_18;
      local_24 = 0x3f800000;
      FUN_088359a8(*(int *)(iVar2 + 0xbc),&local_30,0);
      iVar2 = *(int *)(param_1 + 0x20);
    }
    if (*(int *)(iVar2 + 0xc0) != 0) {
      FUN_088a7284(local_20,local_1c,local_18,*(int *)(iVar2 + 0xc0));
      iVar2 = *(int *)(param_1 + 0x20);
    }
    if (*(int *)(iVar2 + 0xc4) != 0) {
      FUN_088a7284(local_20,local_1c,local_18);
    }
  }
  return;
}

