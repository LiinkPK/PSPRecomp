/* Entry 0x088C9044 | file offset 0x000C601C | FUN_088c9044 | bytes 124 */

int FUN_088c9044(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < *(uint *)(param_1 + 0xbda8)) {
    uVar1 = FUN_088c9004(param_1,param_2);
    if (uVar1 < 200) {
      iVar2 = param_1 + uVar1 * 0x24 + 0xa180;
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

