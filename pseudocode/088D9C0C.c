/* Entry 0x088D9C0C | file offset 0x000D6BE4 | FUN_088d9c0c | bytes 84 */

void FUN_088d9c0c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x400;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x34) = 0;
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xf7ff;
  return;
}

