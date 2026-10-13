/* Entry 0x0890C7B0 | file offset 0x00109788 | FUN_0890c7b0 | bytes 96 */

void FUN_0890c7b0(int param_1,char param_2)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_2 == '\x01') {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffc;
    FUN_088720b4(0);
    FUN_088720e4();
  }
  else {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  }
  return;
}

