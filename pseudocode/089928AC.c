/* Entry 0x089928AC | file offset 0x0018F884 | FUN_089928ac | bytes 52 */

undefined4 FUN_089928ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_3 + 0x48) = param_1;
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 0x80;
    *(undefined4 *)(param_3 + 0x4c) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

