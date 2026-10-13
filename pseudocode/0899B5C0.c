/* Entry 0x0899B5C0 | file offset 0x00198598 | FUN_0899b5c0 | bytes 136 */

undefined4 FUN_0899b5c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint local_70 [8];
  uint local_50 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = param_1;
  local_2c = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_0899afc0(&local_30,local_70);
  FUN_0899afc0(&local_20,local_50);
  uVar1 = 0xffffffff;
  if ((1 < local_70[0]) && (1 < local_50[0])) {
    uVar1 = FUN_0899b0dc(local_70,local_50);
  }
  return uVar1;
}

