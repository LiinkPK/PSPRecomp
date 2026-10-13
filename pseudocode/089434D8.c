/* Entry 0x089434D8 | file offset 0x001404B0 | FUN_089434d8 | bytes 68 */

undefined4 FUN_089434d8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_2 + 4) == 1) {
    if (*(short *)(param_2 + 6) == 3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

