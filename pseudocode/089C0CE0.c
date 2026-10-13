/* Entry 0x089C0CE0 | file offset 0x001BDCB8 | FUN_089c0ce0 | bytes 568 */

undefined4
FUN_089c0ce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [12];
  int local_54;
  undefined4 local_4c;
  int local_48;
  short local_42;
  undefined4 local_40;
  
  if ((param_1 == 0) || (param_5 == 0)) {
    return 0;
  }
  iVar1 = FUN_089c0a6c(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_089c0c0c(param_2,auStack_60);
  iVar1 = local_54 + -0x36;
  if (local_54 + -0x36 < 0) {
    iVar1 = local_54 + -0x33;
  }
  if (0 < iVar1 >> 2) {
    uVar2 = 0x10;
    if (0x10 < iVar1 >> 2) {
      uVar2 = 0x100;
    }
    if (local_42 < 0x10) {
      FUN_089bb5f8(1,param_5);
      FUN_089be508(0,3,0,uVar2,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
      uVar2 = FUN_089c0a94((int)local_42,local_40);
      if (local_48 < -local_48) {
        local_48 = -local_48;
      }
      FUN_089bb59c(1,param_5);
      FUN_089be508(0,uVar2,0,local_4c,local_48,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
      return 1;
    }
  }
  uVar2 = FUN_089c0a94((int)local_42,local_40);
  if (local_48 < -local_48) {
    local_48 = -local_48;
  }
  FUN_089bb59c(1,param_5);
  FUN_089be508(0,uVar2,0,local_4c,local_48,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
  return 1;
}

