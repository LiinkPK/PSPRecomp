/* Entry 0x08822A88 | file offset 0x0001FA60 | FUN_08822a88 | bytes 172 */

undefined4 FUN_08822a88(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 0xff7fffff;
    local_14 = 0x3f800000;
    local_1c = local_20;
    local_18 = local_20;
    FUN_089a3868(param_1 + 0x10,&local_20);
    local_14 = 0x3f800000;
    local_20 = 0x7f7fffff;
    local_1c = 0x7f7fffff;
    local_18 = 0x7f7fffff;
    FUN_089a3868(param_1,&local_20);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar1 = 0;
    *(uint *)(param_1 + 0x20) = uVar2 | 8;
    *(uint *)(param_1 + 0x20) = uVar2 | 0x18;
  }
  return uVar1;
}

