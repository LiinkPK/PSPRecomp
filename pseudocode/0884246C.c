/* Entry 0x0884246C | file offset 0x0003F444 | FUN_0884246c | bytes 88 */

void FUN_0884246c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088427f4(param_1,iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0xc;
  } while (iVar2 < 3);
  return;
}

