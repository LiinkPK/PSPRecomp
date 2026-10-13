/* Entry 0x088D9CFC | file offset 0x000D6CD4 | FUN_088d9cfc | bytes 40 */

void FUN_088d9cfc(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff7;
  FUN_088d9d24();
  return;
}

