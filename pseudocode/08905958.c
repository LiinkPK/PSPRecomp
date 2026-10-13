/* Entry 0x08905958 | file offset 0x00102930 | FUN_08905958 | bytes 68 */

undefined4 FUN_08905958(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x28) = 2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

