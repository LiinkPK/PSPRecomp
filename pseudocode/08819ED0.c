/* Entry 0x08819ED0 | file offset 0x00016EA8 | FUN_08819ed0 | bytes 48 */

void FUN_08819ed0(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffe | 0x7fffe;
  param_1[1] = 0;
  return;
}

