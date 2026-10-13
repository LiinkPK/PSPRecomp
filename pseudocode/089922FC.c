/* Entry 0x089922FC | file offset 0x0018F2D4 | FUN_089922fc | bytes 80 */

undefined4 FUN_089922fc(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[0xb] = 0;
  if (-1 < (int)param_1[1]) {
    sceAtracReleaseAtracID();
    param_1[1] = 0xffffffff;
  }
  return param_1[2];
}

