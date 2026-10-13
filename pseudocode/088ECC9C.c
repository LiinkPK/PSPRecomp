/* Entry 0x088ECC9C | file offset 0x000E9C74 | FUN_088ecc9c | bytes 124 */

void FUN_088ecc9c(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_088d4c5c();
  FUN_08873d34((float)iVar1,3,FUN_088ecd98,param_1,0,2);
  local_20 = 0x437f0000;
  local_1c = 0x437f0000;
  local_18 = 0x437f0000;
  local_14 = 0x437f0000;
  FUN_08873db0(&local_20,2);
  *(undefined4 *)(param_1 + 0x2c) = 3;
  return;
}

