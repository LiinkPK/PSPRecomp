/* Entry 0x0890C810 | file offset 0x001097E8 | FUN_0890c810 | bytes 96 */

undefined4 FUN_0890c810(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x358)) {
    iVar2 = *(int *)(param_1 + 0x44);
  }
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x48) < *(int *)(param_1 + iVar2 * 0x4c + 0x130) + 0x5a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

