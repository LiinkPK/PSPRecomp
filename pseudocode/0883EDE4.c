/* Entry 0x0883EDE4 | file offset 0x0003BDBC | FUN_0883ede4 | bytes 116 */

undefined4 FUN_0883ede4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    if (*(short *)(param_2 + 4) <= param_3 && param_3 <= *(short *)(param_2 + 6)) {
      uVar1 = 1;
      *param_1 = (*param_1 * (int)*(short *)(param_2 + 8)) / 100;
    }
  }
  return uVar1;
}

