/* Entry 0x088C90C0 | file offset 0x000C6098 | FUN_088c90c0 | bytes 124 */

int FUN_088c90c0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < *(uint *)(param_1 + 0xbda8)) {
    uVar1 = FUN_088c9004(param_1,param_2);
    if (uVar1 < 200) {
      iVar2 = param_1 + 0xa180 + uVar1 * 0x24;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

