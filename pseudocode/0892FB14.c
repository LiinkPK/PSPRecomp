/* Entry 0x0892FB14 | file offset 0x0012CAEC | FUN_0892fb14 | bytes 108 */

void FUN_0892fb14(int param_1)

{
  if ((*(ushort *)(*(int *)(param_1 + 0x34) + 0x20) & 0x20) != 0) {
    FUN_0892f6dc(param_1);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(code **)(param_1 + 0x150) != (code *)0x0) {
      (**(code **)(param_1 + 0x150))();
    }
  }
  return;
}

