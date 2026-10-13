/* Entry 0x088DB2CC | file offset 0x000D82A4 | FUN_088db2cc | bytes 64 */

void FUN_088db2cc(int param_1,int param_2,short param_3)

{
  if (*(short *)(param_1 + 0x12) == param_3) {
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = param_2;
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf7;
  }
  return;
}

