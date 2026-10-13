/* Entry 0x08837310 | file offset 0x000342E8 | FUN_08837310 | bytes 80 */

undefined4 FUN_08837310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((*(uint *)(param_1 + 900) & 0x20000) != 0) || (iVar1 = FUN_08837360(), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

