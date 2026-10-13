/* Entry 0x0883EEBC | file offset 0x0003BE94 | FUN_0883eebc | bytes 104 */

undefined4 FUN_0883eebc(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    if (param_3 % (int)*(short *)(param_2 + 4) == 0) {
      uVar1 = 1;
      *param_1 = (*param_1 * (int)*(short *)(param_2 + 6)) / 100;
    }
  }
  return uVar1;
}

