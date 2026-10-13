/* Entry 0x088147D8 | file offset 0x000117B0 | FUN_088147d8 | bytes 48 */

undefined4 FUN_088147d8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x390) + 0x28) != 0) {
    uVar1 = FUN_08865780();
  }
  return uVar1;
}

