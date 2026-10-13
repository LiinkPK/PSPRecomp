/* Entry 0x0882F784 | file offset 0x0002C75C | FUN_0882f784 | bytes 336 */

void FUN_0882f784(int param_1)

{
  float fVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0882f8d4(&local_20,param_1);
  local_40 = local_20;
  local_3c = local_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (((*(uint *)(param_1 + 0x54) & 2) == 0) || ((*(uint *)(param_1 + 0x58) & 1) == 0)) {
    FUN_089a38e0(auStack_30,&local_40,param_1);
  }
  else {
    FUN_089a38e0(auStack_30,&local_40,param_1 + 0x20);
  }
  FUN_089a38a8(param_1 + 0x10,param_1 + 0x10,auStack_30);
  fVar1 = *(float *)(param_1 + 0x1c);
  if ((fVar1 <= -3.1415927) || (3.1415927 <= fVar1)) {
    if (0.0 < fVar1) {
      fVar1 = (float)FUN_089941c0(fVar1 + 3.1415927,0x40c90fdb);
      fVar1 = fVar1 - 3.1415927;
    }
    else {
      fVar1 = (float)FUN_089941c0(3.1415927 - fVar1,0x40c90fdb);
      fVar1 = 3.1415927 - fVar1;
    }
  }
  *(float *)(param_1 + 0x1c) = fVar1;
  FUN_089a3868(param_1,&local_40);
  return;
}

