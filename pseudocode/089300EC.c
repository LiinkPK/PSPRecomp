/* Entry 0x089300EC | file offset 0x0012D0C4 | FUN_089300ec | bytes 60 */

void FUN_089300ec(int param_1)

{
  if ((*(int *)(param_1 + 0x30) == 0) ||
     ((*(ushort *)(*(int *)(param_1 + 0x30) + 0x20) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  return;
}

