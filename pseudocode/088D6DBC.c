/* Entry 0x088D6DBC | file offset 0x000D3D94 | FUN_088d6dbc | bytes 104 */

void FUN_088d6dbc(int param_1)

{
  FUN_088d9750(param_1 + 0x264);
  FUN_088d7bf0(param_1 + 0x244);
  FUN_088d9254(param_1 + 0x5c);
  FUN_088d85a4(param_1 + 0x4c);
  FUN_088d8030(param_1 + 0x24);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_088d6d90(param_1);
  return;
}

