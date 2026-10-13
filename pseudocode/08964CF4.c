/* Entry 0x08964CF4 | file offset 0x00161CCC | FUN_08964cf4 | bytes 440 */

void FUN_08964cf4(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x48) != '\0') {
    if (*(int *)(param_2 + 0x2c) < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x30);
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar1 + *(int *)(param_2 + 0x2c) * 4) + 0x10);
      }
    }
    if (iVar1 != -1) {
      *(float *)(param_3 + 0x18) = (float)*(ushort *)(param_2 + 0x44);
      *(float *)(param_3 + 0x1c) = (float)*(ushort *)(param_2 + 0x46);
      if (*(char *)(param_2 + 0x49) == '\0') {
        *(float *)(param_3 + 0x10) = (float)*(ushort *)(param_2 + 0x40);
      }
      else if (param_4 != '\0') {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *(float *)(param_3 + 0x10) =
             ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
             (*(float *)(param_3 + 0x18) - (float)*(ushort *)(param_2 + 0x40)) +
             (float)*(ushort *)(param_2 + 0x40);
      }
      if (*(char *)(param_2 + 0x4a) == '\0') {
        *(float *)(param_3 + 0x14) = (float)*(ushort *)(param_2 + 0x42);
      }
      else if (param_4 != '\0') {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *(float *)(param_3 + 0x14) =
             ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
             (*(float *)(param_3 + 0x1c) - (float)*(ushort *)(param_2 + 0x42)) +
             (float)*(ushort *)(param_2 + 0x42);
      }
    }
  }
  return;
}

