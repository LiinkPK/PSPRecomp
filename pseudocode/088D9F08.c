/* Entry 0x088D9F08 | file offset 0x000D6EE0 | FUN_088d9f08 | bytes 84 */

void FUN_088d9f08(float param_1,float *param_2)

{
  param_2[1] = param_1;
  if (*param_2 < param_1) {
    *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfffb;
  }
  else if (param_1 < *param_2) {
    *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 4;
  }
  return;
}

