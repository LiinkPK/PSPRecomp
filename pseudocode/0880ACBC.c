/* Entry 0x0880ACBC | file offset 0x00007C94 | FUN_0880acbc | bytes 108 */

undefined4 FUN_0880acbc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 4 + ((uint)(int)*(short *)(param_2 + 0x26) >> 5) * 4) &
      1 << ((int)*(short *)(param_2 + 0x26) & 0x1fU)) == 0) {
    if (0.0 < *(float *)(param_1 + 0x44)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

