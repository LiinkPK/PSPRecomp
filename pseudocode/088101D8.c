/* Entry 0x088101D8 | file offset 0x0000D1B0 | FUN_088101d8 | bytes 92 */

void FUN_088101d8(float param_1,int param_2)

{
  FUN_0886f08c(param_2 + 0x9c);
  FUN_0886ab1c(*(undefined4 *)(param_2 + 0x98),param_2 + 0x9c,1);
  *(float *)(param_2 + 0xb8) = *(float *)(param_2 + 0xb8) - param_1;
  return;
}

