/* Entry 0x088E8D3C | file offset 0x000E5D14 | FUN_088e8d3c | bytes 136 */

undefined4 * FUN_088e8d3c(undefined4 *param_1)

{
  FUN_08864ff0(param_1 + 1,1,0x11171,0x54);
  FUN_088dfcf8(param_1 + 0x24);
  FUN_088d6c9c(param_1 + 0x61d);
  FUN_088ce334(param_1 + 0x6bc);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 0x1b05) = 0;
  *(undefined1 *)(param_1 + 0x6c1) = 0;
  param_1[0x618] = 0;
  param_1[0x619] = 4;
  *(undefined1 *)((int)param_1 + 0x1b06) = 0;
  *(undefined1 *)((int)param_1 + 0x184a) = 1;
  FUN_088e9228(param_1);
  return param_1;
}

