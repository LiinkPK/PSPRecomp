/* Entry 0x08837F6C | file offset 0x00034F44 | FUN_08837f6c | bytes 264 */

undefined4 FUN_08837f6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (((*(uint *)(param_1 + 0x388) & 1) == 0) && (iVar1 = FUN_08837990(param_1), iVar1 == 0)) {
    uVar3 = *(uint *)(param_1 + 0x380);
    if ((uVar3 & 0x800000) == 0) {
      if ((uVar3 & 0x200000) == 0) {
        if (((*(uint *)(param_1 + 0x388) & 0x40000000) == 0) && ((uVar3 & 0x4000000) != 0)) {
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
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

