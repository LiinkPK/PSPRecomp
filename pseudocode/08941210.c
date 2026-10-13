/* Entry 0x08941210 | file offset 0x0013E1E8 | FUN_08941210 | bytes 64 */

void FUN_08941210(int param_1,char param_2)

{
  *(uint *)(*(int *)(param_1 + 0x14) + 0x40) = (uint)(param_2 == '\x01');
  FUN_0897371c(*(undefined4 *)(param_1 + 0x14),1,1,1,1);
  return;
}

