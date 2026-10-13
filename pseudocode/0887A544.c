/* Entry 0x0887A544 | file offset 0x0007751C | FUN_0887a544 | bytes 64 */

undefined4 FUN_0887a544(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    if (*(int *)(param_1 + 0x28) < 0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar1;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  return 0;
}

