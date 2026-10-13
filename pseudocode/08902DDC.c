/* Entry 0x08902DDC | file offset 0x000FFDB4 | FUN_08902ddc | bytes 96 */

bool FUN_08902ddc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = sceNetAdhocctlScan();
  if (-1 < iVar1) {
    FUN_08903370(param_1,param_2,param_3);
  }
  return -1 < iVar1;
}

