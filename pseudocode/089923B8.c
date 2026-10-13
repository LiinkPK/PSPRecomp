/* Entry 0x089923B8 | file offset 0x0018F390 | FUN_089923b8 | bytes 132 */

undefined4 FUN_089923b8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 < 1) {
      param_2 = 1;
    }
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff2 | 8;
    uVar1 = 0;
    *(float *)(param_1 + 0x24) = 1.0 / (float)param_2;
  }
  return uVar1;
}

