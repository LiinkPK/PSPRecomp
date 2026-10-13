/* Entry 0x08908FAC | file offset 0x00105F84 | FUN_08908fac | bytes 48 */

void FUN_08908fac(int param_1)

{
  if (*(char *)(param_1 + 0x25c) == '\x01') {
    *(undefined1 *)(param_1 + 0x25c) = 0;
    FUN_08908fdc(param_1,4);
  }
  return;
}

