/* Entry 0x088A43B0 | file offset 0x000A1388 | FUN_088a43b0 | bytes 60 */

int FUN_088a43b0(int param_1)

{
  FUN_088a4b9c();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffa | 5;
  return param_1;
}

