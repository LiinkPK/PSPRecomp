/* Entry 0x0883EE58 | file offset 0x0003BE30 | FUN_0883ee58 | bytes 100 */

undefined4 FUN_0883ee58(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    if (*(short *)(param_2 + 4) == param_3) {
      uVar1 = 1;
      *param_1 = (*param_1 * (int)*(short *)(param_2 + 6)) / 100;
    }
  }
  return uVar1;
}

