/* Entry 0x0883EF9C | file offset 0x0003BF74 | FUN_0883ef9c | bytes 120 */

undefined4 FUN_0883ef9c(float param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  for (; param_3 != 0; param_3 = *(int *)(param_3 + 0xc)) {
    if ((float)(int)*(short *)(param_3 + 4) <= param_1) {
      uVar1 = 1;
      *param_2 = (*param_2 * (int)*(short *)(param_3 + 6)) / 100;
    }
  }
  return uVar1;
}

