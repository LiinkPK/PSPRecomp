/* Entry 0x0882F49C | file offset 0x0002C474 | FUN_0882f49c | bytes 72 */

void FUN_0882f49c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3 + *(int *)(param_3 + 0x98) * 0xc;
  uVar1 = *(int *)(param_3 + 0x98) + 1;
  if ((int)uVar1 < 0) {
    uVar1 = -(-uVar1 & 0xf);
  }
  else {
    uVar1 = uVar1 & 0xf;
  }
  *(uint *)(param_3 + 0x98) = uVar1;
  *(undefined4 *)(iVar2 + 0xa0) = param_4;
  *(undefined4 *)(iVar2 + 0xa4) = param_1;
  *(undefined4 *)(iVar2 + 0xa8) = param_2;
  return;
}

