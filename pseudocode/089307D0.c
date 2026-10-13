/* Entry 0x089307D0 | file offset 0x0012D7A8 | FUN_089307d0 | bytes 108 */

void FUN_089307d0(int param_1)

{
  if (*(short *)(*(int *)(param_1 + 0x14) + 0xc) == 0x17) {
    FUN_088d9f5c(*(int *)(param_1 + 0x14),0x17,1);
    FUN_088d9f5c(*(undefined4 *)(param_1 + 0x10),
                 *(undefined2 *)(&DAT_089cf1ba + *(int *)(param_1 + 0x54) * 4),1);
  }
  return;
}

