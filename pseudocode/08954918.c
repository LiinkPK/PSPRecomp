/* Entry 0x08954918 | file offset 0x001518F0 | FUN_08954918 | bytes 176 */

undefined4 FUN_08954918(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x16) == '\0') {
    uVar1 = *(int *)(param_2 + 0x10) + 1;
    *(uint *)(param_2 + 0x10) = uVar1;
    if (param_3 <= uVar1) {
      if (*(char *)(param_1 + 0x17) != '\0') {
        *(undefined4 *)(param_2 + 0x10) = 0;
        return 1;
      }
      *(undefined1 *)(param_2 + 0x14) = 0;
      return 0;
    }
  }
  else {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(int *)(param_2 + 0x10) =
         (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * (float)(int)(param_3 - 1));
  }
  return 1;
}

