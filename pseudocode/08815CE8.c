/* Entry 0x08815CE8 | file offset 0x00012CC0 | FUN_08815ce8 | bytes 168 */

uint FUN_08815ce8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08822d30(param_1 + 0x570);
    if (iVar1 == 1) {
      uVar2 = FUN_08822d58(param_1 + 0x570);
    }
    else if (*(int *)(param_1 + 0x178) == 0) {
      uVar2 = 1;
    }
    else if (*(short *)(param_1 + 0x180) == 0x3e9) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)((*(uint *)(param_1 + 0x184) & 2) != 0);
    }
  }
  return uVar2;
}

