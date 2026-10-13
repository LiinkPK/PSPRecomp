/* Entry 0x08902ECC | file offset 0x000FFEA4 | FUN_08902ecc | bytes 144 */

bool FUN_08902ecc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_20 [8];
  
  FUN_08935828(auStack_20,0,8);
  FUN_08935bb4(auStack_20,param_2,8);
  iVar1 = sceNetAdhocctlCreate(auStack_20);
  if (-1 < iVar1) {
    FUN_08903370(param_1,param_3,param_4);
  }
  return -1 < iVar1;
}

