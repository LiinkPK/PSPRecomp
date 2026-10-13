/* Entry 0x0890345C | file offset 0x00100434 | FUN_0890345c | bytes 88 */

bool FUN_0890345c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = 1;
  FUN_08935524(param_1 + 1,param_2,8);
  param_1[3] = 0x14;
  iVar1 = sceNetAdhocDiscoverInitStart(param_1);
  return -1 < iVar1;
}

