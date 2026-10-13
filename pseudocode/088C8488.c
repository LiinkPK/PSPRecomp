/* Entry 0x088C8488 | file offset 0x000C5460 | FUN_088c8488 | bytes 96 */

int FUN_088c8488(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((uint)(param_2 * 2) < *(uint *)(param_1 + 0xbda4)) {
    uVar2 = param_2 * -2 + 199;
    if (uVar2 < 200) {
      iVar1 = param_1 + 0xa180 + uVar2 * 0x24;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

