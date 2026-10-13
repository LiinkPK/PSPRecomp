/* Entry 0x088C84E8 | file offset 0x000C54C0 | FUN_088c84e8 | bytes 100 */

int FUN_088c84e8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 * 2 + 1;
  if (uVar2 < *(uint *)(param_1 + 0xbda4)) {
    uVar2 = 199 - uVar2;
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

