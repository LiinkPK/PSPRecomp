/* Entry 0x0883EF24 | file offset 0x0003BEFC | FUN_0883ef24 | bytes 120 */

undefined4 FUN_0883ef24(float param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  for (; param_3 != 0; param_3 = *(int *)(param_3 + 0xc)) {
    if (param_1 <= (float)(int)*(short *)(param_3 + 4)) {
      uVar1 = 1;
      *param_2 = (*param_2 * (int)*(short *)(param_3 + 6)) / 100;
    }
  }
  return uVar1;
}

