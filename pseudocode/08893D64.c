/* Entry 0x08893D64 | file offset 0x00090D3C | FUN_08893d64 | bytes 72 */

void FUN_08893d64(int param_1)

{
  if ((*(char *)(param_1 + 0x610) == '\x01') && (*(char *)(param_1 + 0x564) == '\x01')) {
    FUN_088953bc(param_1 + 0x4e0);
  }
  else {
    FUN_088953bc();
  }
  return;
}

