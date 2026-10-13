/* Entry 0x088063AC | file offset 0x00003384 | FUN_088063ac | bytes 116 */

void FUN_088063ac(undefined4 param_1,float param_2,float param_3,float param_4,int param_5)

{
  if (param_3 <= 0.0) {
    param_3 = 0.1;
  }
  *(float *)(param_5 + 0x494) = param_3;
  if (param_4 <= 0.0) {
    param_4 = 10.0;
  }
  *(float *)(param_5 + 0x498) = param_4;
  *(undefined4 *)(param_5 + 0x688) = param_1;
  *(float *)(param_5 + 0x68c) = param_2;
  if (param_2 == 0.0) {
    *(undefined4 *)(param_5 + 0x684) = *(undefined4 *)(param_5 + 0x688);
    *(undefined4 *)(param_5 + 0x490) = *(undefined4 *)(param_5 + 0x688);
    *(uint *)(param_5 + 0x380) = *(uint *)(param_5 + 0x380) | 0x200000;
  }
  return;
}

