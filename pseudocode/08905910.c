/* Entry 0x08905910 | file offset 0x001028E8 | FUN_08905910 | bytes 72 */

undefined4 FUN_08905910(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

