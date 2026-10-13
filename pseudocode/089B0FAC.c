/* Entry 0x089B0FAC | file offset 0x001ADF84 | FUN_089b0fac | bytes 32 */

void FUN_089b0fac(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x800;
  }
  return;
}

