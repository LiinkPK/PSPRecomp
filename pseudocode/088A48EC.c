/* Entry 0x088A48EC | file offset 0x000A18C4 | FUN_088a48ec | bytes 56 */

void FUN_088a48ec(undefined4 param_1,int param_2,int param_3)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffffff7 | 8;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  if (param_3 == 0) {
    param_3 = 1;
  }
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x28) / (float)param_3;
  return;
}

