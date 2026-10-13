/* Entry 0x08814854 | file offset 0x0001182C | FUN_08814854 | bytes 136 */

undefined4 FUN_08814854(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 0x380) & 0x800000) == 0) {
    if ((*(uint *)(*(int *)(param_1 + 0x30) + 0x380) & 0x4000000) == 0) {
      iVar1 = FUN_08837990();
      if (iVar1 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

