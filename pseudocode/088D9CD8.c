/* Entry 0x088D9CD8 | file offset 0x000D6CB0 | FUN_088d9cd8 | bytes 36 */

void FUN_088d9cd8(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  FUN_088d9d24();
  return;
}

