/* Entry 0x0890418C | file offset 0x00101164 | FUN_0890418c | bytes 100 */

void FUN_0890418c(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  FUN_08905848((int)param_1 + 0x11d);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  FUN_08935828(param_1 + 2,0,0x100);
  return;
}

