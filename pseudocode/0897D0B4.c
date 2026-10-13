/* Entry 0x0897D0B4 | file offset 0x0017A08C | FUN_0897d0b4 | bytes 236 */

void FUN_0897d0b4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  FUN_08986f0c(*param_4,param_3,0,1,2);
  if (*(char *)(param_3 + 0x8c) != '\0') {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    param_4[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                 *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x58);
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    param_4[2] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                 *(float *)(param_3 + 0x5c) - *(float *)(param_3 + 0x5c);
  }
  return;
}

