/* Entry 0x088D9C60 | file offset 0x000D6C38 | FUN_088d9c60 | bytes 44 */

void FUN_088d9c60(int param_1,int param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xf7ff;
  *(float *)(param_1 + 0x10) = (float)param_2;
  *(float *)(param_1 + 0x14) = (float)param_3;
  return;
}

