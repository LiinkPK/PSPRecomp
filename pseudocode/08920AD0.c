/* Entry 0x08920AD0 | file offset 0x0011DAA8 | FUN_08920ad0 | bytes 72 */

void FUN_08920ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x08b43424(param_2,**(undefined4 **)(param_1 + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x48) = *(undefined4 *)(iVar1 + 8);
  }
  return;
}

