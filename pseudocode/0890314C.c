/* Entry 0x0890314C | file offset 0x00100124 | FUN_0890314c | bytes 56 */

bool FUN_0890314c(void)

{
  int iVar1;
  
  FUN_08903370();
  iVar1 = sceNetAdhocctlDisconnect();
  return -1 < iVar1;
}

