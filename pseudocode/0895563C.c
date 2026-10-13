/* Entry 0x0895563C | file offset 0x00152614 | FUN_0895563c | bytes 176 */

undefined4 FUN_0895563c(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 10) == '\0') {
    uVar1 = *param_1;
    *param_1 = uVar1 + 1;
    if (param_3 <= uVar1 + 1) {
      if (*(char *)(param_2 + 0xb) != '\0') {
        *param_1 = 0;
        return 1;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      return 0;
    }
  }
  else {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *param_1 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * (float)(int)(param_3 - 1))
    ;
  }
  return 1;
}

