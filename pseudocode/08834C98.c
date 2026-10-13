/* Entry 0x08834C98 | file offset 0x00031C70 | FUN_08834c98 | bytes 152 */

void FUN_08834c98(int param_1)

{
  if ((*(uint *)(param_1 + 0x388) & 1) == 0) {
    if (*(int *)(param_1 + 0x3ac) != 0) {
      FUN_0883e1f0();
    }
    FUN_088a26f8(0,param_1 + 0x510,1);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 1;
  }
  return;
}

