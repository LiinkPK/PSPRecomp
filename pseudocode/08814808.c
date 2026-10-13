/* Entry 0x08814808 | file offset 0x000117E0 | FUN_08814808 | bytes 48 */

undefined4 FUN_08814808(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x390) + 0x2c) != 0) {
    uVar1 = FUN_08865780();
  }
  return uVar1;
}

