/* Entry 0x08884F24 | file offset 0x00081EFC | FUN_08884f24 | bytes 52 */

undefined4 FUN_08884f24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

